/*
 * XREFs of PpmEventTraceMultiClassHeteroResponseUpdateEx @ 0x1405DC2F4
 * Callers:
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceMultiClassHeteroResponseUpdateEx(char a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+58h] [rbp+7h]
  int v8; // [rsp+60h] [rbp+Fh]
  int v9; // [rsp+64h] [rbp+13h]
  __int64 v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  __int64 v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  __int64 *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v20; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v21 = a3;
  v20 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v10 = a2 + 6;
      v13 = a2 + 16;
      v8 = 2;
      v11 = 2;
      v16 = &v21;
      v14 = 8;
      v17 = 8;
      UserData.Size = 1;
      v7 = a2;
      LOBYTE(v3) = EtwWriteEx(
                     PpmEtwHandle,
                     &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v3;
}
