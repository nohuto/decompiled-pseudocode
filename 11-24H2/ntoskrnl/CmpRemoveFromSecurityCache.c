/*
 * XREFs of CmpRemoveFromSecurityCache @ 0x140A69344
 * Callers:
 *     CmpRemoveSecurityCellList @ 0x1404B21F0 (CmpRemoveSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14041FBC0 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

char __fastcall CmpRemoveFromSecurityCache(__int64 a1, int a2)
{
  char result; // al
  __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  result = CmpFindSecurityCellCacheIndex(a1, a2, &v10);
  if ( result )
  {
    v5 = v10;
    v6 = 16LL * v10;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + v6 + 8);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v8 + 8) != v7 + 8 || (v9 = *(_QWORD **)(v7 + 16), *v9 != v7 + 8) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    guard_dispatch_icall_no_overrides(v7, (unsigned int)(*(_DWORD *)(v7 + 24) + 32), v8, v4);
    result = (unsigned __int8)memmove(
                                (void *)(v6 + *(_QWORD *)(a1 + 1888)),
                                (const void *)(*(_QWORD *)(a1 + 1888) + 16LL * (v5 + 1)),
                                16LL * (*(_DWORD *)(a1 + 1872) - v5 - 1));
    --*(_DWORD *)(a1 + 1872);
  }
  return result;
}
