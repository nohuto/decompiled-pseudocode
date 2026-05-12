/*
 * XREFs of McTemplateK0qjshhssqdu_EtwWriteTransfer @ 0x1400C0A34
 * Callers:
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1401B92F0 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjshhssqdu_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10,
        char a11,
        char a12,
        char a13)
{
  const char *v13; // r8
  const char *v14; // r9
  const char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-B1h] BYREF
  int *v24; // [rsp+40h] [rbp-A1h]
  __int64 v25; // [rsp+48h] [rbp-99h]
  __int64 v26; // [rsp+50h] [rbp-91h]
  __int64 v27; // [rsp+58h] [rbp-89h]
  const char *v28; // [rsp+60h] [rbp-81h]
  int v29; // [rsp+68h] [rbp-79h]
  int v30; // [rsp+6Ch] [rbp-75h]
  char *v31; // [rsp+70h] [rbp-71h]
  __int64 v32; // [rsp+78h] [rbp-69h]
  char *v33; // [rsp+80h] [rbp-61h]
  __int64 v34; // [rsp+88h] [rbp-59h]
  const char *v35; // [rsp+90h] [rbp-51h]
  int v36; // [rsp+98h] [rbp-49h]
  int v37; // [rsp+9Ch] [rbp-45h]
  const char *v38; // [rsp+A0h] [rbp-41h]
  int v39; // [rsp+A8h] [rbp-39h]
  int v40; // [rsp+ACh] [rbp-35h]
  char *v41; // [rsp+B0h] [rbp-31h]
  __int64 v42; // [rsp+B8h] [rbp-29h]
  char *v43; // [rsp+C0h] [rbp-21h]
  __int64 v44; // [rsp+C8h] [rbp-19h]
  char *v45; // [rsp+D0h] [rbp-11h]
  __int64 v46; // [rsp+D8h] [rbp-9h]
  int v47; // [rsp+118h] [rbp+37h] BYREF

  v47 = a4;
  v13 = a6;
  v14 = a10;
  v15 = a9;
  v24 = &v47;
  v26 = a5;
  v16 = -1LL;
  v25 = 4LL;
  v27 = 16LL;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v29 = v18;
  v30 = 0;
  v31 = &a7;
  v32 = 2LL;
  if ( !a6 )
    v13 = "NULL";
  v33 = &a8;
  v28 = v13;
  v34 = 2LL;
  if ( a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a9[v19] );
    v20 = (unsigned int)(v19 + 1);
  }
  else
  {
    v20 = 5LL;
  }
  v36 = v20;
  v37 = 0;
  if ( !a9 )
    v15 = "NULL";
  v35 = v15;
  if ( a10 )
  {
    do
      ++v16;
    while ( a10[v16] );
    v21 = v16 + 1;
  }
  else
  {
    v21 = 5;
  }
  v39 = v21;
  v40 = 0;
  v42 = 4LL;
  v41 = &a11;
  if ( !a10 )
    v14 = "NULL";
  v38 = v14;
  v43 = &a12;
  v44 = 4LL;
  v45 = &a13;
  v46 = 1LL;
  return McGenEventWrite_EtwWriteTransfer(v20, &EventNVMeEnumeratePerNamespace, 0LL, 0xBu, &v23);
}
