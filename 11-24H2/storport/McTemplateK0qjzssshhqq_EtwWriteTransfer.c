/*
 * XREFs of McTemplateK0qjzssshhqq_EtwWriteTransfer @ 0x140056B84
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14005A5E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzssshhqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  const wchar_t *v13; // rdx
  const char *v14; // r10
  const char *v15; // r9
  const char *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-B1h] BYREF
  int *v27; // [rsp+40h] [rbp-A1h]
  __int64 v28; // [rsp+48h] [rbp-99h]
  __int64 v29; // [rsp+50h] [rbp-91h]
  __int64 v30; // [rsp+58h] [rbp-89h]
  const wchar_t *v31; // [rsp+60h] [rbp-81h]
  int v32; // [rsp+68h] [rbp-79h]
  int v33; // [rsp+6Ch] [rbp-75h]
  const char *v34; // [rsp+70h] [rbp-71h]
  int v35; // [rsp+78h] [rbp-69h]
  int v36; // [rsp+7Ch] [rbp-65h]
  const char *v37; // [rsp+80h] [rbp-61h]
  int v38; // [rsp+88h] [rbp-59h]
  int v39; // [rsp+8Ch] [rbp-55h]
  const char *v40; // [rsp+90h] [rbp-51h]
  int v41; // [rsp+98h] [rbp-49h]
  int v42; // [rsp+9Ch] [rbp-45h]
  char *v43; // [rsp+A0h] [rbp-41h]
  __int64 v44; // [rsp+A8h] [rbp-39h]
  char *v45; // [rsp+B0h] [rbp-31h]
  __int64 v46; // [rsp+B8h] [rbp-29h]
  char *v47; // [rsp+C0h] [rbp-21h]
  __int64 v48; // [rsp+C8h] [rbp-19h]
  char *v49; // [rsp+D0h] [rbp-11h]
  __int64 v50; // [rsp+D8h] [rbp-9h]
  int v51; // [rsp+118h] [rbp+37h] BYREF

  v51 = a4;
  v13 = a6;
  v14 = a9;
  v15 = a8;
  v16 = a7;
  v27 = &v51;
  v29 = a5;
  v17 = -1LL;
  v28 = 4LL;
  v30 = 16LL;
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
  v32 = v19;
  v33 = 0;
  if ( !a6 )
    v13 = L"NULL";
  v31 = v13;
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
  v35 = v21;
  v36 = 0;
  if ( !a7 )
    v16 = "NULL";
  v34 = v16;
  if ( a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a8[v22] );
    v23 = (unsigned int)(v22 + 1);
  }
  else
  {
    v23 = 5LL;
  }
  v38 = v23;
  v39 = 0;
  if ( !a8 )
    v15 = "NULL";
  v37 = v15;
  if ( a9 )
  {
    do
      ++v17;
    while ( a9[v17] );
    v24 = v17 + 1;
  }
  else
  {
    v24 = 5;
  }
  v41 = v24;
  v42 = 0;
  v43 = &a10;
  v44 = 2LL;
  v45 = &a11;
  if ( !a9 )
    v14 = "NULL";
  v40 = v14;
  v47 = &a12;
  v46 = 2LL;
  v49 = &a13;
  v48 = 4LL;
  v50 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v23, &EventFirmwareActivate, 0LL, 0xBu, &v26);
}
