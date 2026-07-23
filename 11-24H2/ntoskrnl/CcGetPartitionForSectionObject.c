/*
 * XREFs of CcGetPartitionForSectionObject @ 0x14040B960
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14040B97C (MmGetControlAreaPartition.c)
 */

__int64 CcGetPartitionForSectionObject()
{
  return *(_QWORD *)(MmGetControlAreaPartition() + 8);
}
