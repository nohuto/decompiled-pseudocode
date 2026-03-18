/*
 * XREFs of HvlpFreeOverlayPages @ 0x1404C37F0
 * Callers:
 *     HvlDeleteProcessor @ 0x140702E44 (HvlDeleteProcessor.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
