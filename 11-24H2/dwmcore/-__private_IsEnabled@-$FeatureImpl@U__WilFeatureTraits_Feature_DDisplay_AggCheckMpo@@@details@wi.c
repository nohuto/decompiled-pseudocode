/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18026D2E8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18026B48C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@d.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18026A360 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@d.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18026C8AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAAX.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::ReportUsage((int *)a1, v5 & 1, 0, v3);
  return v2;
}
