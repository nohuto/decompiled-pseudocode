/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1408E3D60
 * Callers:
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408E3DC0 (ExpWnfDispatchKernelSubscription.c)
 */

__int64 ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
