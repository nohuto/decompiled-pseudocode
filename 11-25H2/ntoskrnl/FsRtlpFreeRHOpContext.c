/*
 * XREFs of FsRtlpFreeRHOpContext @ 0x14057D960
 * Callers:
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpFreeRHOpContext(char *P, char a2)
{
  if ( a2 )
    FsRtlpSyncWithAckTimeout(P + 88);
  ExFreePoolWithTag(P, 0);
}
