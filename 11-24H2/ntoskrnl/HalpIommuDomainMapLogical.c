/*
 * XREFs of HalpIommuDomainMapLogical @ 0x1403ADEBC
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x1403ADCD0 (IommuMapLogicalRangeEx.c)
 *     IommuMapLogicalRange @ 0x140566AA0 (IommuMapLogicalRange.c)
 *     IommuMapReservedLogicalRange @ 0x140566B20 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     HalpIommuMapLogical @ 0x1403AC998 (HalpIommuMapLogical.c)
 *     IommupHvMapDeviceLogical @ 0x1403ADF14 (IommupHvMapDeviceLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(
        ULONG_PTR a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogical(a1, a5);
}
