/*
 * XREFs of CmpCompleteLazyWrite @ 0x140492460
 * Callers:
 *     CmpLazyWriteWorker @ 0x140666B00 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 */

void __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // rbp
  KIRQL v5; // al
  struct _LIST_ENTRY *Blink; // r9
  KIRQL v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG v10; // r8d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  Blink = Timer[2].TimerListEntry.Blink;
  v7 = v5;
  if ( a2 || ((unsigned __int8)Blink & 7) == 3 )
  {
    v8 = 1LL;
    if ( a2 )
    {
      v9 = *a2;
    }
    else
    {
      v9 = 20000000LL;
      v10 = 1000;
      v11 = (unsigned __int64)Blink & 0xFFFFFFFFFFFFFFF8uLL;
      if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= v11 )
        goto LABEL_8;
      v12 = v11 - (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]);
      if ( v12 <= 0x1312D00 )
        goto LABEL_8;
      v9 = v12;
    }
    v10 = *(_DWORD *)&Timer[2].Processor;
LABEL_8:
    KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v9, 0, v10, (PKDPC)&Timer[1]);
    goto LABEL_4;
  }
  v8 = 0LL;
LABEL_4:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v8;
  KeReleaseSpinLock(p_QuadPart, v7);
}
