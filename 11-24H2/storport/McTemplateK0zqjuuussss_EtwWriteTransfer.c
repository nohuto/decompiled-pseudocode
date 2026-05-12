/*
 * XREFs of McTemplateK0zqjuuussss_EtwWriteTransfer @ 0x140090D28
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuussss_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13)
{
  const char *v13; // r11
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // r8
  const char *v17; // r10
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+38h] [rbp-B1h] BYREF
  const wchar_t *v29; // [rsp+48h] [rbp-A1h]
  __int64 v30; // [rsp+50h] [rbp-99h]
  char *v31; // [rsp+58h] [rbp-91h]
  __int64 v32; // [rsp+60h] [rbp-89h]
  __int64 v33; // [rsp+68h] [rbp-81h]
  __int64 v34; // [rsp+70h] [rbp-79h]
  char *v35; // [rsp+78h] [rbp-71h]
  __int64 v36; // [rsp+80h] [rbp-69h]
  char *v37; // [rsp+88h] [rbp-61h]
  __int64 v38; // [rsp+90h] [rbp-59h]
  char *v39; // [rsp+98h] [rbp-51h]
  __int64 v40; // [rsp+A0h] [rbp-49h]
  const char *v41; // [rsp+A8h] [rbp-41h]
  int v42; // [rsp+B0h] [rbp-39h]
  int v43; // [rsp+B4h] [rbp-35h]
  const char *v44; // [rsp+B8h] [rbp-31h]
  int v45; // [rsp+C0h] [rbp-29h]
  int v46; // [rsp+C4h] [rbp-25h]
  const char *v47; // [rsp+C8h] [rbp-21h]
  int v48; // [rsp+D0h] [rbp-19h]
  int v49; // [rsp+D4h] [rbp-15h]
  const char *v50; // [rsp+D8h] [rbp-11h]
  int v51; // [rsp+E0h] [rbp-9h]
  int v52; // [rsp+E4h] [rbp-5h]

  v13 = a13;
  v14 = -1LL;
  v15 = a12;
  v16 = a11;
  v17 = a10;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v30 = v19;
  v32 = 4LL;
  v31 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v33 = a6;
  v35 = &a7;
  v37 = &a8;
  v29 = a4;
  v39 = &a9;
  v34 = 16LL;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 1LL;
  if ( a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a10[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v42 = v21;
  v43 = 0;
  if ( !a10 )
    v17 = "NULL";
  v41 = v17;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v45 = v23;
  v46 = 0;
  if ( !a11 )
    v16 = "NULL";
  v44 = v16;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a12[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v48 = v25;
  v49 = 0;
  if ( !a12 )
    v15 = "NULL";
  v47 = v15;
  if ( a13 )
  {
    do
      ++v14;
    while ( a13[v14] );
    v26 = (unsigned int)(v14 + 1);
  }
  else
  {
    v26 = 5LL;
  }
  v51 = v26;
  v52 = 0;
  if ( !a13 )
    v13 = "NULL";
  v50 = v13;
  return McGenEventWrite_EtwWriteTransfer(v26, &EventReadCapacityRaceLose, 0LL, 0xBu, &v28);
}
