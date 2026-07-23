/*
 * XREFs of PpmEventParkNodeCapChange @ 0x1405D6C0C
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeCapChange(__int16 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+17h]
  int v8; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+64h] [rbp+23h]
  char *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  char *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int16 v17; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+6Fh] BYREF
  char v19; // [rsp+B8h] [rbp+77h] BYREF
  char v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE_V1);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&v17;
      v11 = 1;
      v7 = &v18;
      v10 = &v19;
      v13 = &v20;
      v14 = 1;
      UserData.Size = 2;
      v8 = 8;
      LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE_V1, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
