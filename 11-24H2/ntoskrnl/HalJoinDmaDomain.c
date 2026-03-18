/*
 * XREFs of HalJoinDmaDomain @ 0x1404D8CA0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14041119C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaAllocateDomain @ 0x1405507CC (HalpDmaAllocateDomain.c)
 *     HalpDmaIsDomainCompatible @ 0x140551144 (HalpDmaIsDomainCompatible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalJoinDmaDomain(__int64 a1, __int64 *a2)
{
  char v4; // bp
  __int64 Domain; // rdi
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = 0;
  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 3 && !*(_QWORD *)(a1 + 512) )
  {
    if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      Domain = HalpDmaAllocateDomain(a1);
      if ( !Domain )
      {
        v6 = -1073741670;
        goto LABEL_17;
      }
      v6 = 0;
    }
    else
    {
      Domain = *a2;
      if ( !Domain || !(unsigned __int8)HalpDmaIsDomainCompatible(a1, Domain) )
      {
        v6 = -1073741811;
        goto LABEL_17;
      }
      v6 = HalpDmaReferenceDomainObject(Domain);
      if ( v6 < 0 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 512) = 0LL;
        if ( v4 )
          HalpDmaDereferenceDomainObject((__int64 *)Domain);
        return (unsigned int)v6;
      }
    }
    *(_QWORD *)(a1 + 512) = Domain;
    v4 = 1;
    if ( !*(_DWORD *)(Domain + 48) )
      return (unsigned int)v6;
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(Domain + 40), *(_QWORD *)(a1 + 544), v7, v8);
    if ( v6 >= 0 )
    {
      if ( *(_DWORD *)(Domain + 48) != 3 )
        return (unsigned int)v6;
      v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(Domain + 40), *(unsigned int *)(a1 + 252), 0LL, 0LL);
      if ( v6 >= 0 )
        return (unsigned int)v6;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), v9, v10, v11);
    }
    goto LABEL_17;
  }
  return 3221225485LL;
}
