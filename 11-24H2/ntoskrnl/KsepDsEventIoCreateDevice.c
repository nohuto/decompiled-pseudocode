/*
 * XREFs of KsepDsEventIoCreateDevice @ 0x1405C8EF0
 * Callers:
 *     KseDsHookIoCreateDevice @ 0x1405C8710 (KseDsHookIoCreateDevice.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall KsepDsEventIoCreateDevice(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, char a6)
{
  BOOLEAN result; // al
  int v7; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-19h]
  int v10; // [rsp+70h] [rbp-11h]
  int v11; // [rsp+74h] [rbp-Dh]
  int *v12; // [rsp+78h] [rbp-9h]
  int v13; // [rsp+80h] [rbp-1h]
  int v14; // [rsp+84h] [rbp+3h]
  int *v15; // [rsp+88h] [rbp+7h]
  int v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+94h] [rbp+13h]
  int *v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+A0h] [rbp+1Fh]
  int v20; // [rsp+A4h] [rbp+23h]
  char *v21; // [rsp+A8h] [rbp+27h]
  int v22; // [rsp+B0h] [rbp+2Fh]
  int v23; // [rsp+B4h] [rbp+33h]
  __int64 v24; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+5Fh] BYREF
  int v26; // [rsp+E8h] [rbp+67h] BYREF
  int v27; // [rsp+F0h] [rbp+6Fh] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v24 = a1;
  result = a5;
  v7 = a5;
  if ( KseEtwHandle )
  {
    result = EtwEventEnabled(KseEtwHandle, &KseDsEventCreateDevice);
    if ( result )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v24;
      v9 = &v25;
      v12 = &v26;
      v15 = &v27;
      v18 = &v7;
      UserData.Size = 8;
      v10 = 8;
      v21 = &a6;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      return EtwWriteEx(KseEtwHandle, &KseDsEventCreateDevice, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
