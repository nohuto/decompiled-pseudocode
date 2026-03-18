/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140430330
 * Callers:
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1)
{
  bool v2; // di
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v3 = (_QWORD *)(a1 + 1008);
      if ( *v3 == 1LL )
      {
        v4 = (_QWORD *)qword_140F21B28;
        v2 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F21B28 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v3 = &KiUpdateVpThreadPriorityListHead;
        v3[1] = v4;
        *v4 = v3;
        qword_140F21B28 = (__int64)v3;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v2 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
}
