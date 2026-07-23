/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407EAB60
 * Callers:
 *     IoFillDumpHeader @ 0x14058DFEC (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x140591760 (IopGetPhysicalMemoryBlock.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
