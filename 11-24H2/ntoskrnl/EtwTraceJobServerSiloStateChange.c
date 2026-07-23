/*
 * XREFs of EtwTraceJobServerSiloStateChange @ 0x1407A9718
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspNotifyServerSiloCreation @ 0x140779808 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x14085A824 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloStateChange(__int64 a1, int a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  int *v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+88h] [rbp+18h] BYREF

  v9 = a2;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &JobServerSiloStateChange);
  if ( result )
  {
    UserData.Ptr = a1 + 1472;
    *(_QWORD *)&UserData.Size = 16LL;
    v5 = a1 + 1468;
    v6 = 4LL;
    v7 = &v9;
    v8 = 4LL;
    return EtwWrite(EtwpPsProvRegHandle, &JobServerSiloStateChange, 0LL, 3u, &UserData);
  }
  return result;
}
