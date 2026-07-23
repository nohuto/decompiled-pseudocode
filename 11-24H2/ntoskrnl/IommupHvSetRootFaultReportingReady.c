/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x140563F04
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvSetRootFaultReportingReady(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
