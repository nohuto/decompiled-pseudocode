/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x140551324
 * Callers:
 *     IommuMapLogicalRangeEx @ 0x14026DCF0 (IommuMapLogicalRangeEx.c)
 *     IommuMapIdentityRangeEx @ 0x14026E450 (IommuMapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapReservedLogicalRange @ 0x1405642B0 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140564530 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x14026D4D4 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x140565158 (HalpIommuMapLogicalRange.c)
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
