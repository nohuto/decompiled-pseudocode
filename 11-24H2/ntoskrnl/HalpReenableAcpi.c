/*
 * XREFs of HalpReenableAcpi @ 0x140B6D008
 * Callers:
 *     HalpPowerEarlyRestore @ 0x14049C910 (HalpPowerEarlyRestore.c)
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1, a2);
  LOBYTE(v2) = 1;
  return guard_dispatch_icall_no_overrides(v2, v3);
}
