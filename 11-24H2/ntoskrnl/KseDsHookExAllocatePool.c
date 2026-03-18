/*
 * XREFs of KseDsHookExAllocatePool @ 0x1405CAEA0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1405CBBA0 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // esi
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v5 = a1;
  v6 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  KsepDsEventPoolAllocate(v6, (_DWORD)retaddr, v5, v4, 78);
  return v6;
}
