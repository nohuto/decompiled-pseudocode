/*
 * XREFs of HalpIommuInitializeDmar @ 0x14055191C
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 */

__int64 HalpIommuInitializeDmar()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  __int64 i; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( HalpHvIommu )
    return 0LL;
  result = HalpIommuAllocateDmaDomain(1LL, 0x8000000000000000uLL, 0LL, 0LL, (ULONG_PTR *)&HalpIommuBypassDomain);
  v1 = result;
  if ( (int)result >= 0 )
  {
    for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 472) & 0x180) != 0 )
      {
        result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, i, 1, 0, 0, &v3);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v1;
  }
  return result;
}
