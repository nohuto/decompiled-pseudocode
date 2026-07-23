/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403957C0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCache @ 0x140395790 (MmAllocateContiguousMemorySpecifyCache.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper @ 0x140630190 (DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper.c)
 *     DifMmAllocateContiguousMemorySpecifyCacheWrapper @ 0x140630340 (DifMmAllocateContiguousMemorySpecifyCacheWrapper.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCacheNode(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  int v6; // r10d

  if ( CacheType == MmCached )
  {
    v6 = 64;
  }
  else
  {
    v6 = 516;
    if ( CacheType == MmWriteCombined )
      v6 = 1028;
  }
  return (PVOID)MmAllocateContiguousNodeMemory(
                  NumberOfBytes,
                  LowestAcceptableAddress.LowPart,
                  HighestAcceptableAddress.LowPart,
                  BoundaryAddressMultiple.LowPart,
                  v6,
                  PreferredNode);
}
