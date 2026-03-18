/*
 * XREFs of Feature_YieldInputQueue2__private_GetVariant @ 0x14027F2D4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x140185D10 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140236B90 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14027A4F0 (-ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x14027F3CC (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 Feature_YieldInputQueue2__private_GetVariant()
{
  unsigned int v0; // eax

  v0 = Feature_YieldInputQueue2__private_featureState;
  if ( (Feature_YieldInputQueue2__private_featureState & 8) == 0 )
    v0 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           &Feature_YieldInputQueue2__private_featureState,
           Feature_YieldInputQueue2__private_featureState,
           &Feature_YieldInputQueue2__private_descriptor);
  return (v0 >> 12) & 0x3F;
}
