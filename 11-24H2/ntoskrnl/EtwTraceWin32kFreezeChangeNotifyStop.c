/*
 * XREFs of EtwTraceWin32kFreezeChangeNotifyStop @ 0x1407A9D2C
 * Callers:
 *     PspPostFreezeOperationWorker @ 0x140A783C0 (PspPostFreezeOperationWorker.c)
 *     PspWin32kProcessFreezeNotify @ 0x140A8A968 (PspWin32kProcessFreezeNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceWin32kFreezeChangeNotifyStop(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  int v6; // r11d
  unsigned __int16 v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int16 *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int16 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]
  __int16 v22; // [rsp+E0h] [rbp+77h] BYREF

  v22 = a3;
  if ( (unsigned int)dword_140E09160 > 5 && tlgKeywordOn((__int64)&dword_140E09160, 4LL) )
  {
    v7 = v3;
    v11 = &v8;
    v19 = 0;
    v13 = (__int16 *)&v7;
    v9 = v4;
    v15 = &v22;
    v18 = 4 * v3;
    v20 = &v9;
    v8 = v6;
    v12 = 4LL;
    v14 = 2LL;
    v16 = 2LL;
    v17 = v5;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09160, (unsigned __int8 *)byte_14005374B, 0LL, 0LL, 7u, &v10);
  }
}
