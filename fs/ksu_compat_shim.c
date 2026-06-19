#include <linux/module.h>
#include <ksu_hook.h>

bool ksu_is_init_rc_hook_enabled(void)
{
#ifdef KSU_HOOK_INIT_RC
    return ksu_get_hook_state(KSU_HOOK_INIT_RC);
#else
    return false;
#endif
}
EXPORT_SYMBOL_GPL(ksu_is_init_rc_hook_enabled);
