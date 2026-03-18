/*
 * XREFs of IommuReserveLogicalAddressRange @ 0x140566FA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x1403ACF08 (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1403AD6EC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140553C24 (HalpIommuDomainMapLogicalRange.c)
 */

__int64 __fastcall IommuReserveLogicalAddressRange(
        ULONG_PTR a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 *v6; // r15
  int v11; // eax
  int v12; // edi
  __int64 v13; // rsi
  int LogicalAddressRange; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  v6 = a6;
  a6 = 0LL;
  *v6 = 0LL;
  if ( (a2 & 0xFFF) != 0 || !a2 )
    return (unsigned int)-1073741584;
  v11 = *(_DWORD *)(a1 + 8);
  if ( !v11 || v11 == 3 )
  {
    v13 = HalpMmAllocCtxAlloc(a1, 32LL);
    if ( v13 )
    {
      LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, a3, a2, a4, a5, &a6);
      v12 = LogicalAddressRange;
      if ( LogicalAddressRange >= 0 )
      {
        v12 = HalpIommuDomainMapLogicalRange(a1, 0LL, 0LL, a2, (ULONG_PTR)a6);
        if ( v12 >= 0 )
        {
          *(_DWORD *)(v13 + 24) = 0;
          *(_QWORD *)(v13 + 16) = a1;
          *(_QWORD *)v13 = a6;
          *(_QWORD *)(v13 + 8) = a2;
          *v6 = v13;
          return (unsigned int)v12;
        }
        HalpIommuDomainFreeLogicalAddressRange(a1, (__int64)a6, v16, v17);
      }
      else if ( LogicalAddressRange == -1073741584 || LogicalAddressRange == -1073741811 )
      {
        v12 = -1073741583;
      }
      HalpMmAllocCtxFree(v15, v13);
      return (unsigned int)v12;
    }
    return (unsigned int)-1073741670;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
}
