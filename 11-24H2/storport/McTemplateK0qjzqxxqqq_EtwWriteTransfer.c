/*
 * XREFs of McTemplateK0qjzqxxqqq_EtwWriteTransfer @ 0x1400863CC
 * Callers:
 *     RaProcessStorageEventNotification @ 0x14008A428 (RaProcessStorageEventNotification.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x140138030 (NvmeAdapterProcessStorageEventNotification.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzqxxqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-99h] BYREF
  int *v17; // [rsp+40h] [rbp-89h]
  __int64 v18; // [rsp+48h] [rbp-81h]
  __int64 v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  const wchar_t *v21; // [rsp+60h] [rbp-69h]
  int v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ch] [rbp-5Dh]
  char *v24; // [rsp+70h] [rbp-59h]
  __int64 v25; // [rsp+78h] [rbp-51h]
  char *v26; // [rsp+80h] [rbp-49h]
  __int64 v27; // [rsp+88h] [rbp-41h]
  char *v28; // [rsp+90h] [rbp-39h]
  __int64 v29; // [rsp+98h] [rbp-31h]
  char *v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  char *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  char *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  int v36; // [rsp+108h] [rbp+3Fh] BYREF

  v36 = a4;
  v12 = a6;
  v17 = &v36;
  v19 = a5;
  v18 = 4LL;
  v20 = 16LL;
  if ( a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a6[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v22 = v14;
  v23 = 0;
  v24 = &a7;
  v25 = 4LL;
  v26 = &a8;
  if ( !a6 )
    v12 = L"NULL";
  v21 = v12;
  v28 = &a9;
  v27 = 8LL;
  v30 = &a10;
  v29 = 8LL;
  v32 = &a11;
  v34 = &a12;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v12, &EventNotifyInterfaceProcessingFailure, 0LL, 0xAu, &v16);
}
