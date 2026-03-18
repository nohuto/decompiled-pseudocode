/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404F0A84
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x1405BE08C (Feature_HeteroRescheduleFixes__private_IsEnabledFallback.c)
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
