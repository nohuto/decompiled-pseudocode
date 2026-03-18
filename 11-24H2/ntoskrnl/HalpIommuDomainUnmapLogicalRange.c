/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x1403AD858
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x1403AD580 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405669B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x140567260 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1403AC62C (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1403AC6FC (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x1403AC8F8 (HalpIommuFlushDomainTbs.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x1403AD90C (IommupHvUnmapDeviceLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 *a3, char a4)
{
  int v8; // edi
  unsigned int v9; // eax

  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
  {
    v8 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), a3, a2);
    v9 = HalpIommuFlushDomainTbs(a1, a2, *a3);
    if ( v8 >= 0 )
      return v9;
    return (unsigned int)v8;
  }
  else if ( a4 )
  {
    return IommupHvMapDeviceLogicalRange(a1, 0LL, 0LL, *a3, a2);
  }
  else
  {
    return IommupHvUnmapDeviceLogicalRange(a1, a2);
  }
}
