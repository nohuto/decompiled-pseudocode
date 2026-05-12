/*
 * XREFs of McTemplateK0qjzshhdqsq_EtwWriteTransfer @ 0x1400DDDC8
 * Callers:
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhdqsq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        const char *a12,
        char a13)
{
  const wchar_t *v13; // rcx
  const char *v14; // r8
  const char *v15; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+38h] [rbp-B1h] BYREF
  int *v25; // [rsp+48h] [rbp-A1h]
  __int64 v26; // [rsp+50h] [rbp-99h]
  __int64 v27; // [rsp+58h] [rbp-91h]
  __int64 v28; // [rsp+60h] [rbp-89h]
  const wchar_t *v29; // [rsp+68h] [rbp-81h]
  int v30; // [rsp+70h] [rbp-79h]
  int v31; // [rsp+74h] [rbp-75h]
  const char *v32; // [rsp+78h] [rbp-71h]
  int v33; // [rsp+80h] [rbp-69h]
  int v34; // [rsp+84h] [rbp-65h]
  char *v35; // [rsp+88h] [rbp-61h]
  __int64 v36; // [rsp+90h] [rbp-59h]
  char *v37; // [rsp+98h] [rbp-51h]
  __int64 v38; // [rsp+A0h] [rbp-49h]
  char *v39; // [rsp+A8h] [rbp-41h]
  __int64 v40; // [rsp+B0h] [rbp-39h]
  char *v41; // [rsp+B8h] [rbp-31h]
  __int64 v42; // [rsp+C0h] [rbp-29h]
  const char *v43; // [rsp+C8h] [rbp-21h]
  int v44; // [rsp+D0h] [rbp-19h]
  int v45; // [rsp+D4h] [rbp-15h]
  char *v46; // [rsp+D8h] [rbp-11h]
  __int64 v47; // [rsp+E0h] [rbp-9h]
  int v48; // [rsp+120h] [rbp+37h] BYREF

  v48 = a4;
  v13 = a6;
  v14 = a12;
  v15 = a7;
  v25 = &v48;
  v27 = a5;
  v17 = -1LL;
  v26 = 4LL;
  v28 = 16LL;
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a6[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v30 = v19;
  v31 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v29 = v13;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v33 = v21;
  v34 = 0;
  v35 = &a8;
  v36 = 2LL;
  v37 = &a9;
  if ( !a7 )
    v15 = "NULL";
  v32 = v15;
  v39 = &a10;
  v41 = &a11;
  v38 = 2LL;
  v40 = 4LL;
  v42 = 4LL;
  if ( a12 )
  {
    do
      ++v17;
    while ( a12[v17] );
    v22 = v17 + 1;
  }
  else
  {
    v22 = 5;
  }
  v44 = v22;
  v45 = 0;
  if ( !a12 )
    v14 = "NULL";
  v46 = &a13;
  v43 = v14;
  v47 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)&a11, a2, 0LL, 0xBu, &v24);
}
