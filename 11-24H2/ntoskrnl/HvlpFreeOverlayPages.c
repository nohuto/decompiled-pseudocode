/*
 * XREFs of HvlpFreeOverlayPages @ 0x1403A9100
 * Callers:
 *     HvlDeleteProcessor @ 0x14070ED24 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
