/*
 * XREFs of IommupHvRegisterDeviceId @ 0x1405661A4
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvRegisterDeviceId(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v5 = _InterlockedIncrement(&HalpHvLogicalId);
  if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225626LL;
  result = guard_dispatch_icall_no_overrides(a1, v5, a3, a4);
  if ( (int)result >= 0 )
    *a2 = v5;
  return result;
}
