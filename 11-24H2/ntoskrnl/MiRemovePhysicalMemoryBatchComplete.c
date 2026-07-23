/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x14066FA58
 * Callers:
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140E2DC94;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
