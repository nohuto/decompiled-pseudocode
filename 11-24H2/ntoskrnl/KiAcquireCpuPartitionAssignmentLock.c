/*
 * XREFs of KiAcquireCpuPartitionAssignmentLock @ 0x14043A2D4
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140204354 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14043A220 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
