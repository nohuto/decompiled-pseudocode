/*
 * XREFs of FsRtlpSyncWithAckTimeout @ 0x14057DFDC
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall FsRtlpSyncWithAckTimeout(PVOID *a1)
{
  struct _KTIMER *v2; // rcx
  BOOLEAN v3; // al

  v2 = (struct _KTIMER *)*a1;
  if ( v2 )
  {
    if ( !BYTE4(v2[2].Dpc) || (v3 = KeCancelTimer(v2), v2 = (struct _KTIMER *)*a1, v3) )
    {
      ObfDereferenceObjectWithTag(v2[2].TimerListEntry.Blink, 0x746C6644u);
      ExFreeToNPagedLookasideList(&g_OplockAckTimeoutLookaside, *a1);
    }
    else
    {
      BYTE5(v2[2].Dpc) = 1;
    }
    *a1 = 0LL;
  }
}
