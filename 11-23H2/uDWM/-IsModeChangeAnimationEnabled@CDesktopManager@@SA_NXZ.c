/*
 * XREFs of ?IsModeChangeAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x18005F008
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool CDesktopManager::IsModeChangeAnimationEnabled(void)
{
  return !CDesktopManager::s_forceDisableModeChangeAnimation;
}
