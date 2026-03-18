/*
 * XREFs of PnpGetStableSystemBootTime @ 0x140AA9CA4
 * Callers:
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140AA9D20 (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  int LastUseTime; // edx
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  LastUseTime = PipHardwareConfigGetLastUseTime(a1, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(3LL, (__int64)v4);
    if ( LastUseTime >= 0 )
      *a1 = *(_QWORD *)&v4[0] - v5;
  }
  return (unsigned int)LastUseTime;
}
