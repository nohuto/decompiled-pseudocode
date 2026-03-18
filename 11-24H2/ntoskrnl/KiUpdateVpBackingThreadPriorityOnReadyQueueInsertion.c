/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x14030EB30
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAddThreadToScbQueue @ 0x14030EA24 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14030EBE4 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v5 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL, a3, a4) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v6 = (_QWORD *)(a1 + 1008);
      if ( *v6 == 1LL )
      {
        v7 = (_QWORD *)qword_140F223C8;
        v5 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F223C8 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v6 = &KiUpdateVpThreadPriorityListHead;
        v6[1] = v7;
        *v7 = v6;
        qword_140F223C8 = (__int64)v6;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v5 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
}
