/*
 * XREFs of Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140441B90
 * Callers:
 *     HalpScanForProfilingCorruptionInternal @ 0x1404419E4 (HalpScanForProfilingCorruptionInternal.c)
 *     HalpPerfInterrupt @ 0x140441AF0 (HalpPerfInterrupt.c)
 *     HalpCollectProfileOwnershipStatusInternal @ 0x14054574C (HalpCollectProfileOwnershipStatusInternal.c)
 *     HalpCollectSamplingProfileCorruptionStatusInternal @ 0x140545A2C (HalpCollectSamplingProfileCorruptionStatusInternal.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledFallback @ 0x1404F668C (Feature_Test52061194__private_IsEnabledFallback.c)
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
