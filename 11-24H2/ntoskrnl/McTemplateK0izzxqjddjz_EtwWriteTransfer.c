/*
 * XREFs of McTemplateK0izzxqjddjz_EtwWriteTransfer @ 0x1405A2178
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1404C2730 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0izzxqjddjz_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rax
  const wchar_t *v4; // r8
  const wchar_t *v5; // r10
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-B1h] BYREF
  va_list v16; // [rsp+48h] [rbp-A1h]
  __int64 v17; // [rsp+50h] [rbp-99h]
  const wchar_t *v18; // [rsp+58h] [rbp-91h]
  __int64 v19; // [rsp+60h] [rbp-89h]
  const wchar_t *v20; // [rsp+68h] [rbp-81h]
  int v21; // [rsp+70h] [rbp-79h]
  int v22; // [rsp+74h] [rbp-75h]
  va_list v23; // [rsp+78h] [rbp-71h]
  __int64 v24; // [rsp+80h] [rbp-69h]
  va_list v25; // [rsp+88h] [rbp-61h]
  __int64 v26; // [rsp+90h] [rbp-59h]
  __int64 v27; // [rsp+98h] [rbp-51h]
  __int64 v28; // [rsp+A0h] [rbp-49h]
  va_list v29; // [rsp+A8h] [rbp-41h]
  __int64 v30; // [rsp+B0h] [rbp-39h]
  va_list v31; // [rsp+B8h] [rbp-31h]
  __int64 v32; // [rsp+C0h] [rbp-29h]
  __int64 v33; // [rsp+C8h] [rbp-21h]
  __int64 v34; // [rsp+D0h] [rbp-19h]
  const wchar_t *v35; // [rsp+D8h] [rbp-11h]
  int v36; // [rsp+E0h] [rbp-9h]
  int v37; // [rsp+E4h] [rbp-5h]
  __int64 v38; // [rsp+120h] [rbp+37h] BYREF
  va_list va; // [rsp+120h] [rbp+37h]
  const wchar_t *v40; // [rsp+128h] [rbp+3Fh]
  const wchar_t *v41; // [rsp+130h] [rbp+47h]
  __int64 v42; // [rsp+138h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+138h] [rbp+4Fh]
  __int64 v44; // [rsp+140h] [rbp+57h] BYREF
  va_list va2; // [rsp+140h] [rbp+57h]
  __int64 v46; // [rsp+148h] [rbp+5Fh]
  __int64 v47; // [rsp+150h] [rbp+67h] BYREF
  va_list va3; // [rsp+150h] [rbp+67h]
  __int64 v49; // [rsp+158h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+158h] [rbp+6Fh]
  __int64 v51; // [rsp+160h] [rbp+77h]
  const wchar_t *v52; // [rsp+168h] [rbp+7Fh]
  va_list va5; // [rsp+170h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, const wchar_t *);
  v41 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v44 = va_arg(va3, _QWORD);
  v46 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v47 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v49 = va_arg(va5, _QWORD);
  v51 = va_arg(va5, _QWORD);
  v52 = va_arg(va5, const wchar_t *);
  v3 = v40;
  v4 = v52;
  v5 = v41;
  va_copy(v16, va);
  v7 = -1LL;
  v17 = 8LL;
  v8 = 10;
  if ( v40 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v40[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  if ( !v40 )
    v3 = L"NULL";
  v18 = v3;
  if ( v41 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v41[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v21 = v12;
  v22 = 0;
  va_copy(v23, va1);
  if ( !v41 )
    v5 = L"NULL";
  v20 = v5;
  va_copy(v25, va2);
  v27 = v46;
  va_copy(v29, va3);
  va_copy(v31, va4);
  v33 = v51;
  v24 = 8LL;
  v26 = 4LL;
  v28 = 16LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 16LL;
  v13 = v52 == 0LL;
  if ( v52 )
  {
    do
      ++v7;
    while ( v52[v7] );
    v8 = 2 * v7 + 2;
    v13 = v52 == 0LL;
  }
  if ( v13 )
    v4 = L"NULL";
  v36 = v8;
  v35 = v4;
  v37 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xBu, &v15);
}
