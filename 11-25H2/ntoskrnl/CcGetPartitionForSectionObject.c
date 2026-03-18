/*
 * XREFs of CcGetPartitionForSectionObject @ 0x1403A6AC0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x1403A6ADC (MmGetControlAreaPartition.c)
 */

__int64 CcGetPartitionForSectionObject()
{
  return *(_QWORD *)(MmGetControlAreaPartition() + 8);
}
