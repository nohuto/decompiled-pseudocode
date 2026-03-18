/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x14026B2B4
 * Callers:
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     KeSetQuantumProcess @ 0x14026A954 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x14026AB3C (KeSetExecuteOptions.c)
 *     KeSetDisableQuantumProcess @ 0x14026AD74 (KeSetDisableQuantumProcess.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KeAdjustTimerDelayProcess @ 0x1405B4318 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BBD78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  *a2 = CurrentIrql;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
}
