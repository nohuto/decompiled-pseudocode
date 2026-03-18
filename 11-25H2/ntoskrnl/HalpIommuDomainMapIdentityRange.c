/*
 * XREFs of HalpIommuDomainMapIdentityRange @ 0x14048CEA8
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x14026E450 (IommuMapIdentityRangeEx.c)
 *     IommuMapIdentityRange @ 0x1405641C0 (IommuMapIdentityRange.c)
 * Callees:
 *     HalpIommuFlushDomainTbs @ 0x14026EE00 (HalpIommuFlushDomainTbs.c)
 *     HalpIommuUnmapLogicalRange @ 0x14026EEA0 (HalpIommuUnmapLogicalRange.c)
 *     IommupHvMapDeviceIdentityRange @ 0x14048CF24 (IommupHvMapDeviceIdentityRange.c)
 *     HalpIommuMapLogicalRange @ 0x140565158 (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapIdentityRange(ULONG_PTR a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 i; // rax
  unsigned __int64 v13; // r14
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  result = 0LL;
  if ( HalpHvIommu && !*(_BYTE *)(a1 + 52) )
    return IommupHvMapDeviceIdentityRange(a1);
  v10 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = v10 + 1;
      for ( i = *(_QWORD *)(a3 + 8 * v10); v11 < a4 && *(_QWORD *)(a3 + 8 * v11) == i + 1; i = *(_QWORD *)(a3 + 8 * v11++) )
        ;
      result = HalpIommuMapLogicalRange(
                 0,
                 *(_QWORD *)(a1 + 40),
                 a2,
                 *(_DWORD *)(a3 + 8 * v10) << 12,
                 (v11 - v10) << 12,
                 *(_QWORD *)(a3 + 8 * v10) << 12);
      v17 = result;
      if ( (int)result < 0 )
        break;
      v10 = v11;
      if ( v11 >= a4 )
        return result;
    }
    if ( v10 )
    {
      do
      {
        v13 = v4 + 1;
        for ( j = *(_QWORD *)(a3 + 8 * v4); v13 < a4 && *(_QWORD *)(a3 + 8 * v13) == j + 1; j = *(_QWORD *)(a3 + 8 * v13++) )
          ;
        v15 = *(_QWORD *)(a1 + 40);
        v16 = *(_QWORD *)(a3 + 8 * v4) << 12;
        v18 = (v13 - v4) << 12;
        HalpIommuUnmapLogicalRange(v15, (unsigned __int64 *)&v18, v16);
        HalpIommuFlushDomainTbs(a1, v16, (v13 - v4) << 12);
        v4 = v13;
      }
      while ( v13 < v10 );
      return v17;
    }
  }
  return result;
}
