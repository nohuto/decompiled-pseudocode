/*
 * XREFs of KseDsCallbackHookDriverStartIo @ 0x1405C6450
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverStartIo @ 0x1405C702C (KsepDsEventDriverStartIo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverStartIo(__int64 a1, __int64 a2)
{
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8));
  guard_dispatch_icall_no_overrides(a1);
  return KsepDsEventDriverStartIo(*(_QWORD *)(a1 + 8), a1, a2);
}
