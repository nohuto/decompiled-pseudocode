/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407EA590
 * Callers:
 *     IoFillDumpHeader @ 0x140590FCC (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x14059473C (IopGetPhysicalMemoryBlock.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AAB930 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
