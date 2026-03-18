/*
 * XREFs of HalpAllocateCR3Root @ 0x140559294
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140B4E7C0 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140411690 (MmAllocateContiguousNodeMemory.c)
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
