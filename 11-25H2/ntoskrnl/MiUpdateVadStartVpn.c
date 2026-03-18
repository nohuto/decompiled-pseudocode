/*
 * XREFs of MiUpdateVadStartVpn @ 0x14044B674
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x1408F92F8 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140900480 (MiFindEmptyAddressRangeDownTree.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
