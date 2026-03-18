/*
 * XREFs of KseDsHookExAllocatePoolWithTag @ 0x1405CAF00
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolAllocate @ 0x1405CBBA0 (KsepDsEventPoolAllocate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExAllocatePoolWithTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  int v5; // esi
  int v6; // ebp
  __int64 v7; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  KsepDsEventPoolAllocate(v7, (_DWORD)retaddr, v6, v5, v4);
  return v7;
}
