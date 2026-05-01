/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803356E8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18033031C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032F3FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803324A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
