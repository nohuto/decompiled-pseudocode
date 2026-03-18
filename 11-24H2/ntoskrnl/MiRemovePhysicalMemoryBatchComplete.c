/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x14066E884
 * Callers:
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MiRemoveMdlPages @ 0x1407EB5D8 (MiRemoveMdlPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140592538 (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140E2DB54;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
