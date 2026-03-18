/*
 * XREFs of HalpAllocateCR3Root @ 0x140556994
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140B3E7C0 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140414C00 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HalpAllocateCR3Root()
{
  void *ContiguousNodeMemory; // rax

  if ( !HalpCR3Root )
  {
    ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
    if ( !ContiguousNodeMemory )
      return 3221225626LL;
    HalpCR3Root = ContiguousNodeMemory;
  }
  return 0LL;
}
