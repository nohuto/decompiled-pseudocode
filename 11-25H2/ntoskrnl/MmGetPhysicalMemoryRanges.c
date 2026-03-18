/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407DA6D0
 * Callers:
 *     IoFillDumpHeader @ 0x14058D79C (IoFillDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x140590F3C (IopGetPhysicalMemoryBlock.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6370 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
