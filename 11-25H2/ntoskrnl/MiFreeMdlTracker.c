/*
 * XREFs of MiFreeMdlTracker @ 0x14046F5D8
 * Callers:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     MiValidateMdlTracker @ 0x1404AD7B8 (MiValidateMdlTracker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiReadProcessNumberOfLockedPages @ 0x14065ECC8 (MiReadProcessNumberOfLockedPages.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // r14
  volatile LONG *p_Blink; // rcx
  KIRQL v8; // r12
  struct _LIST_ENTRY *v9; // rbx
  ULONG_PTR ProcessNumberOfLockedPages; // r9

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  if ( v2 || (v2 = PsInitialSystemProcess) != 0LL )
  {
    Flink = v2[2].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v6 = 0LL;
      p_Blink = (volatile LONG *)&Flink[1].Blink;
      if ( KeGetCurrentIrql() == 2 )
      {
        v8 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
      }
      else
      {
        v8 = ExAcquireSpinLockExclusive(p_Blink);
      }
      v9 = Flink->Flink;
      while ( v9 )
      {
        if ( (struct _LIST_ENTRY *)BugCheckParameter2 < v9[1].Blink )
        {
          v9 = v9->Flink;
        }
        else
        {
          if ( (struct _LIST_ENTRY *)BugCheckParameter2 <= v9[1].Blink )
            break;
          v9 = v9->Blink;
        }
      }
      if ( v9 )
      {
        v6 = v9;
        MiValidateMdlTracker((ULONG_PTR)v9);
        RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)v9);
        Flink[1].Flink = (struct _LIST_ENTRY *)((char *)Flink[1].Flink - a2);
      }
      MiReleaseSpinLockExclusive(&Flink[1].Blink, v8);
      if ( v6 )
      {
        ExFreeToNPagedLookasideList(&Lookaside, v6);
      }
      else if ( HIDWORD(Flink[1].Blink) )
      {
        if ( MmNumLockedPagesFixEnabled )
          ProcessNumberOfLockedPages = MiReadProcessNumberOfLockedPages(v2);
        else
          ProcessNumberOfLockedPages = v2[1].Padding[1];
        KeBugCheckEx(
          0x76u,
          1uLL,
          BugCheckParameter2,
          ProcessNumberOfLockedPages,
          (ULONG_PTR)v2[2].Header.WaitListHead.Flink);
      }
    }
  }
  return 1LL;
}
