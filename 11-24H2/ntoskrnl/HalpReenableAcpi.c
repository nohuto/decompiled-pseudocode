/*
 * XREFs of HalpReenableAcpi @ 0x140B6BBD8
 * Callers:
 *     HalpPowerEarlyRestore @ 0x1404A1980 (HalpPowerEarlyRestore.c)
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  LOBYTE(v4) = 1;
  return guard_dispatch_icall_no_overrides(v4, v5, v6, v7);
}
