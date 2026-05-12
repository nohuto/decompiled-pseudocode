/*
 * XREFs of McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer @ 0x1400864E8
 * Callers:
 *     StorLogMFNDCCAsyncEvent @ 0x14008F7F0 (StorLogMFNDCCAsyncEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer(
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
        char a18,
        char a19,
        char a20,
        char a21)
{
  const wchar_t *v21; // rdx
  const char *v22; // rbx
  const char *v23; // r9
  const wchar_t *v24; // r10
  const char *v25; // r8
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // ecx
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+30h] [rbp-D0h] BYREF
  int *v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  const wchar_t *v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h]
  const char *v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v49; // [rsp+80h] [rbp-80h]
  int v50; // [rsp+88h] [rbp-78h]
  int v51; // [rsp+8Ch] [rbp-74h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  char *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  const char *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  char *v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  char *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  char *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  char *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  int v80; // [rsp+1A8h] [rbp+A8h] BYREF

  v80 = a4;
  v21 = a6;
  v22 = a12;
  v23 = a11;
  v24 = a8;
  v25 = a7;
  v39 = &v80;
  v26 = 10;
  v41 = a5;
  v27 = -1LL;
  v40 = 4LL;
  v42 = 16LL;
  if ( a6 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a6[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v29 = 10;
  }
  v44 = v29;
  v45 = 0;
  if ( !a6 )
    v21 = L"NULL";
  v43 = v21;
  if ( a7 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a7[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v47 = v31;
  v48 = 0;
  if ( !a7 )
    v25 = "NULL";
  v46 = v25;
  v32 = a8 == 0LL;
  if ( a8 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a8[v33] );
    v26 = 2 * v33 + 2;
    v32 = a8 == 0LL;
  }
  v50 = v26;
  if ( v32 )
    v24 = L"NULL";
  v52 = &a9;
  v49 = v24;
  v54 = &a10;
  v51 = 0;
  v53 = 2LL;
  v55 = 2LL;
  if ( a11 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a11[v34] );
    v35 = (unsigned int)(v34 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v57 = v35;
  v58 = 0;
  if ( !a11 )
    v23 = "NULL";
  v56 = v23;
  if ( a12 )
  {
    do
      ++v27;
    while ( a12[v27] );
    v36 = v27 + 1;
  }
  else
  {
    v36 = 5;
  }
  v60 = v36;
  v61 = 0;
  v62 = &a13;
  v63 = 2LL;
  v64 = &a14;
  if ( !a12 )
    v22 = "NULL";
  v59 = v22;
  v66 = &a15;
  v65 = 4LL;
  v68 = &a16;
  v67 = 4LL;
  v70 = &a17;
  v72 = &a18;
  v74 = &a19;
  v76 = &a20;
  v78 = &a21;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v35, &EventMFNDCCAsyncEvent, 0LL, 0x13u, &v38);
}
