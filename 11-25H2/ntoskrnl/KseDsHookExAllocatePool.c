/*
 * XREFs of KseDsHookExAllocatePool @ 0x1405C6880
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1405C7580 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(__int64 a1, int a2)
{
  int v3; // esi
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1;
  v4 = guard_dispatch_icall_no_overrides(a1);
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, v3, a2, 78);
  return v4;
}
