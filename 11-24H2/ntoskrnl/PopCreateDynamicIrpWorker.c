/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x14049175C
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x140491688 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1405D5110 (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopCreatePowerThread @ 0x1404917D8 (PopCreatePowerThread.c)
 */

__int64 __fastcall PopCreateDynamicIrpWorker(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  void *v4; // rdi
  int PowerThread; // esi

  v2 = ExAllocateFromNPagedLookasideList(&PopDynamicIrpWorkerLookaside);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    *v2 = a1;
    PowerThread = PopCreatePowerThread(PopIrpWorker, v2);
    if ( PowerThread >= 0 )
      return v3;
  }
  else
  {
    PowerThread = -1073741670;
  }
  if ( v4 )
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, v4);
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  return (unsigned int)PowerThread;
}
