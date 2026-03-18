/*
 * XREFs of KiAcquireCpuPartitionAssignmentLock @ 0x14036D244
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140267A84 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14036D190 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireCpuPartitionAssignmentLock(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
}
