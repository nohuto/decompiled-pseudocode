/*
 * XREFs of McTemplateK0jqzjzx_EtwWriteTransfer @ 0x1405A2FF4
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqzjzx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        const wchar_t *a6,
        __int64 a7,
        const wchar_t *a8,
        char a9)
{
  const wchar_t *v9; // r8
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  bool v16; // zf
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h]
  __int64 v20; // [rsp+48h] [rbp-39h]
  char *v21; // [rsp+50h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  const wchar_t *v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  const wchar_t *v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  char *v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+98h] [rbp+17h]

  v9 = a8;
  v19 = a4;
  v20 = 16LL;
  v11 = a6;
  v12 = -1LL;
  v21 = &a5;
  v22 = 4LL;
  v13 = 10;
  if ( a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a6[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v24 = v15;
  if ( !a6 )
    v11 = L"NULL";
  v25 = 0;
  v23 = v11;
  v26 = a7;
  v27 = 16LL;
  v16 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v12;
    while ( a8[v12] );
    v13 = 2 * v12 + 2;
    v16 = a8 == 0LL;
  }
  if ( v16 )
    v9 = L"NULL";
  v29 = v13;
  v28 = v9;
  v31 = &a9;
  v30 = 0;
  v32 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 7u, &v18);
}
