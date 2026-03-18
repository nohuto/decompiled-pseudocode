/*
 * XREFs of McTemplateK0pzzzq_EtwWriteTransfer @ 0x14006B5AC
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAD20 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400124A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzzzq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // r8
  const wchar_t *v4; // r10
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // ecx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-39h] BYREF
  va_list v16; // [rsp+48h] [rbp-29h]
  __int64 v17; // [rsp+50h] [rbp-21h]
  const wchar_t *v18; // [rsp+58h] [rbp-19h]
  int v19; // [rsp+60h] [rbp-11h]
  int v20; // [rsp+64h] [rbp-Dh]
  const wchar_t *v21; // [rsp+68h] [rbp-9h]
  int v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+74h] [rbp+3h]
  const wchar_t *v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+80h] [rbp+Fh]
  int v26; // [rsp+84h] [rbp+13h]
  va_list v27; // [rsp+88h] [rbp+17h]
  __int64 v28; // [rsp+90h] [rbp+1Fh]
  __int64 v29; // [rsp+D0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+5Fh]
  const wchar_t *v31; // [rsp+D8h] [rbp+67h]
  const wchar_t *v32; // [rsp+E0h] [rbp+6Fh]
  const wchar_t *v33; // [rsp+E8h] [rbp+77h]
  va_list va1; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, const wchar_t *);
  v32 = va_arg(va1, const wchar_t *);
  v33 = va_arg(va1, const wchar_t *);
  v3 = v31;
  v4 = v33;
  va_copy(v16, va);
  v6 = v32;
  v7 = -1LL;
  v17 = 8LL;
  v8 = 10;
  if ( v31 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v31[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v19 = v10;
  v20 = 0;
  if ( !v31 )
    v3 = L"NULL";
  v18 = v3;
  if ( v32 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v32[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v22 = v12;
  v23 = 0;
  if ( !v32 )
    v6 = L"NULL";
  v21 = v6;
  v13 = v33 == 0LL;
  if ( v33 )
  {
    do
      ++v7;
    while ( v33[v7] );
    v8 = 2 * v7 + 2;
    v13 = v33 == 0LL;
  }
  v25 = v8;
  va_copy(v27, va1);
  v26 = 0;
  if ( v13 )
    v4 = L"NULL";
  v24 = v4;
  v28 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)v3, 6u, &v15);
}
