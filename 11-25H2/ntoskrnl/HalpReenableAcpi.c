/*
 * XREFs of HalpReenableAcpi @ 0x140B5CAF0
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpPowerEarlyRestore @ 0x1404A1F40 (HalpPowerEarlyRestore.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1);
  LOBYTE(v1) = 1;
  return guard_dispatch_icall_no_overrides(v1);
}
