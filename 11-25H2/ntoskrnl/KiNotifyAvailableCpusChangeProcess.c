/*
 * XREFs of KiNotifyAvailableCpusChangeProcess @ 0x1404F8BC0
 * Callers:
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BB5D0 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
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
