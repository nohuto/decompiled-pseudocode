/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB338
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AA344 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AE2F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapture.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AE404 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Fi_ea_1800AE404.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitializedDisplayEntry@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800CBDB0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_PartiallyInitia.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A9884 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AAEB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
