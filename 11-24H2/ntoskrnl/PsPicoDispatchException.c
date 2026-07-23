/*
 * XREFs of PsPicoDispatchException @ 0x1404A7598
 * Callers:
 *     MiDeliverPicoExceptionForProbedPage @ 0x14066FCA4 (MiDeliverPicoExceptionForProbedPage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoDispatchException(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
