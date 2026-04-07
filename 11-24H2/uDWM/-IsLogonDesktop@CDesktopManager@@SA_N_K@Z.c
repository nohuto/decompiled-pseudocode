/*
 * XREFs of ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4
 * Callers:
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002EFF8 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800330BC (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18007ACB0 (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18007E2E8 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800E9968 (-IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800F1CD0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopManager::IsLogonDesktop(__int64 a1)
{
  CDesktopManager *v1; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) )
  {
    GetDesktopID(4LL, (char *)CDesktopManager::s_pDesktopManagerInstance + 432);
    v1 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return a1 == *((_QWORD *)v1 + 54);
}
