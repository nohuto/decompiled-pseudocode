/*
 * XREFs of McTemplateK0pzzqdqd_EtwWriteTransfer @ 0x1405A2E78
 * Callers:
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzqdqd_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  const wchar_t *v4; // r8
  __int64 v5; // rax
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // edx
  bool v9; // zf
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  va_list v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  const wchar_t *v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  const wchar_t *v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  va_list v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  va_list v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  va_list v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  va_list v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  __int64 v28; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+4Fh]
  const wchar_t *v30; // [rsp+F0h] [rbp+57h]
  const wchar_t *v31; // [rsp+F8h] [rbp+5Fh]
  __int64 v32; // [rsp+100h] [rbp+67h] BYREF
  va_list va1; // [rsp+100h] [rbp+67h]
  __int64 v34; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+6Fh]
  __int64 v36; // [rsp+110h] [rbp+77h] BYREF
  va_list va3; // [rsp+110h] [rbp+77h]
  va_list va4; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, const wchar_t *);
  v31 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v36 = va_arg(va4, _QWORD);
  v3 = v30;
  v4 = v31;
  va_copy(v12, va);
  v5 = -1LL;
  v13 = 8LL;
  v6 = 10;
  if ( v30 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v30[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v15 = v8;
  v16 = 0;
  if ( !v30 )
    v3 = L"NULL";
  v14 = v3;
  v9 = v31 == 0LL;
  if ( v31 )
  {
    do
      ++v5;
    while ( v31[v5] );
    v6 = 2 * v5 + 2;
    v9 = v31 == 0LL;
  }
  if ( v9 )
    v4 = L"NULL";
  v18 = v6;
  v17 = v4;
  va_copy(v20, va1);
  v19 = 0;
  va_copy(v22, va2);
  v21 = 4LL;
  va_copy(v24, va3);
  v23 = 4LL;
  va_copy(v26, va4);
  v25 = 4LL;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_ProblemCode_Update,
           0LL,
           8u,
           &v11);
}
