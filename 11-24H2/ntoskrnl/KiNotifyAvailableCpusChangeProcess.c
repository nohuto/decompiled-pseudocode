/*
 * XREFs of KiNotifyAvailableCpusChangeProcess @ 0x1404FB240
 * Callers:
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BF410 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404FB26C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

_QWORD *__fastcall KiNotifyAvailableCpusChangeProcess(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 448);
  result = (_QWORD *)(v1 + 40);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 56));
  return result;
}
