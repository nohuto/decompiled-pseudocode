/*
 * XREFs of MiGetVadPageSize @ 0x14042F920
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407DBA70 (MmSetGraphicsPtes.c)
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
