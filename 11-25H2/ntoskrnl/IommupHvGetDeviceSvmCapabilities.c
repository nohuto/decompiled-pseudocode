/*
 * XREFs of IommupHvGetDeviceSvmCapabilities @ 0x1405635B0
 * Callers:
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetDeviceSvmCapabilities(__int64 a1)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1);
  if ( (int)result >= 0 )
    return 3221225659LL;
  return result;
}
