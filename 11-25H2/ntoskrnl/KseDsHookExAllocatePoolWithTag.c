/*
 * XREFs of KseDsHookExAllocatePoolWithTag @ 0x1405C68E0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1405C7580 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePoolWithTag(__int64 a1, int a2, char a3)
{
  int v5; // ebp
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a1;
  v6 = guard_dispatch_icall_no_overrides(a1);
  KsepDsEventPoolAllocate(v6, (_DWORD)retaddr, v5, a2, a3);
  return v6;
}
