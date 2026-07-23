/*
 * XREFs of PpmEventParkNodePreference @ 0x1405D6CF8
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PpmEventParkNodePreference(__int16 a1, __int64 a2, char a3, ...)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-31h]
  int v7; // [rsp+60h] [rbp-29h]
  int v8; // [rsp+64h] [rbp-25h]
  char *v9; // [rsp+68h] [rbp-21h]
  int v10; // [rsp+70h] [rbp-19h]
  int v11; // [rsp+74h] [rbp-15h]
  va_list v12; // [rsp+78h] [rbp-11h]
  int v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+84h] [rbp-5h]
  va_list v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+94h] [rbp+Bh]
  va_list v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A4h] [rbp+1Bh]
  va_list v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int16 v25; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+E0h] [rbp+57h] BYREF
  char v27; // [rsp+E8h] [rbp+5Fh] BYREF
  __int64 v28; // [rsp+F0h] [rbp+67h] BYREF
  va_list va; // [rsp+F0h] [rbp+67h]
  __int64 v30; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+6Fh]
  __int64 v32; // [rsp+100h] [rbp+77h] BYREF
  va_list va2; // [rsp+100h] [rbp+77h]
  va_list va3; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v32 = va_arg(va3, _QWORD);
  v3 = &retaddr;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE_V1);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v6 = &v26;
      v9 = &v27;
      va_copy(v12, va);
      va_copy(v15, va1);
      va_copy(v18, va2);
      va_copy(v21, va3);
      v7 = 8;
      v13 = 8;
      v16 = 8;
      v19 = 8;
      v22 = 8;
      UserData.Size = 2;
      v10 = 1;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE_V1, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
