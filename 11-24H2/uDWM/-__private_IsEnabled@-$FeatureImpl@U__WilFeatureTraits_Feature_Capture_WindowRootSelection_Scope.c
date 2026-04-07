/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAA_NXZ @ 0x1800B53C8
 * Callers:
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800ADC14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelect.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFE78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped@@@deta.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowRootSelection_Scoped>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
