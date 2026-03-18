/*
 * XREFs of McTemplateK0psqzq_EtwWriteTransfer @ 0x140034428
 * Callers:
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x140021180 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0psqzq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  const char *v3; // rdx
  __int64 v4; // rcx
  const wchar_t *v6; // r8
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-39h] BYREF
  va_list v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  const char *v14; // [rsp+50h] [rbp-19h]
  int v15; // [rsp+58h] [rbp-11h]
  int v16; // [rsp+5Ch] [rbp-Dh]
  va_list v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  const wchar_t *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  va_list v22; // [rsp+80h] [rbp+17h]
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  __int64 v24; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  const char *v26; // [rsp+D0h] [rbp+67h]
  __int64 v27; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+6Fh]
  const wchar_t *v29; // [rsp+E0h] [rbp+77h]
  va_list va2; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  v29 = va_arg(va2, const wchar_t *);
  v3 = v26;
  va_copy(v12, va);
  v4 = -1LL;
  v13 = 8LL;
  v6 = v29;
  if ( v26 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v26[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5;
  }
  v15 = v8;
  v16 = 0;
  if ( !v26 )
    v3 = "NULL";
  v18 = 4LL;
  v14 = v3;
  va_copy(v17, va1);
  if ( v29 )
  {
    do
      ++v4;
    while ( v29[v4] );
    v9 = (unsigned int)(2 * v4 + 2);
  }
  else
  {
    v9 = 10LL;
  }
  v20 = v9;
  v21 = 0;
  if ( !v29 )
    v6 = L"NULL";
  v23 = 4LL;
  v19 = v6;
  va_copy(v22, va2);
  return McGenEventWrite_EtwWriteTransfer(v9, &USBHUB3_ETW_EVENT_USBENUM_SERIAL_MISMATCH_ON_RENUMERATION, a3, 6u, &v11);
}
