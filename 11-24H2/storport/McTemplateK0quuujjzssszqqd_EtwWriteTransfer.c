/*
 * XREFs of McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x1400873C4
 * Callers:
 *     RaidCaptureLiveDump @ 0x140042C58 (RaidCaptureLiveDump.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        char a17)
{
  const wchar_t *v17; // rdx
  const wchar_t *v18; // r11
  const char *v19; // r8
  __int64 v20; // rcx
  const char *v21; // r10
  const char *v22; // r9
  int v23; // ebx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  bool v32; // zf
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+38h] [rbp-D0h] BYREF
  int *v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  char *v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  char *v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  char *v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  __int64 v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  const wchar_t *v47; // [rsp+A8h] [rbp-60h]
  int v48; // [rsp+B0h] [rbp-58h]
  int v49; // [rsp+B4h] [rbp-54h]
  const char *v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C4h] [rbp-44h]
  const char *v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  const char *v56; // [rsp+D8h] [rbp-30h]
  int v57; // [rsp+E0h] [rbp-28h]
  int v58; // [rsp+E4h] [rbp-24h]
  const wchar_t *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h]
  int v61; // [rsp+F4h] [rbp-14h]
  char *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  char *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  char *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  int v68; // [rsp+170h] [rbp+68h] BYREF

  v68 = a4;
  v17 = a10;
  v18 = a14;
  v19 = a13;
  v20 = -1LL;
  v21 = a12;
  v22 = a11;
  v35 = &v68;
  v37 = &a5;
  v39 = &a6;
  v41 = &a7;
  v23 = 10;
  v43 = a8;
  v45 = a9;
  v36 = 4LL;
  v38 = 1LL;
  v40 = 1LL;
  v42 = 1LL;
  v44 = 16LL;
  v46 = 16LL;
  if ( a10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a10[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v25 = 10;
  }
  v48 = v25;
  v49 = 0;
  if ( !a10 )
    v17 = L"NULL";
  v47 = v17;
  if ( a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a11[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v27 = 5;
  }
  v51 = v27;
  v52 = 0;
  if ( !a11 )
    v22 = "NULL";
  v50 = v22;
  if ( a12 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a12[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v54 = v29;
  v55 = 0;
  if ( !a12 )
    v21 = "NULL";
  v53 = v21;
  if ( a13 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a13[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v57 = v31;
  v58 = 0;
  if ( !a13 )
    v19 = "NULL";
  v56 = v19;
  v32 = a14 == 0LL;
  if ( a14 )
  {
    do
      ++v20;
    while ( a14[v20] );
    v23 = 2 * v20 + 2;
    v32 = a14 == 0LL;
  }
  if ( v32 )
    v18 = L"NULL";
  v60 = v23;
  v59 = v18;
  v62 = &a15;
  v61 = 0;
  v64 = &a16;
  v63 = 4LL;
  v66 = &a17;
  v65 = 4LL;
  v67 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v20, &EventCaptureLiveDump, 0LL, 0xFu, &v34);
}
