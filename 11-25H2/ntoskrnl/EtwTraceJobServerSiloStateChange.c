/*
 * XREFs of EtwTraceJobServerSiloStateChange @ 0x14079A208
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PspNotifyServerSiloCreation @ 0x140769A58 (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x1408D9BC4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
