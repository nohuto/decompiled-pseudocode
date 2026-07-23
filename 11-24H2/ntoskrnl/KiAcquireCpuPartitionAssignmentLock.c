/*
 * XREFs of KiAcquireCpuPartitionAssignmentLock @ 0x1402B9B18
 * Callers:
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiQueryCpuPartitionAffinityProcess @ 0x14032B934 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B5B20 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
}
