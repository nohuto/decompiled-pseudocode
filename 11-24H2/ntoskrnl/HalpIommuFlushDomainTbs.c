/*
 * XREFs of HalpIommuFlushDomainTbs @ 0x14039B104
 * Callers:
 *     HalpIommuDomainUnmapIdentityRange @ 0x14039A828 (HalpIommuDomainUnmapIdentityRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x14039AB14 (HalpIommuDomainMapIdentityRange.c)
 *     IommuUnmapLogicalRange @ 0x14039BCD0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14039C068 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     HalpIommuFlushDmaDomain @ 0x140230910 (HalpIommuFlushDmaDomain.c)
 *     IommupHvFlushDomainTbs @ 0x14039A8CC (IommupHvFlushDomainTbs.c)
 */

__int64 __fastcall HalpIommuFlushDomainTbs(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx

  if ( HalpHvIommu )
  {
    IommupHvFlushDomainTbs(a1, a2, a3);
  }
  else
  {
    v4 = (a3 + (a2 & 0xFFF) + 4095) >> 12;
    v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
    while ( v4 )
    {
      v6 = 1024LL;
      if ( v4 < 0x400 )
        v6 = v4;
      HalpIommuFlushDmaDomain(a1, (v6 - 1) ^ (v5 ^ (v6 - 1)) & 0xFFFFFFFFFFFFFC00uLL);
      v4 -= v6;
      v5 += v6 << 12;
    }
  }
  return 0LL;
}
