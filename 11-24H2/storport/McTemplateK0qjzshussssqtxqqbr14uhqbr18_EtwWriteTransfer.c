/*
 * XREFs of McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400ACAC4
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15,
        int a16,
        char a17,
        int a18,
        __int64 a19,
        char a20,
        char a21,
        int a22,
        __int64 a23)
{
  const wchar_t *v23; // rcx
  const char *v24; // rbx
  const char *v25; // r11
  const char *v26; // r10
  const char *v27; // r9
  const char *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // edx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+48h] [rbp-C0h] BYREF
  int *v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  const wchar_t *v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-88h]
  int v50; // [rsp+84h] [rbp-84h]
  const char *v51; // [rsp+88h] [rbp-80h]
  int v52; // [rsp+90h] [rbp-78h]
  int v53; // [rsp+94h] [rbp-74h]
  char *v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  char *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  const char *v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C4h] [rbp-44h]
  const char *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  const char *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  const char *v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F4h] [rbp-14h]
  char *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  char *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  __int64 *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  char *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  int *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  __int64 v80; // [rsp+148h] [rbp+40h]
  int v81; // [rsp+150h] [rbp+48h]
  int v82; // [rsp+154h] [rbp+4Ch]
  char *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  char *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  int *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  __int64 v89; // [rsp+188h] [rbp+80h]
  int v90; // [rsp+190h] [rbp+88h]
  int v91; // [rsp+194h] [rbp+8Ch]
  int v92; // [rsp+1E0h] [rbp+D8h] BYREF

  v92 = a4;
  v23 = a6;
  v24 = a13;
  v25 = a12;
  v26 = a11;
  v27 = a10;
  v28 = a7;
  v42 = *(_QWORD *)&g_SystemUptime_s;
  v44 = &v92;
  v46 = a5;
  v29 = -1LL;
  v45 = 4LL;
  v47 = 16LL;
  if ( a6 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a6[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v49 = v31;
  v50 = 0;
  if ( !a6 )
    v23 = L"NULL";
  v48 = v23;
  if ( a7 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a7[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v52 = v33;
  v53 = 0;
  v54 = &a8;
  v55 = 2LL;
  if ( !a7 )
    v28 = "NULL";
  v56 = &a9;
  v51 = v28;
  v57 = 1LL;
  if ( a10 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a10[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v59 = v35;
  v60 = 0;
  if ( !a10 )
    v27 = "NULL";
  v58 = v27;
  if ( a11 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a11[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v62 = v37;
  v63 = 0;
  if ( !a11 )
    v26 = "NULL";
  v61 = v26;
  if ( a12 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a12[v38] );
    v39 = (unsigned int)(v38 + 1);
  }
  else
  {
    v39 = 5LL;
  }
  v65 = v39;
  v66 = 0;
  if ( !a12 )
    v25 = "NULL";
  v64 = v25;
  if ( a13 )
  {
    do
      ++v29;
    while ( a13[v29] );
    v40 = v29 + 1;
  }
  else
  {
    v40 = 5;
  }
  v68 = v40;
  v69 = 0;
  v70 = &a14;
  v71 = 4LL;
  v72 = &a15;
  if ( !a13 )
    v24 = "NULL";
  v67 = v24;
  v74 = &v42;
  v73 = 4LL;
  v76 = &a17;
  v75 = 8LL;
  v78 = &a18;
  v80 = a19;
  v81 = a18;
  v83 = &a20;
  v85 = &a21;
  v87 = &a22;
  v89 = a23;
  v90 = a22;
  v77 = 4LL;
  v79 = 4LL;
  v82 = 0;
  v84 = 1LL;
  v86 = 2LL;
  v88 = 4LL;
  v91 = 0;
  return McGenEventWrite_EtwWriteTransfer(v39, &EventNVMeControllerHealthLog, 0LL, 0x15u, &v43);
}
