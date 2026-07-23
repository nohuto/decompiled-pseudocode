/*
 * XREFs of KiNotifyAvailableCpusChangeProcess @ 0x1404F8B20
 * Callers:
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B5B20 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8B4C (KiAvailableCpusSubscriptionQueueWorkItem.c)
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
