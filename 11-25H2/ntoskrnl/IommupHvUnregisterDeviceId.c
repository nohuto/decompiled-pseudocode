/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x140563A38
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B2F8 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnregisterDeviceId(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1);
}
