/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x14039C068
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14039BD90 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405646B0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x140564DF0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x14039AE38 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x14039AF08 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x14039B104 (HalpIommuFlushDomainTbs.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x14039C11C (IommupHvUnmapDeviceLogicalRange.c)
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
