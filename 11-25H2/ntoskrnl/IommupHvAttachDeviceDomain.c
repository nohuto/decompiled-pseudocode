/*
 * XREFs of IommupHvAttachDeviceDomain @ 0x140562C7C
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405517A8 (HalpIommuJoinDmaDomain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachDeviceDomain(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
