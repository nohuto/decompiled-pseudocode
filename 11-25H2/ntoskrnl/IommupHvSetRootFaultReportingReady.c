/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x140563994
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvSetRootFaultReportingReady(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
