/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences@@@details@wil@@QEAA_NXZ @ 0x18005BD60
 * Callers:
 *     _lambda_1cddd30b9fb8fad576b2827d7d00f41c_::_lambda_invoker_cdecl_ @ 0x180045790 (_lambda_1cddd30b9fb8fad576b2827d7d00f41c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004FEEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DeleteMinuteZeroExperien.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056580 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences@@@details@wil.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DeleteMinuteZeroExperiences>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
