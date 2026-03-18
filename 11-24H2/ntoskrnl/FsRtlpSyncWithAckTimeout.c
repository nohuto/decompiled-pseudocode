/*
 * XREFs of FsRtlpSyncWithAckTimeout @ 0x14058178C
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
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
