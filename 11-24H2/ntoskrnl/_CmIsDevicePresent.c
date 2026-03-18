/*
 * XREFs of _CmIsDevicePresent @ 0x1409FDDCC
 * Callers:
 *     _CmEnumSubkeyCallback @ 0x14081B530 (_CmEnumSubkeyCallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409FD9D0 (PiPnpRtlServiceFilterCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall CmIsDevicePresent(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  int result; // eax
  int v6; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING v7[2]; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v8 = 0;
  v7[0] = 0LL;
  if ( !a3 )
    return -1073741811;
  result = RtlInitUnicodeStringEx(v7, a2);
  if ( result < 0 )
    goto LABEL_9;
  if ( !*(_QWORD *)(a1 + 264) )
    return -1073741822;
  result = guard_dispatch_icall_no_overrides(a1, v7, &v6, &v8);
  if ( result == -2147483643 )
    return -1073741789;
  if ( result < 0 )
  {
LABEL_9:
    if ( result == -1073741810 )
    {
      result = 0;
      *a3 = 0;
    }
  }
  else
  {
    *a3 = 1;
  }
  return result;
}
