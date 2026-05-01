/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2_Master@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803C1F70
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803BB730 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@detail.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2_Master@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803BA090 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2_Master@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2_Master@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BF124 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2_Master@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2_Master>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2_Master>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2_Master>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
