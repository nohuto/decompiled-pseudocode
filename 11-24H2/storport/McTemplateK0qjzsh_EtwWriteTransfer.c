/*
 * XREFs of McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400CBD40
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzsh_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  const char *v9; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  int *v17; // [rsp+40h] [rbp-29h]
  __int64 v18; // [rsp+48h] [rbp-21h]
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  const wchar_t *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  const char *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  char *v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+C8h] [rbp+5Fh] BYREF

  v29 = a4;
  v8 = a6;
  v9 = a7;
  v17 = &v29;
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
    v8 = L"NULL";
  v21 = v8;
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
  if ( !a7 )
    v9 = "NULL";
  v28 = 2LL;
  v24 = v9;
  v27 = &a8;
  return McGenEventWrite_EtwWriteTransfer((__int64)"NULL", a2, 0LL, 6u, &v16);
}
