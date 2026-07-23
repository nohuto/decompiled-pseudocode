/*
 * XREFs of HalpIommuDomainMapLogical @ 0x14039C6CC
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x14039C4E0 (IommuMapLogicalRangeEx.c)
 *     IommuMapLogicalRange @ 0x1405647A0 (IommuMapLogicalRange.c)
 *     IommuMapReservedLogicalRange @ 0x140564820 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuMapLogical @ 0x14039B1A4 (HalpIommuMapLogical.c)
 *     IommupHvMapDeviceLogical @ 0x14039C724 (IommupHvMapDeviceLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(ULONG_PTR a1, int a2, __int64 a3, unsigned __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
