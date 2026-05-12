/*
 * XREFs of McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x140076C24
 * Callers:
 *     RaidUnitMaintenanceTime @ 0x140078D34 (RaidUnitMaintenanceTime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zjquuujsss_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13)
{
  const char *v13; // r10
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v26; // [rsp+40h] [rbp-A1h]
  int v27; // [rsp+48h] [rbp-99h]
  int v28; // [rsp+4Ch] [rbp-95h]
  __int64 v29; // [rsp+50h] [rbp-91h]
  __int64 v30; // [rsp+58h] [rbp-89h]
  char *v31; // [rsp+60h] [rbp-81h]
  __int64 v32; // [rsp+68h] [rbp-79h]
  char *v33; // [rsp+70h] [rbp-71h]
  __int64 v34; // [rsp+78h] [rbp-69h]
  char *v35; // [rsp+80h] [rbp-61h]
  __int64 v36; // [rsp+88h] [rbp-59h]
  char *v37; // [rsp+90h] [rbp-51h]
  __int64 v38; // [rsp+98h] [rbp-49h]
  __int64 v39; // [rsp+A0h] [rbp-41h]
  __int64 v40; // [rsp+A8h] [rbp-39h]
  const char *v41; // [rsp+B0h] [rbp-31h]
  int v42; // [rsp+B8h] [rbp-29h]
  int v43; // [rsp+BCh] [rbp-25h]
  const char *v44; // [rsp+C0h] [rbp-21h]
  int v45; // [rsp+C8h] [rbp-19h]
  int v46; // [rsp+CCh] [rbp-15h]
  const char *v47; // [rsp+D0h] [rbp-11h]
  int v48; // [rsp+D8h] [rbp-9h]
  int v49; // [rsp+DCh] [rbp-5h]

  v13 = a13;
  v14 = -1LL;
  v15 = a12;
  v16 = a11;
  if ( a4 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a4[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v27 = v18;
  v29 = a5;
  v31 = &a6;
  if ( !a4 )
    a4 = L"NULL";
  v26 = a4;
  v28 = 0;
  v33 = &a7;
  v35 = &a8;
  v37 = &a9;
  v39 = a10;
  v30 = 16LL;
  v32 = 4LL;
  v34 = 1LL;
  v36 = 1LL;
  v38 = 1LL;
  v40 = 16LL;
  if ( a11 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a11[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v42 = v20;
  v43 = 0;
  if ( !a11 )
    v16 = "NULL";
  v41 = v16;
  if ( a12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a12[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v45 = v22;
  v46 = 0;
  if ( !a12 )
    v15 = "NULL";
  v44 = v15;
  if ( a13 )
  {
    do
      ++v14;
    while ( a13[v14] );
    v23 = (unsigned int)(v14 + 1);
  }
  else
  {
    v23 = 5LL;
  }
  v48 = v23;
  v49 = 0;
  if ( !a13 )
    v13 = "NULL";
  v47 = v13;
  return McGenEventWrite_EtwWriteTransfer(v23, &EventUnitMaintenanceStartOperational, 0LL, 0xBu, &v25);
}
