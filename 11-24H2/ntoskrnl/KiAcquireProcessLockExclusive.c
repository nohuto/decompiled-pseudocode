/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x1403A2370
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KeSetDisableQuantumProcess @ 0x1403A2824 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x140447788 (KeSetQuantumProcess.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeSetExecuteOptions @ 0x14048BE20 (KeSetExecuteOptions.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B57E8 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BD2D8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
