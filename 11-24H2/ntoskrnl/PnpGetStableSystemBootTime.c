/*
 * XREFs of PnpGetStableSystemBootTime @ 0x140981800
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140981FCC (PipHardwareConfigGetLastUseTime.c)
 */

__int64 __fastcall PnpGetStableSystemBootTime(_QWORD *a1)
{
  NTSTATUS LastUseTime; // edx
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]

  memset(SystemInformation, 0, sizeof(SystemInformation));
  v5 = 0LL;
  LastUseTime = PipHardwareConfigGetLastUseTime(a1, a1);
  if ( LastUseTime < 0 )
  {
    LastUseTime = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
    if ( LastUseTime >= 0 )
      *a1 = *(_QWORD *)&SystemInformation[0] - v5;
  }
  return (unsigned int)LastUseTime;
}
