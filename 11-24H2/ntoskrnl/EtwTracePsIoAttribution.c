/*
 * XREFs of EtwTracePsIoAttribution @ 0x14085BAF4
 * Callers:
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTracePsIoAttribution(int a1, char a2, __int64 a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  int *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  int v13; // [rsp+80h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a1;
  v4 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  if ( !a2 )
    v4 = &PsDiskIoAttributionStop;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v4);
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    v12 = 0;
    UserData.Ptr = (ULONGLONG)&v13;
    UserData.Size = 4;
    v7 = &v14;
    v11 = 4;
    v10 = &v15;
    v8 = 8;
    return EtwWrite(EtwpPsProvRegHandle, v4, 0LL, 3u, &UserData);
  }
  return result;
}
