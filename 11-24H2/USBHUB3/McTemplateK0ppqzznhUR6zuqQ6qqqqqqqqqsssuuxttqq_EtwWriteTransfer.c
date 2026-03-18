/*
 * XREFs of McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B54
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x14007891C (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140001A30 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        int a9,
        __int64 a10,
        unsigned __int16 a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        char a35)
{
  const wchar_t *v35; // rax
  const char *v36; // rdi
  const char *v37; // r9
  const char *v39; // r10
  const wchar_t *v41; // rbx
  const wchar_t *v42; // r8
  int v43; // r11d
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // edx
  __int64 v47; // rax
  int v48; // eax
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  char *v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  char *v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  const wchar_t *v64; // [rsp+70h] [rbp-90h]
  int v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+8Ch] [rbp-74h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v72; // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B8h] [rbp-48h]
  int v76; // [rsp+BCh] [rbp-44h]
  const wchar_t *v77; // [rsp+C0h] [rbp-40h]
  int v78; // [rsp+C8h] [rbp-38h]
  int v79; // [rsp+CCh] [rbp-34h]
  char *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  char *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  char *v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  char *v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  char *v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  char *v92; // [rsp+130h] [rbp+30h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  char *v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+148h] [rbp+48h]
  char *v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  char *v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  char *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  char *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  const char *v104; // [rsp+190h] [rbp+90h]
  int v105; // [rsp+198h] [rbp+98h]
  int v106; // [rsp+19Ch] [rbp+9Ch]
  const char *v107; // [rsp+1A0h] [rbp+A0h]
  int v108; // [rsp+1A8h] [rbp+A8h]
  int v109; // [rsp+1ACh] [rbp+ACh]
  const char *v110; // [rsp+1B0h] [rbp+B0h]
  int v111; // [rsp+1B8h] [rbp+B8h]
  int v112; // [rsp+1BCh] [rbp+BCh]
  char *v113; // [rsp+1C0h] [rbp+C0h]
  __int64 v114; // [rsp+1C8h] [rbp+C8h]
  char *v115; // [rsp+1D0h] [rbp+D0h]
  __int64 v116; // [rsp+1D8h] [rbp+D8h]
  char *v117; // [rsp+1E0h] [rbp+E0h]
  __int64 v118; // [rsp+1E8h] [rbp+E8h]
  char *v119; // [rsp+1F0h] [rbp+F0h]
  __int64 v120; // [rsp+1F8h] [rbp+F8h]
  char *v121; // [rsp+200h] [rbp+100h]
  __int64 v122; // [rsp+208h] [rbp+108h]
  char *v123; // [rsp+210h] [rbp+110h]
  __int64 v124; // [rsp+218h] [rbp+118h]
  char *v125; // [rsp+220h] [rbp+120h]
  __int64 v126; // [rsp+228h] [rbp+128h]
  __int64 v127; // [rsp+298h] [rbp+198h] BYREF

  v127 = a4;
  v35 = a7;
  v36 = a28;
  v37 = a27;
  v39 = a26;
  v41 = a13;
  v42 = a8;
  v43 = 10;
  v58 = &v127;
  v60 = &a5;
  v62 = &a6;
  v44 = -1LL;
  v59 = 8LL;
  v61 = 8LL;
  v63 = 4LL;
  if ( a7 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( a7[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v46 = 10;
  }
  v65 = v46;
  v66 = 0;
  if ( !a7 )
    v35 = L"NULL";
  v64 = v35;
  if ( a8 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( a8[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v48 = 10;
  }
  v68 = v48;
  v70 = a10;
  if ( !a8 )
    v42 = L"NULL";
  v67 = v42;
  v72 = &a11;
  v74 = a12;
  v75 = a11;
  v69 = 0;
  v71 = 18LL;
  v73 = 2LL;
  v76 = 0;
  v49 = a13 == 0LL;
  if ( a13 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a13[v50] );
    v43 = 2 * v50 + 2;
    v49 = a13 == 0LL;
  }
  v78 = v43;
  v80 = &a14;
  v79 = 0;
  v82 = &a15;
  if ( v49 )
    v41 = L"NULL";
  v84 = a16;
  v86 = &a17;
  v88 = &a18;
  v90 = &a19;
  v92 = &a20;
  v94 = &a21;
  v96 = &a22;
  v98 = &a23;
  v100 = &a24;
  v102 = &a25;
  v77 = v41;
  v81 = 1LL;
  v83 = 4LL;
  v85 = 24LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  if ( a26 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( a26[v51] );
    v52 = v51 + 1;
  }
  else
  {
    v52 = 5;
  }
  v105 = v52;
  v106 = 0;
  if ( !a26 )
    v39 = "NULL";
  v104 = v39;
  if ( a27 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( a27[v53] );
    v54 = v53 + 1;
  }
  else
  {
    v54 = 5;
  }
  v108 = v54;
  v109 = 0;
  if ( !a27 )
    v37 = "NULL";
  v107 = v37;
  if ( a28 )
  {
    do
      ++v44;
    while ( a28[v44] );
    v55 = (unsigned int)(v44 + 1);
  }
  else
  {
    v55 = 5LL;
  }
  v114 = 1LL;
  v113 = &a29;
  v116 = 1LL;
  v115 = &a30;
  if ( !a28 )
    v36 = "NULL";
  v110 = v36;
  v117 = &a31;
  v111 = v55;
  v119 = &a32;
  v112 = 0;
  v121 = &a33;
  v118 = 8LL;
  v123 = &a34;
  v125 = &a35;
  v120 = 4LL;
  v122 = 4LL;
  v124 = 4LL;
  v126 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v55, a2, a3, 0x20u, &v57);
}
