/*
 * XREFs of HalpSetProfileSourceInterval @ 0x1404F82E0
 * Callers:
 *     HalpTimerInitializeProfiling @ 0x1405474DC (HalpTimerInitializeProfiling.c)
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetProfileSourceInterval(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
