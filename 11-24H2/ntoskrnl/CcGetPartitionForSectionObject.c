/*
 * XREFs of CcGetPartitionForSectionObject @ 0x1402CC890
 * Callers:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402CC554 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x1402CC8AC (MmGetControlAreaPartition.c)
 */

__int64 CcGetPartitionForSectionObject()
{
  return *(_QWORD *)(MmGetControlAreaPartition() + 8);
}
