/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1405CC6E0
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140745B10 (PfpLogScenarioEventCallback.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B5AE30 (PfpPowerActionSleepSystemPhaseCallback.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B5B784 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140B5B7A0 (PfpPartitionAccessTraceLockRelease.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v5; // ebx

  if ( a2 > 0x1F )
  {
    return 32;
  }
  else
  {
    PfpPartitionAccessTraceLockAcquire();
    v4 = *(struct _KTHREAD **)(a1 + 168);
    if ( v4 )
      v5 = KeSetPriorityThread(v4, a2);
    else
      v5 = 33;
    PfpPartitionAccessTraceLockRelease(a1);
  }
  return v5;
}
