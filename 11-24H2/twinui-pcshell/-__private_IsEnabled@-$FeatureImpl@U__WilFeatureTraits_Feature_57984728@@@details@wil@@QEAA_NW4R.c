/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803A4828
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803A2DD0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A265C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803A4158 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
