/*
 * XREFs of McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer @ 0x1401395E8
 * Callers:
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14013A43C (StorLogDLRMSetLinkToDesiredSpeed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqtqtxqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        int a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rcx
  const char *v19; // r10
  const char *v20; // r8
  const char *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+48h] [rbp-C0h] BYREF
  int *v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  const wchar_t *v38; // [rsp+78h] [rbp-90h]
  int v39; // [rsp+80h] [rbp-88h]
  int v40; // [rsp+84h] [rbp-84h]
  const char *v41; // [rsp+88h] [rbp-80h]
  int v42; // [rsp+90h] [rbp-78h]
  int v43; // [rsp+94h] [rbp-74h]
  char *v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  char *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  const char *v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  int v50; // [rsp+C4h] [rbp-44h]
  const char *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  char *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  int *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  char *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  char *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  char *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  int v68; // [rsp+190h] [rbp+88h] BYREF

  v68 = a4;
  v18 = a6;
  v19 = a11;
  v20 = a10;
  v22 = a7;
  v34 = &v68;
  v36 = a5;
  v23 = -1LL;
  v32 = 1;
  v35 = 4LL;
  v37 = 16LL;
  if ( a6 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a6[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v39 = v25;
  v40 = 0;
  if ( !a6 )
    v18 = L"NULL";
  v38 = v18;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v42 = v27;
  v43 = 0;
  v44 = &a8;
  v45 = 2LL;
  if ( !a7 )
    v22 = "NULL";
  v46 = &a9;
  v41 = v22;
  v47 = 2LL;
  if ( a10 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a10[v28] );
    v29 = (unsigned int)(v28 + 1);
  }
  else
  {
    v29 = 5LL;
  }
  v49 = v29;
  v50 = 0;
  if ( !a10 )
    v20 = "NULL";
  v48 = v20;
  if ( a11 )
  {
    do
      ++v23;
    while ( a11[v23] );
    v30 = v23 + 1;
  }
  else
  {
    v30 = 5;
  }
  v52 = v30;
  v53 = 0;
  v54 = &a12;
  if ( !a11 )
    v19 = "NULL";
  v51 = v19;
  v56 = &v32;
  v55 = 4LL;
  v58 = &a14;
  v57 = 4LL;
  v60 = &a15;
  v59 = 4LL;
  v62 = &a16;
  v64 = &a17;
  v66 = &a18;
  v61 = 4LL;
  v63 = 8LL;
  v65 = 4LL;
  v67 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v29, a2, 0LL, 0x10u, &v33);
}
