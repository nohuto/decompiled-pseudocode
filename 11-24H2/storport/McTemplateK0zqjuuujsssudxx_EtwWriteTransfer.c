/*
 * XREFs of McTemplateK0zqjuuujsssudxx_EtwWriteTransfer @ 0x140090B30
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x14009F474 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujsssudxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  const char *v17; // r10
  __int64 v18; // rcx
  const char *v19; // rdx
  const char *v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  char *v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  char *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  char *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  char *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  const char *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  const char *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  const char *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  char *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  char *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]

  v17 = a13;
  v18 = -1LL;
  v19 = a12;
  v20 = a11;
  if ( a4 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a4[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v31 = v22;
  v32 = 0;
  v34 = 4LL;
  v33 = &a5;
  if ( !a4 )
    a4 = L"NULL";
  v35 = a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v30 = a4;
  v43 = a10;
  v36 = 16LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 16LL;
  if ( a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a11[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v46 = v24;
  v47 = 0;
  if ( !a11 )
    v20 = "NULL";
  v45 = v20;
  if ( a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a12[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v49 = v26;
  v50 = 0;
  if ( !a12 )
    v19 = "NULL";
  v48 = v19;
  if ( a13 )
  {
    do
      ++v18;
    while ( a13[v18] );
    v27 = (unsigned int)(v18 + 1);
  }
  else
  {
    v27 = 5LL;
  }
  v52 = v27;
  v54 = &a14;
  v53 = 0;
  v56 = &a15;
  v55 = 1LL;
  v58 = &a16;
  if ( !a13 )
    v17 = "NULL";
  v51 = v17;
  v60 = &a17;
  v57 = 4LL;
  v59 = 8LL;
  v61 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v27, &EventHierarchicalReset, 0LL, 0xFu, &v29);
}
