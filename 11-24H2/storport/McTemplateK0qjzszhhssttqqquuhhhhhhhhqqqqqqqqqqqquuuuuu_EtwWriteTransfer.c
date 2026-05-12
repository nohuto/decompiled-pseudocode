/*
 * XREFs of McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer @ 0x140057B70
 * Callers:
 *     StorLogMFNDCapability @ 0x140066C1C (StorLogMFNDCapability.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer(
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
        char a31,
        char a32,
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40,
        char a41,
        char a42,
        char a43,
        char a44,
        char a45)
{
  const wchar_t *v45; // rcx
  const char *v46; // rbx
  const char *v47; // r8
  const wchar_t *v48; // r9
  const char *v49; // rdx
  int v50; // r11d
  __int64 v51; // rax
  __int64 v52; // r10
  unsigned int v53; // r10d
  __int64 v54; // rcx
  int v55; // ecx
  bool v56; // zf
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+38h] [rbp-D0h] BYREF
  int *v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  const wchar_t *v67; // [rsp+68h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-98h]
  const char *v69; // [rsp+78h] [rbp-90h]
  int v70; // [rsp+80h] [rbp-88h]
  int v71; // [rsp+84h] [rbp-84h]
  const wchar_t *v72; // [rsp+88h] [rbp-80h]
  int v73; // [rsp+90h] [rbp-78h]
  int v74; // [rsp+94h] [rbp-74h]
  char *v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h]
  char *v77; // [rsp+A8h] [rbp-60h]
  __int64 v78; // [rsp+B0h] [rbp-58h]
  const char *v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C0h] [rbp-48h]
  int v81; // [rsp+C4h] [rbp-44h]
  const char *v82; // [rsp+C8h] [rbp-40h]
  int v83; // [rsp+D0h] [rbp-38h]
  int v84; // [rsp+D4h] [rbp-34h]
  char *v85; // [rsp+D8h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-28h]
  char *v87; // [rsp+E8h] [rbp-20h]
  __int64 v88; // [rsp+F0h] [rbp-18h]
  char *v89; // [rsp+F8h] [rbp-10h]
  __int64 v90; // [rsp+100h] [rbp-8h]
  char *v91; // [rsp+108h] [rbp+0h]
  __int64 v92; // [rsp+110h] [rbp+8h]
  char *v93; // [rsp+118h] [rbp+10h]
  __int64 v94; // [rsp+120h] [rbp+18h]
  char *v95; // [rsp+128h] [rbp+20h]
  __int64 v96; // [rsp+130h] [rbp+28h]
  char *v97; // [rsp+138h] [rbp+30h]
  __int64 v98; // [rsp+140h] [rbp+38h]
  char *v99; // [rsp+148h] [rbp+40h]
  __int64 v100; // [rsp+150h] [rbp+48h]
  char *v101; // [rsp+158h] [rbp+50h]
  __int64 v102; // [rsp+160h] [rbp+58h]
  char *v103; // [rsp+168h] [rbp+60h]
  __int64 v104; // [rsp+170h] [rbp+68h]
  char *v105; // [rsp+178h] [rbp+70h]
  __int64 v106; // [rsp+180h] [rbp+78h]
  char *v107; // [rsp+188h] [rbp+80h]
  __int64 v108; // [rsp+190h] [rbp+88h]
  char *v109; // [rsp+198h] [rbp+90h]
  __int64 v110; // [rsp+1A0h] [rbp+98h]
  char *v111; // [rsp+1A8h] [rbp+A0h]
  __int64 v112; // [rsp+1B0h] [rbp+A8h]
  char *v113; // [rsp+1B8h] [rbp+B0h]
  __int64 v114; // [rsp+1C0h] [rbp+B8h]
  char *v115; // [rsp+1C8h] [rbp+C0h]
  __int64 v116; // [rsp+1D0h] [rbp+C8h]
  char *v117; // [rsp+1D8h] [rbp+D0h]
  __int64 v118; // [rsp+1E0h] [rbp+D8h]
  char *v119; // [rsp+1E8h] [rbp+E0h]
  __int64 v120; // [rsp+1F0h] [rbp+E8h]
  char *v121; // [rsp+1F8h] [rbp+F0h]
  __int64 v122; // [rsp+200h] [rbp+F8h]
  char *v123; // [rsp+208h] [rbp+100h]
  __int64 v124; // [rsp+210h] [rbp+108h]
  char *v125; // [rsp+218h] [rbp+110h]
  __int64 v126; // [rsp+220h] [rbp+118h]
  char *v127; // [rsp+228h] [rbp+120h]
  __int64 v128; // [rsp+230h] [rbp+128h]
  char *v129; // [rsp+238h] [rbp+130h]
  __int64 v130; // [rsp+240h] [rbp+138h]
  char *v131; // [rsp+248h] [rbp+140h]
  __int64 v132; // [rsp+250h] [rbp+148h]
  char *v133; // [rsp+258h] [rbp+150h]
  __int64 v134; // [rsp+260h] [rbp+158h]
  char *v135; // [rsp+268h] [rbp+160h]
  __int64 v136; // [rsp+270h] [rbp+168h]
  char *v137; // [rsp+278h] [rbp+170h]
  __int64 v138; // [rsp+280h] [rbp+178h]
  char *v139; // [rsp+288h] [rbp+180h]
  __int64 v140; // [rsp+290h] [rbp+188h]
  char *v141; // [rsp+298h] [rbp+190h]
  __int64 v142; // [rsp+2A0h] [rbp+198h]
  char *v143; // [rsp+2A8h] [rbp+1A0h]
  __int64 v144; // [rsp+2B0h] [rbp+1A8h]
  char *v145; // [rsp+2B8h] [rbp+1B0h]
  __int64 v146; // [rsp+2C0h] [rbp+1B8h]
  char *v147; // [rsp+2C8h] [rbp+1C0h]
  __int64 v148; // [rsp+2D0h] [rbp+1C8h]
  char *v149; // [rsp+2D8h] [rbp+1D0h]
  __int64 v150; // [rsp+2E0h] [rbp+1D8h]
  int v151; // [rsp+330h] [rbp+228h] BYREF

  v151 = a4;
  v45 = a6;
  v46 = a12;
  v47 = a11;
  v48 = a8;
  v49 = a7;
  v63 = &v151;
  v50 = 10;
  v65 = a5;
  v51 = -1LL;
  v64 = 4LL;
  v66 = 16LL;
  if ( a6 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( a6[v52] );
    v53 = 2 * v52 + 2;
  }
  else
  {
    v53 = 10;
  }
  v68 = v53;
  if ( !a6 )
    v45 = L"NULL";
  v67 = v45;
  if ( a7 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( a7[v54] );
    v55 = v54 + 1;
  }
  else
  {
    v55 = 5;
  }
  v70 = v55;
  v71 = 0;
  if ( !a7 )
    v49 = "NULL";
  v69 = v49;
  v56 = a8 == 0LL;
  if ( a8 )
  {
    v57 = -1LL;
    do
      ++v57;
    while ( a8[v57] );
    v50 = 2 * v57 + 2;
    v56 = a8 == 0LL;
  }
  v73 = v50;
  if ( v56 )
    v48 = L"NULL";
  v75 = &a9;
  v72 = v48;
  v77 = &a10;
  v74 = 0;
  v76 = 2LL;
  v78 = 2LL;
  if ( a11 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( a11[v58] );
    v59 = (unsigned int)(v58 + 1);
  }
  else
  {
    v59 = 5LL;
  }
  v80 = v59;
  v81 = 0;
  if ( !a11 )
    v47 = "NULL";
  v79 = v47;
  if ( a12 )
  {
    do
      ++v51;
    while ( a12[v51] );
    v60 = v51 + 1;
  }
  else
  {
    v60 = 5;
  }
  v83 = v60;
  v84 = 0;
  v85 = &a13;
  if ( !a12 )
    v46 = "NULL";
  v82 = v46;
  v87 = &a14;
  v89 = &a15;
  v91 = &a16;
  v93 = &a17;
  v95 = &a18;
  v97 = &a19;
  v99 = &a20;
  v101 = &a21;
  v103 = &a22;
  v105 = &a23;
  v107 = &a24;
  v109 = &a25;
  v111 = &a26;
  v113 = &a27;
  v115 = &a28;
  v117 = &a29;
  v119 = &a30;
  v121 = &a31;
  v123 = &a32;
  v125 = &a33;
  v127 = &a34;
  v129 = &a35;
  v131 = &a36;
  v133 = &a37;
  v86 = 4LL;
  v88 = 4LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 1LL;
  v98 = 1LL;
  v100 = 2LL;
  v102 = 2LL;
  v104 = 2LL;
  v106 = 2LL;
  v108 = 2LL;
  v110 = 2LL;
  v112 = 2LL;
  v114 = 2LL;
  v116 = 4LL;
  v118 = 4LL;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v134 = 4LL;
  v135 = &a38;
  v136 = 4LL;
  v137 = &a39;
  v138 = 4LL;
  v139 = &a40;
  v140 = 1LL;
  v141 = &a41;
  v143 = &a42;
  v145 = &a43;
  v147 = &a44;
  v149 = &a45;
  v142 = 1LL;
  v144 = 1LL;
  v146 = 1LL;
  v148 = 1LL;
  v150 = 1LL;
  return McGenEventWrite_EtwWriteTransfer(v59, &EventGetMFNDCapability, 0LL, 0x2Bu, &v62);
}
