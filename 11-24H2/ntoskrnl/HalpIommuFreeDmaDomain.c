/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x140553CB8
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1405534C4 (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainDelete @ 0x140703CC0 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuCleanupPageTable @ 0x140567718 (HalpIommuCleanupPageTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    return 3221227272LL;
  v6 = (_BYTE *)(a1 + 52);
  if ( !HalpHvIommu || *v6 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 )
    {
      HalpIommuCleanupPageTable(*(_QWORD *)(a1 + 40));
      HalpMmAllocCtxFree(v8, v7);
    }
  }
  v9 = 0;
  if ( HalpHvIommu )
  {
    v10 = *(_DWORD *)(a1 + 8);
    if ( !v10 || v10 == 2 )
    {
      v12 = *(unsigned int *)(a1 + 48);
      BYTE4(v12) = *v6;
      v9 = guard_dispatch_icall_no_overrides(&v12, a2, a3, a4);
    }
  }
  v11 = *(_QWORD **)(a1 + 64);
  if ( v11 )
    guard_dispatch_icall_no_overrides(v11, *v11, a3, a4);
  HalpMmAllocCtxFree((__int64)v11, a1);
  return v9;
}
