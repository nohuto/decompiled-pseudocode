/*
 * XREFs of Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x1404F1E78
 * Callers:
 *     HalpScanForProfilingCorruptionInternal @ 0x14043FC2C (HalpScanForProfilingCorruptionInternal.c)
 *     HalpPerfInterrupt @ 0x140471AF0 (HalpPerfInterrupt.c)
 *     HalpCollectProfileOwnershipStatusInternal @ 0x140542E5C (HalpCollectProfileOwnershipStatusInternal.c)
 *     HalpCollectSamplingProfileCorruptionStatusInternal @ 0x14054313C (HalpCollectSamplingProfileCorruptionStatusInternal.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledFallback @ 0x1404F1EB0 (Feature_Test52061194__private_IsEnabledFallback.c)
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
