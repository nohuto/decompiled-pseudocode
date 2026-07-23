/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1405C86D0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolFree @ 0x1405C93BC (KsepDsEventPoolFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  guard_dispatch_icall_no_overrides(a1, a2);
  return KsepDsEventPoolFree(a1, retaddr, v2);
}
