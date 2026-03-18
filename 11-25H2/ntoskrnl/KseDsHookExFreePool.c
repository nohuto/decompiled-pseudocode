/*
 * XREFs of KseDsHookExFreePool @ 0x1405C6950
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPoolFree @ 0x1405C767C (KsepDsEventPoolFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  guard_dispatch_icall_no_overrides(a1);
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
