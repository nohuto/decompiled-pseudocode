/*
 * XREFs of IommuFreeReservedLogicalAddressRange @ 0x1405669B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x1403AD6EC (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1403AD858 (HalpIommuDomainUnmapLogicalRange.c)
 */

__int64 __fastcall IommuFreeReservedLogicalAddressRange(__int64 a1)
{
  int v2; // edi
  unsigned __int64 v3; // rdx
  ULONG_PTR v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 0x40000000, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v3 = *(_QWORD *)a1;
    v4 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    v2 = HalpIommuDomainUnmapLogicalRange(v4, v3, &v9, 0);
    if ( v2 >= 0 )
    {
      v2 = HalpIommuDomainFreeLogicalAddressRange(*(_QWORD *)(a1 + 16), *(_QWORD *)a1, v5, v6);
      if ( v2 >= 0 )
        HalpMmAllocCtxFree(v7, a1);
    }
  }
  return (unsigned int)v2;
}
