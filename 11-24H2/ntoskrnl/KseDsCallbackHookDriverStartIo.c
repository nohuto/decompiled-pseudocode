/*
 * XREFs of KseDsCallbackHookDriverStartIo @ 0x1405CAA70
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverStartIo @ 0x1405CB64C (KsepDsEventDriverStartIo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookDriverStartIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  guard_dispatch_icall_no_overrides(a1, a2, v6, v7);
  return KsepDsEventDriverStartIo(*(_QWORD *)(a1 + 8), a1, a2);
}
