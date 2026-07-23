/*
 * XREFs of HalpIommuAcquireNewDomain @ 0x14054F89C
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 * Callees:
 *     HalpIommuGetDomainId @ 0x14054FCE4 (HalpIommuGetDomainId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuAcquireNewDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  int DomainId; // edx
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  DomainId = 0;
  if ( a3 )
  {
    *(_DWORD *)(a2 + 48) = *a3;
LABEL_7:
    if ( *(_QWORD *)(a1 + 72) )
      return (unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
    return (unsigned int)DomainId;
  }
  DomainId = HalpIommuGetDomainId(a1, &v7);
  if ( DomainId >= 0 )
  {
    *(_DWORD *)(a2 + 48) = v7;
    goto LABEL_7;
  }
  return (unsigned int)DomainId;
}
