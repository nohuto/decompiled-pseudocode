/*
 * XREFs of KiDeferredReadyThread @ 0x1403386A0
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x1403385A4 (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiDeferredReadyThread(struct _KPRCB *a1, unsigned __int64 a2, __int64 a3)
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
      KiDeferredReadySingleThread(a1, (unsigned __int64)&Next[-27], &v7, 0LL);
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
