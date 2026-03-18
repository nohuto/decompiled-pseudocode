/*
 * XREFs of McTemplateU0txqqxqx_EventWriteTransfer @ 0x1802BD904
 * Callers:
 *     ?ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z @ 0x1802BD6C0 (-ReadyToUnpin@CDelayUnpin@CD3DDevice@@QEAA_NU_LUID@@II@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

ULONG McTemplateU0txqqxqx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-61h] BYREF
  int *v5; // [rsp+40h] [rbp-51h]
  __int64 v6; // [rsp+48h] [rbp-49h]
  va_list v7; // [rsp+50h] [rbp-41h]
  __int64 v8; // [rsp+58h] [rbp-39h]
  va_list v9; // [rsp+60h] [rbp-31h]
  __int64 v10; // [rsp+68h] [rbp-29h]
  va_list v11; // [rsp+70h] [rbp-21h]
  __int64 v12; // [rsp+78h] [rbp-19h]
  va_list v13; // [rsp+80h] [rbp-11h]
  __int64 v14; // [rsp+88h] [rbp-9h]
  va_list v15; // [rsp+90h] [rbp-1h]
  __int64 v16; // [rsp+98h] [rbp+7h]
  va_list v17; // [rsp+A0h] [rbp+Fh]
  __int64 v18; // [rsp+A8h] [rbp+17h]
  int v19; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v20; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v22; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v24; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v26; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v28; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  v19 = a3;
  v6 = 4LL;
  v8 = 8LL;
  v5 = &v19;
  v10 = 4LL;
  va_copy(v7, va);
  v12 = 4LL;
  va_copy(v9, va1);
  va_copy(v11, va2);
  va_copy(v13, va3);
  va_copy(v15, va4);
  va_copy(v17, va5);
  v14 = 8LL;
  v16 = 4LL;
  v18 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &ResourceReadyToUnPin,
           a3,
           8u,
           &v4);
}
