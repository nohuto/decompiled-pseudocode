/*
 * XREFs of KseDsHookExAllocatePool @ 0x1405C85C0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1405C92C0 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = a1;
  v4 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, v3, v2, 78);
  return v4;
}
