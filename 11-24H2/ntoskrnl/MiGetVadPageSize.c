/*
 * XREFs of MiGetVadPageSize @ 0x14041B130
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407EBEE0 (MmSetGraphicsPtes.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
