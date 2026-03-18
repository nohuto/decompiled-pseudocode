/*
 * XREFs of ExAtsSvmDevicePowerCallback @ 0x140658700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExAtsSvmDevicePowerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a3;
  LOBYTE(a3) = a2 == 1;
  return guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, v3, a3, v3);
}
