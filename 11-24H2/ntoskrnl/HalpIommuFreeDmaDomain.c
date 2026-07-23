/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x1405515F8
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainDelete @ 0x140701880 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuCleanupPageTable @ 0x1405651F8 (HalpIommuCleanupPageTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // esi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    return 3221227272LL;
  v4 = (_BYTE *)(a1 + 52);
  if ( !HalpHvIommu || *v4 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      HalpIommuCleanupPageTable(*(_QWORD *)(a1 + 40));
      HalpMmAllocCtxFree(v6, v5);
    }
  }
  v7 = 0;
  if ( HalpHvIommu )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( !v8 || v8 == 2 )
    {
      v10 = *(unsigned int *)(a1 + 48);
      BYTE4(v10) = *v4;
      v7 = guard_dispatch_icall_no_overrides(&v10, a2);
    }
  }
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 )
    guard_dispatch_icall_no_overrides(v9, *v9);
  HalpMmAllocCtxFree((__int64)v9, a1);
  return v7;
}
