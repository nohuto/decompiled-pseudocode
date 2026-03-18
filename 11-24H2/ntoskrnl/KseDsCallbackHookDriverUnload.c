/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x1405CAAD0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1405CB714 (KsepDsEventDriverUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  guard_dispatch_icall_no_overrides(a1, v5, v6, v7);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
