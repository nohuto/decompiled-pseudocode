/*
 * XREFs of HalpSetProfileSourceInterval @ 0x1404F80A0
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x14054768C (HalpTimerInitializeProfiling.c)
 *     HalpSetSystemInformation @ 0x140A95A10 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetProfileSourceInterval(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
