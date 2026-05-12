/*
 * XREFs of McTemplateK0qjzshq_EtwWriteTransfer @ 0x1400CBE44
 * Callers:
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  const char *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-51h] BYREF
  int *v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  const wchar_t *v21; // [rsp+60h] [rbp-21h]
  int v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+6Ch] [rbp-15h]
  const char *v24; // [rsp+70h] [rbp-11h]
  int v25; // [rsp+78h] [rbp-9h]
  int v26; // [rsp+7Ch] [rbp-5h]
  char *v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  char *v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+D8h] [rbp+57h] BYREF

  v31 = a4;
  v9 = a6;
  v10 = a7;
  v17 = &v31;
  v19 = a5;
  v11 = -1LL;
  v18 = 4LL;
  v20 = 16LL;
  if ( a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v22 = v13;
  v23 = 0;
  if ( !a6 )
    v9 = L"NULL";
  v21 = v9;
  if ( a7 )
  {
    do
      ++v11;
    while ( a7[v11] );
    v14 = v11 + 1;
  }
  else
  {
    v14 = 5;
  }
  v25 = v14;
  v26 = 0;
  v28 = 2LL;
  v27 = &a8;
  if ( !a7 )
    v10 = "NULL";
  v30 = 4LL;
  v24 = v10;
  v29 = &a9;
  return McGenEventWrite_EtwWriteTransfer((__int64)"NULL", &EventNVMeoFConnectControllerSuccess, 0LL, 7u, &v16);
}
