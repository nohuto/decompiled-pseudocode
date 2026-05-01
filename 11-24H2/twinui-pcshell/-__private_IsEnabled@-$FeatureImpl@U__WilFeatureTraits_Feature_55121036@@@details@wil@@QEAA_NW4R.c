/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806369DC
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624304 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57343652@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180623348 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180634164 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
