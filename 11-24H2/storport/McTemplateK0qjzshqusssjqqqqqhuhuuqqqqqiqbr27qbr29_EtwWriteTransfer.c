/*
 * XREFs of McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer @ 0x1400AB240
 * Callers:
 *     StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400B77DC (StorpTelemetryNvmeSendNamespaceErrorDataSummary.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqqqqqhuhuuqqqqqiqbr27qbr29_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12,
        const char *a13,
        __int64 a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        int a31,
        __int64 a32,
        int a33,
        __int64 a34)
{
  const wchar_t *v34; // rcx
  const char *v35; // r11
  const char *v36; // rdx
  const char *v37; // r8
  const char *v38; // r9
  __int64 v39; // rax
  __int64 v40; // r10
  unsigned int v41; // r10d
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+38h] [rbp-D0h] BYREF
  int *v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 v53; // [rsp+58h] [rbp-B0h]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  const wchar_t *v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  const char *v57; // [rsp+78h] [rbp-90h]
  int v58; // [rsp+80h] [rbp-88h]
  int v59; // [rsp+84h] [rbp-84h]
  char *v60; // [rsp+88h] [rbp-80h]
  __int64 v61; // [rsp+90h] [rbp-78h]
  char *v62; // [rsp+98h] [rbp-70h]
  __int64 v63; // [rsp+A0h] [rbp-68h]
  char *v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  const char *v66; // [rsp+B8h] [rbp-50h]
  int v67; // [rsp+C0h] [rbp-48h]
  int v68; // [rsp+C4h] [rbp-44h]
  const char *v69; // [rsp+C8h] [rbp-40h]
  int v70; // [rsp+D0h] [rbp-38h]
  int v71; // [rsp+D4h] [rbp-34h]
  const char *v72; // [rsp+D8h] [rbp-30h]
  int v73; // [rsp+E0h] [rbp-28h]
  int v74; // [rsp+E4h] [rbp-24h]
  __int64 v75; // [rsp+E8h] [rbp-20h]
  __int64 v76; // [rsp+F0h] [rbp-18h]
  char *v77; // [rsp+F8h] [rbp-10h]
  __int64 v78; // [rsp+100h] [rbp-8h]
  char *v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+110h] [rbp+8h]
  char *v81; // [rsp+118h] [rbp+10h]
  __int64 v82; // [rsp+120h] [rbp+18h]
  char *v83; // [rsp+128h] [rbp+20h]
  __int64 v84; // [rsp+130h] [rbp+28h]
  char *v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+140h] [rbp+38h]
  char *v87; // [rsp+148h] [rbp+40h]
  __int64 v88; // [rsp+150h] [rbp+48h]
  char *v89; // [rsp+158h] [rbp+50h]
  __int64 v90; // [rsp+160h] [rbp+58h]
  char *v91; // [rsp+168h] [rbp+60h]
  __int64 v92; // [rsp+170h] [rbp+68h]
  char *v93; // [rsp+178h] [rbp+70h]
  __int64 v94; // [rsp+180h] [rbp+78h]
  char *v95; // [rsp+188h] [rbp+80h]
  __int64 v96; // [rsp+190h] [rbp+88h]
  char *v97; // [rsp+198h] [rbp+90h]
  __int64 v98; // [rsp+1A0h] [rbp+98h]
  char *v99; // [rsp+1A8h] [rbp+A0h]
  __int64 v100; // [rsp+1B0h] [rbp+A8h]
  char *v101; // [rsp+1B8h] [rbp+B0h]
  __int64 v102; // [rsp+1C0h] [rbp+B8h]
  char *v103; // [rsp+1C8h] [rbp+C0h]
  __int64 v104; // [rsp+1D0h] [rbp+C8h]
  char *v105; // [rsp+1D8h] [rbp+D0h]
  __int64 v106; // [rsp+1E0h] [rbp+D8h]
  char *v107; // [rsp+1E8h] [rbp+E0h]
  __int64 v108; // [rsp+1F0h] [rbp+E8h]
  int *v109; // [rsp+1F8h] [rbp+F0h]
  __int64 v110; // [rsp+200h] [rbp+F8h]
  __int64 v111; // [rsp+208h] [rbp+100h]
  int v112; // [rsp+210h] [rbp+108h]
  int v113; // [rsp+214h] [rbp+10Ch]
  int *v114; // [rsp+218h] [rbp+110h]
  __int64 v115; // [rsp+220h] [rbp+118h]
  __int64 v116; // [rsp+228h] [rbp+120h]
  int v117; // [rsp+230h] [rbp+128h]
  int v118; // [rsp+234h] [rbp+12Ch]
  int v119; // [rsp+280h] [rbp+178h] BYREF

  v119 = a4;
  v34 = a6;
  v35 = a13;
  v36 = a12;
  v37 = a11;
  v38 = a7;
  v51 = &v119;
  v53 = a5;
  v39 = -1LL;
  v52 = 4LL;
  v54 = 16LL;
  if ( a6 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a6[v40] );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = 10;
  }
  v56 = v41;
  if ( !a6 )
    v34 = L"NULL";
  v55 = v34;
  if ( a7 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( a7[v42] );
    v43 = v42 + 1;
  }
  else
  {
    v43 = 5;
  }
  v58 = v43;
  v59 = 0;
  v60 = &a8;
  v61 = 2LL;
  if ( !a7 )
    v38 = "NULL";
  v62 = &a9;
  v57 = v38;
  v64 = &a10;
  v63 = 4LL;
  v65 = 1LL;
  if ( a11 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a11[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v45 = 5;
  }
  v67 = v45;
  v68 = 0;
  if ( !a11 )
    v37 = "NULL";
  v66 = v37;
  if ( a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( a12[v46] );
    v47 = (unsigned int)(v46 + 1);
  }
  else
  {
    v47 = 5LL;
  }
  v70 = v47;
  v71 = 0;
  if ( !a12 )
    v36 = "NULL";
  v69 = v36;
  if ( a13 )
  {
    do
      ++v39;
    while ( a13[v39] );
    v48 = v39 + 1;
  }
  else
  {
    v48 = 5;
  }
  v73 = v48;
  v75 = a14;
  v74 = 0;
  v77 = &a15;
  if ( !a13 )
    v35 = "NULL";
  v72 = v35;
  v79 = &a16;
  v76 = 16LL;
  v81 = &a17;
  v83 = &a18;
  v85 = &a19;
  v87 = &a20;
  v89 = &a21;
  v91 = &a22;
  v93 = &a23;
  v95 = &a24;
  v97 = &a25;
  v99 = &a26;
  v101 = &a27;
  v103 = &a28;
  v105 = &a29;
  v107 = &a30;
  v109 = &a31;
  v111 = a32;
  v112 = a31;
  v114 = &a33;
  v116 = a34;
  v117 = a33;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v88 = 2LL;
  v90 = 1LL;
  v92 = 2LL;
  v94 = 1LL;
  v96 = 1LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 4LL;
  v108 = 8LL;
  v110 = 4LL;
  v113 = 0;
  v115 = 4LL;
  v118 = 0;
  return McGenEventWrite_EtwWriteTransfer(v47, &EventNVMeNamespaceErrorDataSummary, 0LL, 0x20u, &v50);
}
