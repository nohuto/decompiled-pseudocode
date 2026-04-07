/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2601@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BB870
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800BA21C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2601@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B94A8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2601@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2601@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB25C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2601@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2601>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2601>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2601>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
