/*
 * XREFs of MiUpdateVadStartVpn @ 0x140441BA4
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140918CD0 (MiFindEmptyAddressRangeDownTree.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
