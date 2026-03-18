/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x1407B0420
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     PsQuitNextPartition @ 0x1405DA7B4 (PsQuitNextPartition.c)
 *     ExpWorkQueueManagerStart @ 0x1407B0B28 (ExpWorkQueueManagerStart.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A04848 (KeSynchronizeWithDynamicProcessors.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  _QWORD *NextPartition; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors(a1, a2, a3, a4);
  v5 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v5);
    v7 = NextPartition;
    if ( !NextPartition )
      break;
    v8 = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(NextPartition[2] + 16LL) + 8LL * *a1));
    v5 = v7;
    if ( v8 < 0 )
    {
      PsQuitNextPartition(v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *((_QWORD *)a1 + 103) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 412), DelayedWorkQueue);
      return;
    }
  }
}
