/*
 * XREFs of McTemplateK0pxzqq_EtwWriteTransfer @ 0x14008185C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400156A8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pxzqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-39h] BYREF
  va_list v8; // [rsp+40h] [rbp-29h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  va_list v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  const wchar_t *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  va_list v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  va_list v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  const wchar_t *v23; // [rsp+D8h] [rbp+6Fh]
  __int64 v24; // [rsp+E0h] [rbp+77h] BYREF
  va_list va2; // [rsp+E0h] [rbp+77h]
  va_list va3; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, const wchar_t *);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v3 = v23;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  v11 = 8LL;
  if ( v23 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v23[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v13 = v5;
  v14 = 0;
  v16 = 4LL;
  va_copy(v15, va2);
  if ( !v23 )
    v3 = L"NULL";
  v12 = v3;
  va_copy(v17, va3);
  v18 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, (__int64)L"NULL", 6u, &v7);
}
