/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14043D9A0
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 * Callees:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x1404F8D74 (Feature_HeteroRescheduleFixes__private_IsEnabledFallback.c)
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
