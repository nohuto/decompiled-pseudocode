/*
 * XREFs of PpmEventCoreParkingStateChange @ 0x1404886C8
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x1402B0778 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingStateChange(__int64 a1)
{
  __int16 v2; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v4; // [rsp+58h] [rbp-28h]
  int v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+64h] [rbp-1Ch]
  __int64 v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_UNPARK_CORE) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v2 = *(unsigned __int8 *)(a1 + 208);
      v4 = &v2;
      v7 = a1 + 209;
      UserData.Size = 8;
      v5 = 2;
      v8 = 1;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_UNPARK_CORE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
