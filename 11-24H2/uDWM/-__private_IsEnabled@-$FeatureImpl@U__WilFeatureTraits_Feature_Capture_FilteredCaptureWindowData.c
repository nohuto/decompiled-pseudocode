/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800B5348
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AE2F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapture.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AD9F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFD5C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::ReportUsage(
    (int *)a1,
    v5 & 1,
    0,
    v3);
  return v2;
}
