/*
 * XREFs of PsPicoDispatchException @ 0x1404ACEB4
 * Callers:
 *     MiDeliverPicoExceptionForProbedPage @ 0x14066EAD4 (MiDeliverPicoExceptionForProbedPage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsPicoDispatchException(__int64 a1, __int64 a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(a1, a2, a3, 0LL);
}
