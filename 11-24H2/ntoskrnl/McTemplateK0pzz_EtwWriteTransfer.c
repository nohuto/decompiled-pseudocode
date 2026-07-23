/*
 * XREFs of McTemplateK0pzz_EtwWriteTransfer @ 0x1405A2A98
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pzz_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  const wchar_t *v4; // r8
  __int64 v5; // rax
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // edx
  bool v9; // zf
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-50h] BYREF
  va_list v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  const wchar_t *v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int64 v20; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  const wchar_t *v22; // [rsp+B0h] [rbp+30h]
  const wchar_t *v23; // [rsp+B8h] [rbp+38h]
  va_list va1; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, const wchar_t *);
  v23 = va_arg(va1, const wchar_t *);
  v3 = v22;
  v4 = v23;
  va_copy(v12, va);
  v5 = -1LL;
  v13 = 8LL;
  v6 = 10;
  if ( v22 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v22[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v15 = v8;
  v16 = 0;
  if ( !v22 )
    v3 = L"NULL";
  v14 = v3;
  v9 = v23 == 0LL;
  if ( v23 )
  {
    do
      ++v5;
    while ( v23[v5] );
    v6 = 2 * v5 + 2;
    v9 = v23 == 0LL;
  }
  if ( v9 )
    v4 = L"NULL";
  v18 = v6;
  v17 = v4;
  v19 = 0;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelPnP_Provider_Context,
           (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_InstancePath,
           0LL,
           4u,
           &v11);
}
