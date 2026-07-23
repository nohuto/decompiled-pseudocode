/*
 * XREFs of PpmEventParkNodeParkHintChanged @ 0x1404D1B18
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodeParkHintChanged(__int16 a1, __int64 a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-30h]
  int v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+5Ch] [rbp-24h]
  __int64 *v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]
  __int16 v10; // [rsp+90h] [rbp+10h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v10 = a1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE_V0) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v10;
      v5 = 8;
      v4 = &v11;
      v8 = 8;
      v7 = &v12;
      UserData.Size = 2;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE_V0, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
