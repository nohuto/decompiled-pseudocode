/*
 * XREFs of IommupValidateMdl @ 0x140564AA4
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14026D7C0 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14026DCF0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x14026E450 (IommuMapIdentityRangeEx.c)
 *     IommupProcessPhysicalAddress @ 0x1404748FC (IommupProcessPhysicalAddress.c)
 *     IommuMapIdentityRange @ 0x1405641C0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x140564230 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140564790 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
