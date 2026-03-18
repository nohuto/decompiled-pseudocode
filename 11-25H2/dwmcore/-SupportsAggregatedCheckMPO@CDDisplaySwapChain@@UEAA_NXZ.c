/*
 * XREFs of ?SupportsAggregatedCheckMPO@CDDisplaySwapChain@@UEAA_NXZ @ 0x180246F70
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

bool __fastcall CDDisplaySwapChain::SupportsAggregatedCheckMPO(CDDisplaySwapChain *this)
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) != 0;
}
