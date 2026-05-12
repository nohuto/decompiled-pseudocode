/*
 * XREFs of McTemplateK0zqqqqqqq_EtwWriteTransfer @ 0x1400A6134
 * Callers:
 *     RaAttemptHighWaterMarkIncrease @ 0x14003E1D0 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqqqqqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rax
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-71h]
  int v16; // [rsp+48h] [rbp-69h]
  int v17; // [rsp+4Ch] [rbp-65h]
  char *v18; // [rsp+50h] [rbp-61h]
  __int64 v19; // [rsp+58h] [rbp-59h]
  char *v20; // [rsp+60h] [rbp-51h]
  __int64 v21; // [rsp+68h] [rbp-49h]
  char *v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  char *v24; // [rsp+80h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-29h]
  char *v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h]
  char *v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  char *v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]

  if ( a4 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a4[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v16 = v12;
  v17 = 0;
  v19 = 4LL;
  v18 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v21 = 4LL;
  v15 = a4;
  v20 = &a6;
  v23 = 4LL;
  v22 = &a7;
  v25 = 4LL;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)L"NULL", &EventAdapterResourceListFailure, 0LL, 9u, &v14);
}
