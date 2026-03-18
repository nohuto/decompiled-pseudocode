/*
 * XREFs of Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406FF854 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     Feature_5645_7108__private_IsEnabledFallback @ 0x14057D1F0 (Feature_5645_7108__private_IsEnabledFallback.c)
 */

__int64 Feature_5645_7108__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_5645_7108__private_featureState & 0x10) != 0 )
    return Feature_5645_7108__private_featureState & 1;
  else
    return Feature_5645_7108__private_IsEnabledFallback((unsigned int)Feature_5645_7108__private_featureState, 3LL);
}
