/*
 * XREFs of KiUpdateSystemAvailableCpuState @ 0x1405B86B4
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403E9560 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KeIsForceParkingEnabled @ 0x140204250 (KeIsForceParkingEnabled.c)
 *     RtlWriteAcquireTickLock @ 0x14029D4E4 (RtlWriteAcquireTickLock.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x1404387E0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F4D3C (KiQueryCpuPartitionAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
