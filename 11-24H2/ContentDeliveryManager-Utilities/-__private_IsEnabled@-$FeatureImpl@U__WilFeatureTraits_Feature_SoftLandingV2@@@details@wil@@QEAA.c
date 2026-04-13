/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAA_NXZ @ 0x18005BD9C
 * Callers:
 *     _lambda_2529ad0dec5f54d20ff98b6efe69c89b_::_lambda_invoker_cdecl_ @ 0x180045810 (_lambda_2529ad0dec5f54d20ff98b6efe69c89b_--_lambda_invoker_cdecl_.c)
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A05BC (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800504C4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800568BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftLandingV2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftLandingV2>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftLandingV2>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
