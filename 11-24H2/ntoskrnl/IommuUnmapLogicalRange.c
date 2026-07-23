/*
 * XREFs of IommuUnmapLogicalRange @ 0x14039BCD0
 * Callers:
 *     HalpPutScatterGatherListDmarThin @ 0x14039BBC4 (HalpPutScatterGatherListDmarThin.c)
 * Callees:
 *     HalpIommuUnmapLogicalRange @ 0x14039AF08 (HalpIommuUnmapLogicalRange.c)
 *     HalpIommuFlushDomainTbs @ 0x14039B104 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14039BEFC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     IommupHvUnmapDeviceLogicalRange @ 0x14039C11C (IommupHvUnmapDeviceLogicalRange.c)
 */

__int64 __fastcall IommuUnmapLogicalRange(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int64 v6; // r8
  __int64 result; // rax
  int v8; // esi
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 && v3 != 3 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = a3 << 12;
  v10 = v6;
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
  {
    v8 = HalpIommuUnmapLogicalRange(*(_QWORD *)(a1 + 40), (unsigned __int64 *)&v10, a2);
    v9 = HalpIommuFlushDomainTbs(a1, a2, v10);
    if ( v8 >= 0 )
      v8 = v9;
    result = (unsigned int)v8;
  }
  else
  {
    v11 = v6 >> 12;
    result = IommupHvUnmapDeviceLogicalRange(a1, a2);
    v8 = result;
  }
  if ( v8 >= 0 )
    return HalpIommuDomainFreeLogicalAddressRange(a1, a2);
  return result;
}
