/*
 * XREFs of ?SupportsTouch@MPCHandProcessor@@UEAA_NXZ @ 0x1800C1610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1190 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wi.c)
 */

char __fastcall MPCHandProcessor::SupportsTouch(MPCHandProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 1;
}
