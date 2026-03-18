/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x140A17A2C
 * Callers:
 *     ExpPartitionInitialize @ 0x1407B06B4 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140A174BC (ExpPartitionCreatePoolDelayed.c)
 *     ExpPartitionCreatePool @ 0x140AB5BB0 (ExpPartitionCreatePool.c)
 * Callees:
 *     ExpWorkQueueDestroy @ 0x1407B0908 (ExpWorkQueueDestroy.c)
 *     ExpWorkQueueInitialize @ 0x1407B099C (ExpWorkQueueInitialize.c)
 *     ExpCreateWorkerThread @ 0x140A17558 (ExpCreateWorkerThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, USHORT *a4, signed int a5)
{
  __int64 Pool2; // rbx
  int WorkerThread; // edi
  __int64 v11; // r15
  int i; // esi

  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a4);
    ExpWorkQueueInitialize(Pool2, a2, a3, a1, a4, a5);
    for ( i = 0; i < (2 * *(_DWORD *)(Pool2 + 716)) >> 1; ++i )
    {
      WorkerThread = ExpCreateWorkerThread(Pool2, (int)v11 + 276);
      if ( WorkerThread < 0 )
      {
        ExpWorkQueueDestroy((char *)Pool2);
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)WorkerThread;
      }
    }
    WorkerThread = 0;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WorkerThread;
}
