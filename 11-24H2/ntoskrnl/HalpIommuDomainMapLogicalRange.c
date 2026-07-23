/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x140551564
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14039B4E0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x14039C4E0 (IommuMapLogicalRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapReservedLogicalRange @ 0x140564820 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140564B30 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x14039AE38 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x140565818 (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(
        ULONG_PTR a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogicalRange(a1, a2, a3, a4, a5);
}
