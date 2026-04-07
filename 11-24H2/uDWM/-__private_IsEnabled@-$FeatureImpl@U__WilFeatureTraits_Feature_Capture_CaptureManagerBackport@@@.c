/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180006DF8 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B030 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001BB58 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180052B98 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008F394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnProcessDisconnected@CWindowList@@UEAAJK@Z @ 0x180090480 (-OnProcessDisconnected@CWindowList@@UEAAJK@Z.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18009052C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18009282C (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800F0E70 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F14D8 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F1570 (-OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x1800F15E4 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800F359C (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800F3C10 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B8A3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BAE38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
