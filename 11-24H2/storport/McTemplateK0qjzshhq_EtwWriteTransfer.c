/*
 * XREFs of McTemplateK0qjzshhq_EtwWriteTransfer @ 0x1400DDF54
 * Callers:
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E05D4 (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400E40C0 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400E5630 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400F5F78 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10)
{
  const wchar_t *v10; // rcx
  const char *v11; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // eax
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-69h] BYREF
  int *v19; // [rsp+40h] [rbp-59h]
  __int64 v20; // [rsp+48h] [rbp-51h]
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 v22; // [rsp+58h] [rbp-41h]
  const wchar_t *v23; // [rsp+60h] [rbp-39h]
  int v24; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  const char *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  char *v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  char *v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+98h] [rbp-1h]
  char *v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+E8h] [rbp+4Fh] BYREF

  v35 = a4;
  v10 = a6;
  v11 = a7;
  v19 = &v35;
  v21 = a5;
  v13 = -1LL;
  v20 = 4LL;
  v22 = 16LL;
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
  v25 = 0;
  if ( !a6 )
    v10 = L"NULL";
  v23 = v10;
  if ( a7 )
  {
    do
      ++v13;
    while ( a7[v13] );
    v16 = v13 + 1;
  }
  else
  {
    v16 = 5;
  }
  v27 = v16;
  v28 = 0;
  v30 = 2LL;
  v29 = &a8;
  if ( !a7 )
    v11 = "NULL";
  v26 = v11;
  v31 = &a9;
  v32 = 2LL;
  v33 = &a10;
  v34 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)"NULL", a2, 0LL, 8u, &v18);
}
