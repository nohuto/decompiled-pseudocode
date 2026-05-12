/*
 * XREFs of McTemplateK0qjzszhhsstqquuq_EtwWriteTransfer @ 0x1400C3458
 * Callers:
 *     StorLogIdentifyMFNDFailure @ 0x1400C45DC (StorLogIdentifyMFNDFailure.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsstqquuq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        const wchar_t *a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18)
{
  const wchar_t *v18; // rdx
  const char *v19; // rbx
  const char *v20; // r8
  __int64 v21; // rcx
  const wchar_t *v22; // r10
  const char *v23; // r9
  int v24; // r11d
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+38h] [rbp-D0h] BYREF
  int *v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  const wchar_t *v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  const char *v42; // [rsp+78h] [rbp-90h]
  int v43; // [rsp+80h] [rbp-88h]
  int v44; // [rsp+84h] [rbp-84h]
  const wchar_t *v45; // [rsp+88h] [rbp-80h]
  int v46; // [rsp+90h] [rbp-78h]
  int v47; // [rsp+94h] [rbp-74h]
  char *v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  char *v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  const char *v52; // [rsp+B8h] [rbp-50h]
  int v53; // [rsp+C0h] [rbp-48h]
  int v54; // [rsp+C4h] [rbp-44h]
  const char *v55; // [rsp+C8h] [rbp-40h]
  int v56; // [rsp+D0h] [rbp-38h]
  int v57; // [rsp+D4h] [rbp-34h]
  char *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  char *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  char *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  char *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  char *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  char *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  int v70; // [rsp+180h] [rbp+78h] BYREF

  v70 = a4;
  v18 = a6;
  v19 = a12;
  v20 = a11;
  v21 = -1LL;
  v22 = a8;
  v23 = a7;
  v36 = &v70;
  v24 = 10;
  v38 = a5;
  v37 = 4LL;
  v39 = 16LL;
  if ( a6 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a6[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v41 = v26;
  if ( !a6 )
    v18 = L"NULL";
  v40 = v18;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v43 = v28;
  v44 = 0;
  if ( !a7 )
    v23 = "NULL";
  v42 = v23;
  v29 = a8 == 0LL;
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
    v24 = 2 * v30 + 2;
    v29 = a8 == 0LL;
  }
  v46 = v24;
  if ( v29 )
    v22 = L"NULL";
  v48 = &a9;
  v45 = v22;
  v50 = &a10;
  v47 = 0;
  v49 = 2LL;
  v51 = 2LL;
  if ( a11 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a11[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v53 = v32;
  v54 = 0;
  if ( !a11 )
    v20 = "NULL";
  v52 = v20;
  if ( a12 )
  {
    do
      ++v21;
    while ( a12[v21] );
    v33 = (unsigned int)(v21 + 1);
  }
  else
  {
    v33 = 5LL;
  }
  v56 = v33;
  v58 = &a13;
  v57 = 0;
  v60 = &a14;
  v59 = 4LL;
  v62 = &a15;
  if ( !a12 )
    v19 = "NULL";
  v55 = v19;
  v64 = &a16;
  v61 = 4LL;
  v66 = &a17;
  v63 = 4LL;
  v68 = &a18;
  v65 = 1LL;
  v67 = 1LL;
  v69 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v33, &EventIdentifyMFNDFailure, 0LL, 0x10u, &v35);
}
