/*
 * XREFs of KsepDsEventRequestPowerIrp @ 0x1405C9488
 * Callers:
 *     KseDsHookPoRequestPowerIrp @ 0x1405C87B0 (KseDsHookPoRequestPowerIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventRequestPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-19h]
  int v10; // [rsp+60h] [rbp-11h]
  int v11; // [rsp+64h] [rbp-Dh]
  __int64 *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  int *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  char *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  char *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+4Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+57h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v27; // [rsp+D8h] [rbp+67h] BYREF
  int v28; // [rsp+E0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  if ( KseEtwHandle )
  {
    LOBYTE(v6) = EtwEventEnabled(KseEtwHandle, &KseDsEventRequestPowerIrp);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v9 = &v26;
      v12 = &v27;
      v15 = &v28;
      v18 = &a5;
      UserData.Size = 8;
      v10 = 8;
      v13 = 8;
      v21 = &a6;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      LOBYTE(v6) = EtwWriteEx(KseEtwHandle, &KseDsEventRequestPowerIrp, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
