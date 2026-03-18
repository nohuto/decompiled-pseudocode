/*
 * XREFs of KiUpdateSystemAvailableCpuState @ 0x1405B47C4
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     KeIsForceParkingEnabled @ 0x140313D80 (KeIsForceParkingEnabled.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140428F84 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F0D2C (KiQueryCpuPartitionAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
