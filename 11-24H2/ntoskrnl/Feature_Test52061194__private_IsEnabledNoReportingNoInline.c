/*
 * XREFs of Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90
 * Callers:
 *     HalpScanForProfilingCorruptionInternal @ 0x1404358DC (HalpScanForProfilingCorruptionInternal.c)
 *     HalpPerfInterrupt @ 0x1404359F0 (HalpPerfInterrupt.c)
 *     HalpCollectProfileOwnershipStatusInternal @ 0x14054300C (HalpCollectProfileOwnershipStatusInternal.c)
 *     HalpCollectSamplingProfileCorruptionStatusInternal @ 0x1405432EC (HalpCollectSamplingProfileCorruptionStatusInternal.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledFallback @ 0x1404F3F70 (Feature_Test52061194__private_IsEnabledFallback.c)
 */

__int64 Feature_Test52061194__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Test52061194__private_featureState & 2) != 0 )
    return Feature_Test52061194__private_featureState & 1;
  else
    return Feature_Test52061194__private_IsEnabledFallback(
             (unsigned int)Feature_Test52061194__private_featureState,
             0LL);
}
