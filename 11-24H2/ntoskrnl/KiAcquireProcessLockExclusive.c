/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x1403B3B60
 * Callers:
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KeSetDisableQuantumProcess @ 0x1403B4014 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1404526D8 (KeSetQuantumProcess.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     KeSetExecuteOptions @ 0x140491328 (KeSetExecuteOptions.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B8208 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BFCA8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BFD04 (KeSetCpuSetsProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireProcessLockExclusive(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *a2 = CurrentIrql;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
}
