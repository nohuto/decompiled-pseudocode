/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404457F0
 * Callers:
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14029D8F0 (KiCheckPreferredHeteroProcessor.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 * Callees:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x1404FB494 (Feature_HeteroRescheduleFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_HeteroRescheduleFixes__private_featureState & 2) != 0 )
    return Feature_HeteroRescheduleFixes__private_featureState & 1;
  else
    return Feature_HeteroRescheduleFixes__private_IsEnabledFallback(
             (unsigned int)Feature_HeteroRescheduleFixes__private_featureState,
             0LL);
}
