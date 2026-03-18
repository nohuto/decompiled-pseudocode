/*
 * XREFs of Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 * Callees:
 *     Feature_5466_1379__private_IsEnabledFallback @ 0x14057C4A4 (Feature_5466_1379__private_IsEnabledFallback.c)
 */

__int64 Feature_5466_1379__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_5466_1379__private_featureState & 0x10) != 0 )
    return Feature_5466_1379__private_featureState & 1;
  else
    return Feature_5466_1379__private_IsEnabledFallback((unsigned int)Feature_5466_1379__private_featureState, 3LL);
}
