/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x14026DA98
 * Callers:
 *     IommuUnmapIdentityRangeEx @ 0x14026D7C0 (IommuUnmapIdentityRangeEx.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x140564140 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuUnmapReservedLogicalRange @ 0x1405647F0 (IommuUnmapReservedLogicalRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x14026D4D4 (IommupHvMapDeviceLogicalRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x14026DB4C (IommupHvUnmapDeviceLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x14026EE00 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuUnmapLogicalRange @ 0x14026EEA0 (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(ULONG_PTR a1, ULONG_PTR a2, __int64 *a3, char a4)
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
