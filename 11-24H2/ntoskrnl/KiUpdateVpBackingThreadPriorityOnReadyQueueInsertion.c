/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402D8590
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
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
        v7 = (_QWORD *)qword_140F22508;
        v5 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F22508 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v6 = &KiUpdateVpThreadPriorityListHead;
        v6[1] = v7;
        *v7 = v6;
        qword_140F22508 = (__int64)v6;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v5 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
}
