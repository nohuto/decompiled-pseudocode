/*
 * XREFs of McTemplateK0pqqttp_EtwWriteTransfer @ 0x140018670
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqqttp_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-61h] BYREF
  va_list v5; // [rsp+50h] [rbp-41h]
  __int64 v6; // [rsp+58h] [rbp-39h]
  va_list v7; // [rsp+60h] [rbp-31h]
  __int64 v8; // [rsp+68h] [rbp-29h]
  va_list v9; // [rsp+70h] [rbp-21h]
  __int64 v10; // [rsp+78h] [rbp-19h]
  va_list v11; // [rsp+80h] [rbp-11h]
  __int64 v12; // [rsp+88h] [rbp-9h]
  int *v13; // [rsp+90h] [rbp-1h]
  __int64 v14; // [rsp+98h] [rbp+7h]
  va_list v15; // [rsp+A0h] [rbp+Fh]
  __int64 v16; // [rsp+A8h] [rbp+17h]
  __int64 v17; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v19; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v21; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v23; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v25; // [rsp+108h] [rbp+77h]
  va_list va4; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v21 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v23 = va_arg(va4, _QWORD);
  v25 = va_arg(va4, _QWORD);
  v6 = 8LL;
  v4 = 0;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  v12 = 4LL;
  va_copy(v11, va3);
  v13 = &v4;
  va_copy(v15, va4);
  v14 = 4LL;
  v16 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
