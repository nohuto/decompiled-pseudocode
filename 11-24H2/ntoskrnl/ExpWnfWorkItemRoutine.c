/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1408AE260
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
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
  return KeLeaveCriticalRegionThread();
}
