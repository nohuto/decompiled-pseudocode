/*
 * XREFs of McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer @ 0x1400573E8
 * Callers:
 *     StorLogMFNDNSPageMapControl @ 0x1400670F4 (StorLogMFNDNSPageMapControl.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        char a19)
{
  const char *v19; // rbx
  const char *v20; // r8
  const wchar_t *v21; // r10
  const wchar_t *v23; // rdx
  __int64 v24; // rcx
  const char *v25; // r9
  int v26; // r11d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  int *v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  const wchar_t *v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+6Ch] [rbp-94h]
  const char *v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+88h] [rbp-78h]
  int v50; // [rsp+8Ch] [rbp-74h]
  char *v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  char *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  const char *v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  const char *v58; // [rsp+C0h] [rbp-40h]
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  char *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  char *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  char *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  char *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  char *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  char *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  char *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+198h] [rbp+98h] BYREF

  v75 = a4;
  v19 = a12;
  v20 = a11;
  v21 = a8;
  v23 = a6;
  v24 = -1LL;
  v25 = a7;
  v38 = &v75;
  v26 = 10;
  v40 = a5;
  v39 = 4LL;
  v41 = 16LL;
  if ( a6 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a6[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v43 = v28;
  v44 = 0;
  if ( !a6 )
    v23 = L"NULL";
  v42 = v23;
  if ( a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a7[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5;
  }
  v46 = v30;
  v47 = 0;
  if ( !a7 )
    v25 = "NULL";
  v45 = v25;
  v31 = a8 == 0LL;
  if ( a8 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a8[v32] );
    v26 = 2 * v32 + 2;
    v31 = a8 == 0LL;
  }
  v49 = v26;
  if ( v31 )
    v21 = L"NULL";
  v51 = &a9;
  v48 = v21;
  v53 = &a10;
  v50 = 0;
  v52 = 2LL;
  v54 = 2LL;
  if ( a11 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a11[v33] );
    v34 = v33 + 1;
  }
  else
  {
    v34 = 5;
  }
  v56 = v34;
  v57 = 0;
  if ( !a11 )
    v20 = "NULL";
  v55 = v20;
  if ( a12 )
  {
    do
      ++v24;
    while ( a12[v24] );
    v35 = (unsigned int)(v24 + 1);
  }
  else
  {
    v35 = 5LL;
  }
  v59 = v35;
  v61 = &a13;
  v60 = 0;
  v63 = &a14;
  if ( !a12 )
    v19 = "NULL";
  v58 = v19;
  v65 = &a15;
  v62 = 4LL;
  v67 = &a16;
  v64 = 4LL;
  v69 = &a17;
  v66 = 4LL;
  v71 = &a18;
  v73 = &a19;
  v68 = 4LL;
  v70 = 1LL;
  v72 = 1LL;
  v74 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v35, a2, 0LL, 0x11u, &v37);
}
