/*
 * XREFs of Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4
 * Callers:
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14070B734 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     Feature_5645_7108__private_IsEnabledFallback @ 0x1405804D8 (Feature_5645_7108__private_IsEnabledFallback.c)
 */

__int64 Feature_5645_7108__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_5645_7108__private_featureState & 0x10) != 0 )
    return Feature_5645_7108__private_featureState & 1;
  else
    return Feature_5645_7108__private_IsEnabledFallback((unsigned int)Feature_5645_7108__private_featureState, 3LL);
}
