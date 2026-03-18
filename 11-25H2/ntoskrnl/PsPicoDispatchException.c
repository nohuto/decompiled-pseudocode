/*
 * XREFs of PsPicoDispatchException @ 0x1404ABB38
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x140662F94 (MiDeliverPicoExceptionForProbedPage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoDispatchException(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
