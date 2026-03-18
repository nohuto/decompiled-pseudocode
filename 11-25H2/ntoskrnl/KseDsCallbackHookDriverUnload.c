/*
 * XREFs of KseDsCallbackHookDriverUnload @ 0x1405C64B0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x1405C70F4 (KsepDsEventDriverUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverUnload(__int64 a1)
{
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1);
  return KsepDsEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
