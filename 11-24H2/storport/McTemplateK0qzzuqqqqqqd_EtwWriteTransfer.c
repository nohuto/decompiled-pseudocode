/*
 * XREFs of McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x14005864C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6,
        char a7,
        __int64 a8,
        char a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  const wchar_t *v14; // rcx
  const wchar_t *v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // edx
  bool v21; // zf
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+48h] [rbp-C0h] BYREF
  int *v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  const wchar_t *v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  const wchar_t *v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  char *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  char *v37; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  int *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  char *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  char *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  char *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  char *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+140h] [rbp+38h] BYREF

  v49 = a4;
  v14 = a5;
  v16 = a6;
  v24 = g_ProcessorCountPerGateway;
  v17 = 10;
  v23 = g_MaximumProcessorCount;
  v26 = &v49;
  v18 = -1LL;
  v27 = 4LL;
  if ( a5 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a5[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v29 = v20;
  if ( !a5 )
    v14 = L"NULL";
  v28 = v14;
  v21 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v18;
    while ( a6[v18] );
    v17 = 2 * v18 + 2;
    v21 = a6 == 0LL;
  }
  if ( v21 )
    v16 = L"NULL";
  v31 = v17;
  v30 = v16;
  v33 = &a7;
  v32 = 0;
  v35 = &v23;
  v34 = 1LL;
  v37 = &a9;
  v36 = 4LL;
  v39 = &v24;
  v41 = &a11;
  v43 = &a12;
  v45 = &a13;
  v47 = &a14;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v14, a2, 0LL, 0xCu, &v25);
}
