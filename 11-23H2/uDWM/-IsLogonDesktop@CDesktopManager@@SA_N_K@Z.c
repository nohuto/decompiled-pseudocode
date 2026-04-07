/*
 * XREFs of ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180051228
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18000E380 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18001FC44 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x180028AD8 (-IsInLogonDesktop@CDesktopManager@@SA_NXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002E98C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180050E14 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18005271C (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180101FC4 (-IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopManager::IsLogonDesktop(__int64 a1)
{
  int DesktopID; // eax
  char v3; // dl
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  DesktopID = GetDesktopID(4LL, &v5);
  v3 = 0;
  if ( DesktopID )
    return v5 == a1;
  return v3;
}
