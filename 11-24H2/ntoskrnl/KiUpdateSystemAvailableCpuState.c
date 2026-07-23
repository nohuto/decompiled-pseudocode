/*
 * XREFs of KiUpdateSystemAvailableCpuState @ 0x1405B5C94
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x1402ABFD4 (RtlWriteAcquireTickLock.c)
 *     KeIsForceParkingEnabled @ 0x14032B830 (KeIsForceParkingEnabled.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x14042B3A0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F263C (KiQueryCpuPartitionAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KiUpdateSystemAvailableCpuState()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  RtlWriteAcquireTickLock(&KiSystemAvailableCpusSequence);
  KiQueryCpuPartitionAffinity(v1, &KiSystemAvailableCpus);
  if ( KeIsForceParkingEnabled() )
    KiRemoveForceParkedProcessorsFromAffinity(&KiSystemAvailableCpus);
  ++KiSystemAvailableCpusSequence;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
