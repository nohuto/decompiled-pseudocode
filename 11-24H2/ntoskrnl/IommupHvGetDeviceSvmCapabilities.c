/*
 * XREFs of IommupHvGetDeviceSvmCapabilities @ 0x140563AC4
 * Callers:
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetDeviceSvmCapabilities(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 result; // rax
  int v6; // ecx
  char v7; // dl
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  result = guard_dispatch_icall_no_overrides(a1, &v8);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    v7 = v8;
    if ( (v8 & 1) != 0 && DWORD1(v8) >= IommupHvMaximumAsids )
    {
      *a2 = IommupHvPageRequestQueues + ((unsigned __int64)DWORD2(v8) << 6);
      *a3 = 0;
      if ( (v7 & 2) != 0 )
      {
        v6 = 0x20000;
        *a3 = 0x20000;
      }
      if ( (v7 & 4) != 0 )
        *a3 = v6 | 0x10000;
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
