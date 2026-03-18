/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x140553C24
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x1403ACCD0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1403ADCD0 (IommuMapLogicalRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapReservedLogicalRange @ 0x140566B20 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140566FA0 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1403AC62C (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x140567D28 (HalpIommuMapLogicalRange.c)
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
