/*
 * XREFs of _lambda_2529ad0dec5f54d20ff98b6efe69c89b_::_lambda_invoker_cdecl_ @ 0x180045610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005672C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAA_NXZ @ 0x18005B8C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftLandingV2@@@details@wil@@QEAA.c)
 */

bool __fastcall lambda_2529ad0dec5f54d20ff98b6efe69c89b_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsTips>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl,
    a2);
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftLandingV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftLandingV2>::GetImpl'::`2'::impl) == 0;
}
