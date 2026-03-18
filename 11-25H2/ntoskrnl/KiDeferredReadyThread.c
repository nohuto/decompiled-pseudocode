/*
 * XREFs of KiDeferredReadyThread @ 0x1402F13A0
 * Callers:
 *     KiFastReadyThread @ 0x1402F12A8 (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiDeferredReadyThread(struct _KPRCB *a1, ULONG_PTR a2, __int64 a3)
{
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v5; // di
  struct _SINGLE_LIST_ENTRY v7; // [rsp+30h] [rbp+8h] BYREF

  v7.Next = 0LL;
  KiDeferredReadySingleThread(a1, a2, &v7, a3);
  Next = v7.Next;
  if ( v7.Next )
  {
    v5 = 1;
    v7.Next = v7.Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v7, 0LL);
      Next = v7.Next;
      ++v5;
      if ( v7.Next )
        v7.Next = v7.Next->Next;
      if ( (v5 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  return KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
}
