/*
 * XREFs of ExAtsSvmDevicePowerCallback @ 0x14064C7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExAtsSvmDevicePowerCallback()
{
  return guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext);
}
