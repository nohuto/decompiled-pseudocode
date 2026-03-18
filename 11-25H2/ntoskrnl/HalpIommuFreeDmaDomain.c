/*
 * XREFs of HalpIommuFreeDmaDomain @ 0x1405513B8
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x140550BC4 (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainDelete @ 0x1406F7DE0 (IommuDomainDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpIommuCleanupPageTable @ 0x140564B48 (HalpIommuCleanupPageTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuFreeDmaDomain(__int64 a1)
{
  _BYTE *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    return 3221227272LL;
  v3 = (_BYTE *)(a1 + 52);
  if ( !HalpHvIommu || *v3 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      HalpIommuCleanupPageTable(*(_QWORD *)(a1 + 40));
      HalpMmAllocCtxFree(v5, v4);
    }
  }
  v6 = 0;
  if ( HalpHvIommu )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( !v7 || v7 == 2 )
    {
      v9 = *(unsigned int *)(a1 + 48);
      BYTE4(v9) = *v3;
      v6 = guard_dispatch_icall_no_overrides(&v9);
    }
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
    guard_dispatch_icall_no_overrides(v8);
  HalpMmAllocCtxFree(v8, a1);
  return v6;
}
