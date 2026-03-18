/*
 * XREFs of HalpSetProfileSourceInterval @ 0x1404FA7C0
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetProfileSourceInterval(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
