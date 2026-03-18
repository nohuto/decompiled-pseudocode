/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x140662D44
 * Callers:
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiRemoveMdlPages @ 0x1407DB738 (MiRemoveMdlPages.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058ED08 (IoUpdateDumpPhysicalRanges.c)
 */

__int64 MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140E2D914;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
