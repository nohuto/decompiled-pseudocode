/*
 * XREFs of PopCreateDynamicIrpWorker @ 0x14049728C
 * Callers:
 *     PopRunMaximumIrpWorkers @ 0x1404971B8 (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorkerControl @ 0x1405D3080 (PopIrpWorkerControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     PopCreatePowerThread @ 0x140497308 (PopCreatePowerThread.c)
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
