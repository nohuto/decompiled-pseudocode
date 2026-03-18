/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x1405C6990
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolFree @ 0x1405C767C (KsepDsEventPoolFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  guard_dispatch_icall_no_overrides(a1);
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
