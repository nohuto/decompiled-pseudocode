/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800B5404
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180057DA8 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009807C (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800B3714 (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800CEEB0 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800977E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ADD44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@detai.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
