/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1405CAFB0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolFree @ 0x1405CBC9C (KsepDsEventPoolFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return KsepDsEventPoolFree(a1, retaddr, v4);
}
