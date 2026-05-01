/*
 * XREFs of ??1?$ComPtr@UIFullscreenShellHostManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E3090
 * Callers:
 *     _CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss_::_1_::dtor$0 @ 0x1806DF22C (_CBaseTrayFlyoutExperienceManager--UpdateFocusOnDismiss_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$2 @ 0x1806E20DB (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::HandleGamingPostureHotkey_::_1_::dtor$0 @ 0x1806E2ABF (_GamingOverlayExperienceManager--HandleGamingPostureHotkey_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$1 @ 0x1806E3444 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$1.c)
 *     _RdpShellExtensionHost::CreateRdpShellExtension_::_1_::dtor$0 @ 0x1806ECF4B (_RdpShellExtensionHost--CreateRdpShellExtension_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFullscreenShellHostManager>::~ComPtr<IFullscreenShellHostManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(a1);
}
