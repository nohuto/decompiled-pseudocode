/*
 * XREFs of McTemplateU0qxxxxn_EventWriteTransfer @ 0x18022A93C
 * Callers:
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1800AE6D0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

ULONG McTemplateU0qxxxxn_EventWriteTransfer(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-51h] BYREF
  int *v8; // [rsp+40h] [rbp-41h]
  __int64 v9; // [rsp+48h] [rbp-39h]
  __int64 *v10; // [rsp+50h] [rbp-31h]
  __int64 v11; // [rsp+58h] [rbp-29h]
  char *v12; // [rsp+60h] [rbp-21h]
  __int64 v13; // [rsp+68h] [rbp-19h]
  char *v14; // [rsp+70h] [rbp-11h]
  __int64 v15; // [rsp+78h] [rbp-9h]
  va_list v16; // [rsp+80h] [rbp-1h]
  __int64 v17; // [rsp+88h] [rbp+7h]
  __int64 v18; // [rsp+90h] [rbp+Fh]
  __int64 v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+D0h] [rbp+4Fh] BYREF
  __int64 v21; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+6Fh]
  __int64 v24; // [rsp+F8h] [rbp+77h]
  __int64 v25; // [rsp+100h] [rbp+7Fh]
  va_list va1; // [rsp+108h] [rbp+87h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v21 = a4;
  v20 = a3;
  v9 = 4LL;
  v8 = &v20;
  v11 = 8LL;
  v10 = &v21;
  v13 = 8LL;
  v12 = &a5;
  v15 = 8LL;
  v14 = &a6;
  va_copy(v16, va);
  v18 = v25;
  v17 = 8LL;
  v19 = 48LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &BeginFrame, a3, 7u, &v7);
}
