/*
 * XREFs of KsepDsEventAddDevice @ 0x1405C8848
 * Callers:
 *     KseDsCallbackHookAddDevice @ 0x1405C80A0 (KseDsCallbackHookAddDevice.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char KsepDsEventAddDevice(__int64 a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  int *v5; // [rsp+58h] [rbp-31h]
  int v6; // [rsp+60h] [rbp-29h]
  int v7; // [rsp+64h] [rbp-25h]
  va_list v8; // [rsp+68h] [rbp-21h]
  int v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+74h] [rbp-15h]
  va_list v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+84h] [rbp-5h]
  va_list v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+94h] [rbp+Bh]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A4h] [rbp+1Bh]
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+4Fh] BYREF
  int v25; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+5Fh]
  __int64 v28; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v30; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+F8h] [rbp+6Fh]
  unsigned __int16 *v32; // [rsp+100h] [rbp+77h]
  unsigned __int16 *v33; // [rsp+108h] [rbp+7Fh]
  va_list va3; // [rsp+110h] [rbp+87h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  v32 = va_arg(va3, unsigned __int16 *);
  v33 = va_arg(va3, unsigned __int16 *);
  v2 = &retaddr;
  v25 = a2;
  v24 = a1;
  if ( KseEtwHandle )
  {
    LOBYTE(v2) = EtwEventEnabled(KseEtwHandle, &KseDsEventAddDevice);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      UserData.Ptr = (ULONGLONG)&v24;
      v5 = &v25;
      va_copy(v8, va);
      va_copy(v11, va1);
      va_copy(v14, va2);
      v6 = 4;
      v15 = 4;
      UserData.Size = 8;
      v9 = 8;
      v12 = 8;
      v17 = *((_QWORD *)v32 + 1);
      v18 = *v32 + 2;
      v20 = *((_QWORD *)v33 + 1);
      v21 = *v33 + 2;
      LOBYTE(v2) = EtwWriteEx(KseEtwHandle, &KseDsEventAddDevice, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v2;
}
