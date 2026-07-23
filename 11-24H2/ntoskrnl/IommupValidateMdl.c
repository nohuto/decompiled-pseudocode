/*
 * XREFs of IommupValidateMdl @ 0x140565100
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14039B4E0 (IommuMapIdentityRangeEx.c)
 *     IommuUnmapIdentityRangeEx @ 0x14039BD90 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14039C4E0 (IommuMapLogicalRangeEx.c)
 *     IommupProcessPhysicalAddress @ 0x140470534 (IommupProcessPhysicalAddress.c)
 *     IommuMapIdentityRange @ 0x140564730 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1405647A0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140564D90 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
