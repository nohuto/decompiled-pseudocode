/*
 * XREFs of PpmEventTraceHeteroDistributeUtility @ 0x1404F75CC
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x140408490 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceHeteroDistributeUtility(__int64 a1, char a2, char a3)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+58h] [rbp+17h]
  int v8; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+64h] [rbp+23h]
  char *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  char *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  char v17; // [rsp+B0h] [rbp+6Fh] BYREF
  char v18; // [rsp+B8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v18 = a3;
  v17 = a2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = a1 + 4;
      v11 = 1;
      v7 = a1 + 16;
      v10 = &v17;
      v13 = &v18;
      v14 = 1;
      UserData.Size = 2;
      v8 = 8;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
