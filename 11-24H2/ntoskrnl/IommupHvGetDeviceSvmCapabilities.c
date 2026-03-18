/*
 * XREFs of IommupHvGetDeviceSvmCapabilities @ 0x140565DC0
 * Callers:
 *     IommupMapDeviceInternal @ 0x140564E48 (IommupMapDeviceInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetDeviceSvmCapabilities(__int64 a1, _QWORD *a2, int *a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // ecx
  char v8; // dl
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  result = guard_dispatch_icall_no_overrides(a1, &v9, a3, a4);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    v8 = v9;
    if ( (v9 & 1) != 0 && DWORD1(v9) >= IommupHvMaximumAsids )
    {
      *a2 = IommupHvPageRequestQueues + ((unsigned __int64)DWORD2(v9) << 6);
      *a3 = 0;
      if ( (v8 & 2) != 0 )
      {
        v7 = 0x20000;
        *a3 = 0x20000;
      }
      if ( (v8 & 4) != 0 )
        *a3 = v7 | 0x10000;
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
