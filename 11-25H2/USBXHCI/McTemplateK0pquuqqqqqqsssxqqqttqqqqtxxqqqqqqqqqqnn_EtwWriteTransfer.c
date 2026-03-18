/*
 * XREFs of McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x14003BF14
 * Callers:
 *     Etw_ControllerRundown @ 0x1400027B4 (Etw_ControllerRundown.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140006C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const char *a14,
        const char *a15,
        const char *a16,
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
        int a40,
        __int64 a41,
        int a42,
        __int64 a43)
{
  const char *v43; // r9
  const char *v44; // rdx
  const char *v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+50h] [rbp-B8h]
  char *v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h]
  char *v59; // [rsp+68h] [rbp-A0h]
  __int64 v60; // [rsp+70h] [rbp-98h]
  char *v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h]
  char *v63; // [rsp+88h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-78h]
  char *v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-68h]
  char *v67; // [rsp+A8h] [rbp-60h]
  __int64 v68; // [rsp+B0h] [rbp-58h]
  char *v69; // [rsp+B8h] [rbp-50h]
  __int64 v70; // [rsp+C0h] [rbp-48h]
  char *v71; // [rsp+C8h] [rbp-40h]
  __int64 v72; // [rsp+D0h] [rbp-38h]
  char *v73; // [rsp+D8h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-28h]
  const char *v75; // [rsp+E8h] [rbp-20h]
  int v76; // [rsp+F0h] [rbp-18h]
  int v77; // [rsp+F4h] [rbp-14h]
  const char *v78; // [rsp+F8h] [rbp-10h]
  int v79; // [rsp+100h] [rbp-8h]
  int v80; // [rsp+104h] [rbp-4h]
  const char *v81; // [rsp+108h] [rbp+0h]
  int v82; // [rsp+110h] [rbp+8h]
  int v83; // [rsp+114h] [rbp+Ch]
  char *v84; // [rsp+118h] [rbp+10h]
  __int64 v85; // [rsp+120h] [rbp+18h]
  char *v86; // [rsp+128h] [rbp+20h]
  __int64 v87; // [rsp+130h] [rbp+28h]
  char *v88; // [rsp+138h] [rbp+30h]
  __int64 v89; // [rsp+140h] [rbp+38h]
  char *v90; // [rsp+148h] [rbp+40h]
  __int64 v91; // [rsp+150h] [rbp+48h]
  char *v92; // [rsp+158h] [rbp+50h]
  __int64 v93; // [rsp+160h] [rbp+58h]
  char *v94; // [rsp+168h] [rbp+60h]
  __int64 v95; // [rsp+170h] [rbp+68h]
  char *v96; // [rsp+178h] [rbp+70h]
  __int64 v97; // [rsp+180h] [rbp+78h]
  char *v98; // [rsp+188h] [rbp+80h]
  __int64 v99; // [rsp+190h] [rbp+88h]
  char *v100; // [rsp+198h] [rbp+90h]
  __int64 v101; // [rsp+1A0h] [rbp+98h]
  char *v102; // [rsp+1A8h] [rbp+A0h]
  __int64 v103; // [rsp+1B0h] [rbp+A8h]
  char *v104; // [rsp+1B8h] [rbp+B0h]
  __int64 v105; // [rsp+1C0h] [rbp+B8h]
  char *v106; // [rsp+1C8h] [rbp+C0h]
  __int64 v107; // [rsp+1D0h] [rbp+C8h]
  char *v108; // [rsp+1D8h] [rbp+D0h]
  __int64 v109; // [rsp+1E0h] [rbp+D8h]
  char *v110; // [rsp+1E8h] [rbp+E0h]
  __int64 v111; // [rsp+1F0h] [rbp+E8h]
  char *v112; // [rsp+1F8h] [rbp+F0h]
  __int64 v113; // [rsp+200h] [rbp+F8h]
  char *v114; // [rsp+208h] [rbp+100h]
  __int64 v115; // [rsp+210h] [rbp+108h]
  char *v116; // [rsp+218h] [rbp+110h]
  __int64 v117; // [rsp+220h] [rbp+118h]
  char *v118; // [rsp+228h] [rbp+120h]
  __int64 v119; // [rsp+230h] [rbp+128h]
  char *v120; // [rsp+238h] [rbp+130h]
  __int64 v121; // [rsp+240h] [rbp+138h]
  char *v122; // [rsp+248h] [rbp+140h]
  __int64 v123; // [rsp+250h] [rbp+148h]
  char *v124; // [rsp+258h] [rbp+150h]
  __int64 v125; // [rsp+260h] [rbp+158h]
  char *v126; // [rsp+268h] [rbp+160h]
  __int64 v127; // [rsp+270h] [rbp+168h]
  char *v128; // [rsp+278h] [rbp+170h]
  __int64 v129; // [rsp+280h] [rbp+178h]
  __int64 v130; // [rsp+288h] [rbp+180h]
  __int64 v131; // [rsp+290h] [rbp+188h]
  __int64 v132; // [rsp+298h] [rbp+190h]
  __int64 v133; // [rsp+2A0h] [rbp+198h]
  __int64 v134; // [rsp+2E0h] [rbp+1D8h] BYREF

  v134 = a4;
  v43 = a16;
  v44 = a15;
  v46 = a14;
  v55 = &v134;
  v57 = &a5;
  v59 = &a6;
  v61 = &a7;
  v63 = &a8;
  v65 = &a9;
  v67 = &a10;
  v69 = &a11;
  v71 = &a12;
  v73 = &a13;
  v47 = -1LL;
  v56 = 8LL;
  v58 = 4LL;
  v60 = 1LL;
  v62 = 1LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  if ( a14 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a14[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v49 = 5;
  }
  v76 = v49;
  v77 = 0;
  if ( !a14 )
    v46 = "NULL";
  v75 = v46;
  if ( a15 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( a15[v50] );
    v51 = (unsigned int)(v50 + 1);
  }
  else
  {
    v51 = 5LL;
  }
  v79 = v51;
  v80 = 0;
  if ( !a15 )
    v44 = "NULL";
  v78 = v44;
  if ( a16 )
  {
    do
      ++v47;
    while ( a16[v47] );
    v52 = v47 + 1;
  }
  else
  {
    v52 = 5;
  }
  v82 = v52;
  v83 = 0;
  v84 = &a17;
  if ( !a16 )
    v43 = "NULL";
  v81 = v43;
  v86 = &a18;
  v88 = &a19;
  v90 = &a20;
  v92 = &a21;
  v94 = &a22;
  v96 = &a23;
  v98 = &a24;
  v100 = &a25;
  v102 = &a26;
  v104 = &a27;
  v106 = &a28;
  v108 = &a29;
  v110 = &a30;
  v112 = &a31;
  v114 = &a32;
  v116 = &a33;
  v118 = &a34;
  v120 = &a35;
  v122 = &a36;
  v124 = &a37;
  v126 = &a38;
  v128 = &a39;
  v130 = a41;
  v132 = a43;
  v85 = 8LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 8LL;
  v109 = 8LL;
  v111 = 4LL;
  v113 = 4LL;
  v115 = 4LL;
  v117 = 4LL;
  v119 = 4LL;
  v121 = 4LL;
  v123 = 4LL;
  v125 = 4LL;
  v127 = 4LL;
  v129 = 4LL;
  v131 = 96LL;
  v133 = 64LL;
  return McGenEventWrite_EtwWriteTransfer(v51, &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION_V6, a3, 0x27u, &v54);
}
