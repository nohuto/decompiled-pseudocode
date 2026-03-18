/*
 * XREFs of MiGetVadPageSize @ 0x1404272B0
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 *     MiFreeVirtualMemory @ 0x1408DBC38 (MiFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408DD998 (MiCheckSecuredVad.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
