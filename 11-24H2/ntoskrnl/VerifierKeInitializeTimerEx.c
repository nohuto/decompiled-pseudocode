/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140B955D0
 * Callers:
 *     VerifierKeInitializeTimer @ 0x140B955B0 (VerifierKeInitializeTimer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierKeInitializeTimerEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
