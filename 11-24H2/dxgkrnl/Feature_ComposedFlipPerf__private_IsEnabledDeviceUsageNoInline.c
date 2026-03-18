/*
 * XREFs of Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline @ 0x14009BF78
 * Callers:
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005F2B0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z @ 0x14009BAE0 (-CalcTokenTargetTime@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@_N@Z.c)
 *     ?SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x14009BEF8 (-SyncIntervalSatisfied@CFlipToken@@IEAA_NAEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 * Callees:
 *     Feature_ComposedFlipPerf__private_IsEnabledFallback @ 0x14009BFB0 (Feature_ComposedFlipPerf__private_IsEnabledFallback.c)
 */

__int64 Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ComposedFlipPerf__private_featureState & 0x10) != 0 )
    return Feature_ComposedFlipPerf__private_featureState & 1;
  else
    return Feature_ComposedFlipPerf__private_IsEnabledFallback(
             (unsigned int)Feature_ComposedFlipPerf__private_featureState,
             3LL);
}
