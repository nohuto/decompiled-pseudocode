/*
 * XREFs of FsRtlpSyncWithAckTimeout @ 0x14057EB0C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057DC84 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057E1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070919C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
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
