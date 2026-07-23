/*
 * XREFs of HvlpFreeOverlayPages @ 0x140397D90
 * Callers:
 *     HvlDeleteProcessor @ 0x14070C8B4 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
