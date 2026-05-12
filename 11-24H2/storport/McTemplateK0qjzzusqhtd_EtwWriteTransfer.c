/*
 * XREFs of McTemplateK0qjzzusqhtd_EtwWriteTransfer @ 0x1400CC42C
 * Callers:
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzzusqhtd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // rcx
  const char *v14; // r10
  const wchar_t *v15; // rdx
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-B1h] BYREF
  int *v25; // [rsp+40h] [rbp-A1h]
  __int64 v26; // [rsp+48h] [rbp-99h]
  __int64 v27; // [rsp+50h] [rbp-91h]
  __int64 v28; // [rsp+58h] [rbp-89h]
  const wchar_t *v29; // [rsp+60h] [rbp-81h]
  int v30; // [rsp+68h] [rbp-79h]
  int v31; // [rsp+6Ch] [rbp-75h]
  const wchar_t *v32; // [rsp+70h] [rbp-71h]
  int v33; // [rsp+78h] [rbp-69h]
  int v34; // [rsp+7Ch] [rbp-65h]
  char *v35; // [rsp+80h] [rbp-61h]
  __int64 v36; // [rsp+88h] [rbp-59h]
  const char *v37; // [rsp+90h] [rbp-51h]
  int v38; // [rsp+98h] [rbp-49h]
  int v39; // [rsp+9Ch] [rbp-45h]
  char *v40; // [rsp+A0h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-39h]
  char *v42; // [rsp+B0h] [rbp-31h]
  __int64 v43; // [rsp+B8h] [rbp-29h]
  char *v44; // [rsp+C0h] [rbp-21h]
  __int64 v45; // [rsp+C8h] [rbp-19h]
  char *v46; // [rsp+D0h] [rbp-11h]
  __int64 v47; // [rsp+D8h] [rbp-9h]
  int v48; // [rsp+118h] [rbp+37h] BYREF

  v48 = a4;
  v13 = a6;
  v14 = a9;
  v15 = a7;
  v25 = &v48;
  v27 = a5;
  v16 = 10;
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
  v20 = a7 == 0LL;
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
    v16 = 2 * v21 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v15 = L"NULL";
  v33 = v16;
  v32 = v15;
  v35 = &a8;
  v34 = 0;
  v36 = 1LL;
  if ( a9 )
  {
    do
      ++v17;
    while ( a9[v17] );
    v22 = v17 + 1;
  }
  else
  {
    v22 = 5;
  }
  v38 = v22;
  v39 = 0;
  v40 = &a10;
  v41 = 4LL;
  v42 = &a11;
  v43 = 2LL;
  v44 = &a12;
  if ( !a9 )
    v14 = "NULL";
  v37 = v14;
  v46 = &a13;
  v45 = 4LL;
  v47 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)"NULL", &EventNVMeAdapterSurpriseRemoved, 0LL, 0xBu, &v24);
}
