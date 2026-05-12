/*
 * XREFs of McTemplateK0jqzzqxtqqttt_EtwWriteTransfer @ 0x1400566F0
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqzzqxtqqttt_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        int a12,
        char a13,
        char a14,
        char a15)
{
  const wchar_t *v15; // rcx
  const wchar_t *v16; // r8
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // edx
  bool v21; // zf
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  const wchar_t *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  char *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  char *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  char *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]

  v15 = a6;
  v16 = a7;
  v23 = StorageD3RegistryState;
  v27 = &a5;
  v17 = -1LL;
  v25 = a4;
  v18 = 10;
  v26 = 16LL;
  v28 = 4LL;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v30 = v20;
  v31 = 0;
  if ( !a6 )
    v15 = L"NULL";
  v29 = v15;
  v21 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v17;
    while ( a7[v17] );
    v18 = 2 * v17 + 2;
    v21 = a7 == 0LL;
  }
  if ( v21 )
    v16 = L"NULL";
  v33 = v18;
  v32 = v16;
  v35 = &a8;
  v34 = 0;
  v37 = &a9;
  v36 = 4LL;
  v39 = &a10;
  v38 = 8LL;
  v41 = &a11;
  v43 = &v23;
  v45 = &a13;
  v47 = &a14;
  v49 = &a15;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v15, &EventInitializeStorageD3, 0LL, 0xDu, &v24);
}
