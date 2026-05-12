/*
 * XREFs of McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1400AB898
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140024158 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshqusssjqxuxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
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
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        const wchar_t *a23,
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
        char a45,
        char a46,
        char a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+6A0h] [rbp+598h] BYREF
  const wchar_t *v64; // rdx
  __int64 v65; // rcx
  const wchar_t *v66; // rbx
  const char *v67; // r11
  const char *v68; // r10
  int v69; // edi
  const char *v70; // r8
  const char *v71; // r9
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rax
  int v81; // eax
  bool v82; // zf
  __int64 v84; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+48h] [rbp-C0h] BYREF
  int *v86; // [rsp+58h] [rbp-B0h]
  __int64 v87; // [rsp+60h] [rbp-A8h]
  __int64 v88; // [rsp+68h] [rbp-A0h]
  __int64 v89; // [rsp+70h] [rbp-98h]
  const wchar_t *v90; // [rsp+78h] [rbp-90h]
  int v91; // [rsp+80h] [rbp-88h]
  int v92; // [rsp+84h] [rbp-84h]
  const char *v93; // [rsp+88h] [rbp-80h]
  int v94; // [rsp+90h] [rbp-78h]
  int v95; // [rsp+94h] [rbp-74h]
  char *v96; // [rsp+98h] [rbp-70h]
  __int64 v97; // [rsp+A0h] [rbp-68h]
  char *v98; // [rsp+A8h] [rbp-60h]
  __int64 v99; // [rsp+B0h] [rbp-58h]
  char *v100; // [rsp+B8h] [rbp-50h]
  __int64 v101; // [rsp+C0h] [rbp-48h]
  const char *v102; // [rsp+C8h] [rbp-40h]
  int v103; // [rsp+D0h] [rbp-38h]
  int v104; // [rsp+D4h] [rbp-34h]
  const char *v105; // [rsp+D8h] [rbp-30h]
  int v106; // [rsp+E0h] [rbp-28h]
  int v107; // [rsp+E4h] [rbp-24h]
  const char *v108; // [rsp+E8h] [rbp-20h]
  int v109; // [rsp+F0h] [rbp-18h]
  int v110; // [rsp+F4h] [rbp-14h]
  __int64 v111; // [rsp+F8h] [rbp-10h]
  __int64 v112; // [rsp+100h] [rbp-8h]
  char *v113; // [rsp+108h] [rbp+0h]
  __int64 v114; // [rsp+110h] [rbp+8h]
  __int64 *v115; // [rsp+118h] [rbp+10h]
  __int64 v116; // [rsp+120h] [rbp+18h]
  char *v117; // [rsp+128h] [rbp+20h]
  __int64 v118; // [rsp+130h] [rbp+28h]
  char *v119; // [rsp+138h] [rbp+30h]
  __int64 v120; // [rsp+140h] [rbp+38h]
  char *v121; // [rsp+148h] [rbp+40h]
  __int64 v122; // [rsp+150h] [rbp+48h]
  char *v123; // [rsp+158h] [rbp+50h]
  __int64 v124; // [rsp+160h] [rbp+58h]
  char *v125; // [rsp+168h] [rbp+60h]
  __int64 v126; // [rsp+170h] [rbp+68h]
  char *v127; // [rsp+178h] [rbp+70h]
  __int64 v128; // [rsp+180h] [rbp+78h]
  const wchar_t *v129; // [rsp+188h] [rbp+80h]
  int v130; // [rsp+190h] [rbp+88h]
  int v131; // [rsp+194h] [rbp+8Ch]
  char *v132; // [rsp+198h] [rbp+90h]
  __int64 v133; // [rsp+1A0h] [rbp+98h]
  char *v134; // [rsp+1A8h] [rbp+A0h]
  __int64 v135; // [rsp+1B0h] [rbp+A8h]
  char *v136; // [rsp+1B8h] [rbp+B0h]
  __int64 v137; // [rsp+1C0h] [rbp+B8h]
  char *v138; // [rsp+1C8h] [rbp+C0h]
  __int64 v139; // [rsp+1D0h] [rbp+C8h]
  char *v140; // [rsp+1D8h] [rbp+D0h]
  __int64 v141; // [rsp+1E0h] [rbp+D8h]
  char *v142; // [rsp+1E8h] [rbp+E0h]
  __int64 v143; // [rsp+1F0h] [rbp+E8h]
  char *v144; // [rsp+1F8h] [rbp+F0h]
  __int64 v145; // [rsp+200h] [rbp+F8h]
  char *v146; // [rsp+208h] [rbp+100h]
  __int64 v147; // [rsp+210h] [rbp+108h]
  char *v148; // [rsp+218h] [rbp+110h]
  __int64 v149; // [rsp+220h] [rbp+118h]
  char *v150; // [rsp+228h] [rbp+120h]
  __int64 v151; // [rsp+230h] [rbp+128h]
  char *v152; // [rsp+238h] [rbp+130h]
  __int64 v153; // [rsp+240h] [rbp+138h]
  char *v154; // [rsp+248h] [rbp+140h]
  __int64 v155; // [rsp+250h] [rbp+148h]
  char *v156; // [rsp+258h] [rbp+150h]
  __int64 v157; // [rsp+260h] [rbp+158h]
  char *v158; // [rsp+268h] [rbp+160h]
  __int64 v159; // [rsp+270h] [rbp+168h]
  char *v160; // [rsp+278h] [rbp+170h]
  __int64 v161; // [rsp+280h] [rbp+178h]
  char *v162; // [rsp+288h] [rbp+180h]
  __int64 v163; // [rsp+290h] [rbp+188h]
  char *v164; // [rsp+298h] [rbp+190h]
  __int64 v165; // [rsp+2A0h] [rbp+198h]
  char *v166; // [rsp+2A8h] [rbp+1A0h]
  __int64 v167; // [rsp+2B0h] [rbp+1A8h]
  char *v168; // [rsp+2B8h] [rbp+1B0h]
  __int64 v169; // [rsp+2C0h] [rbp+1B8h]
  char *v170; // [rsp+2C8h] [rbp+1C0h]
  __int64 v171; // [rsp+2D0h] [rbp+1C8h]
  char *v172; // [rsp+2D8h] [rbp+1D0h]
  __int64 v173; // [rsp+2E0h] [rbp+1D8h]
  char *v174; // [rsp+2E8h] [rbp+1E0h]
  __int64 v175; // [rsp+2F0h] [rbp+1E8h]
  char *v176; // [rsp+2F8h] [rbp+1F0h]
  __int64 v177; // [rsp+300h] [rbp+1F8h]
  char *v178; // [rsp+308h] [rbp+200h]
  __int64 v179; // [rsp+310h] [rbp+208h]
  char *v180; // [rsp+318h] [rbp+210h]
  __int64 v181; // [rsp+320h] [rbp+218h]
  char *v182; // [rsp+328h] [rbp+220h]
  __int64 v183; // [rsp+330h] [rbp+228h]
  char *v184; // [rsp+338h] [rbp+230h]
  __int64 v185; // [rsp+340h] [rbp+238h]
  char *v186; // [rsp+348h] [rbp+240h]
  __int64 v187; // [rsp+350h] [rbp+248h]
  char *v188; // [rsp+358h] [rbp+250h]
  __int64 v189; // [rsp+360h] [rbp+258h]
  char *v190; // [rsp+368h] [rbp+260h]
  __int64 v191; // [rsp+370h] [rbp+268h]
  char *v192; // [rsp+378h] [rbp+270h]
  __int64 v193; // [rsp+380h] [rbp+278h]
  char *v194; // [rsp+388h] [rbp+280h]
  __int64 v195; // [rsp+390h] [rbp+288h]
  char *v196; // [rsp+398h] [rbp+290h]
  __int64 v197; // [rsp+3A0h] [rbp+298h]
  char *v198; // [rsp+3A8h] [rbp+2A0h]
  __int64 v199; // [rsp+3B0h] [rbp+2A8h]
  char *v200; // [rsp+3B8h] [rbp+2B0h]
  __int64 v201; // [rsp+3C0h] [rbp+2B8h]
  char *v202; // [rsp+3C8h] [rbp+2C0h]
  __int64 v203; // [rsp+3D0h] [rbp+2C8h]
  char *v204; // [rsp+3D8h] [rbp+2D0h]
  __int64 v205; // [rsp+3E0h] [rbp+2D8h]
  char *v206; // [rsp+3E8h] [rbp+2E0h]
  __int64 v207; // [rsp+3F0h] [rbp+2E8h]
  char *v208; // [rsp+3F8h] [rbp+2F0h]
  __int64 v209; // [rsp+400h] [rbp+2F8h]
  char *v210; // [rsp+408h] [rbp+300h]
  __int64 v211; // [rsp+410h] [rbp+308h]
  char *v212; // [rsp+418h] [rbp+310h]
  __int64 v213; // [rsp+420h] [rbp+318h]
  unsigned __int64 *v214; // [rsp+428h] [rbp+320h]
  __int64 v215; // [rsp+430h] [rbp+328h]
  unsigned __int64 *v216; // [rsp+438h] [rbp+330h]
  __int64 v217; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v218; // [rsp+448h] [rbp+340h]
  __int64 v219; // [rsp+450h] [rbp+348h]
  unsigned __int64 *v220; // [rsp+458h] [rbp+350h]
  __int64 v221; // [rsp+460h] [rbp+358h]
  int v222; // [rsp+4C0h] [rbp+3B8h] BYREF

  v222 = a4;
  v64 = a6;
  v65 = -1LL;
  v66 = a23;
  v67 = a13;
  v68 = a12;
  v69 = 10;
  v70 = a11;
  v71 = a7;
  v84 = *(_QWORD *)&g_SystemUptime_s;
  v86 = &v222;
  v88 = a5;
  v87 = 4LL;
  v89 = 16LL;
  if ( a6 )
  {
    v72 = -1LL;
    do
      ++v72;
    while ( a6[v72] );
    v73 = 2 * v72 + 2;
  }
  else
  {
    v73 = 10;
  }
  v91 = v73;
  v92 = 0;
  if ( !a6 )
    v64 = L"NULL";
  v90 = v64;
  if ( a7 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( a7[v74] );
    v75 = v74 + 1;
  }
  else
  {
    v75 = 5;
  }
  v94 = v75;
  v95 = 0;
  v96 = &a8;
  v97 = 2LL;
  if ( !a7 )
    v71 = "NULL";
  v98 = &a9;
  v93 = v71;
  v100 = &a10;
  v99 = 4LL;
  v101 = 1LL;
  if ( a11 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( a11[v76] );
    v77 = v76 + 1;
  }
  else
  {
    v77 = 5;
  }
  v103 = v77;
  v104 = 0;
  if ( !a11 )
    v70 = "NULL";
  v102 = v70;
  if ( a12 )
  {
    v78 = -1LL;
    do
      ++v78;
    while ( a12[v78] );
    v79 = v78 + 1;
  }
  else
  {
    v79 = 5;
  }
  v106 = v79;
  v107 = 0;
  if ( !a12 )
    v68 = "NULL";
  v105 = v68;
  if ( a13 )
  {
    v80 = -1LL;
    do
      ++v80;
    while ( a13[v80] );
    v81 = v80 + 1;
  }
  else
  {
    v81 = 5;
  }
  v109 = v81;
  v111 = a14;
  if ( !a13 )
    v67 = "NULL";
  v108 = v67;
  v113 = &a15;
  v115 = &v84;
  v117 = &a17;
  v119 = &a18;
  v121 = &a19;
  v123 = &a20;
  v125 = &a21;
  v127 = &a22;
  v110 = 0;
  v112 = 16LL;
  v114 = 4LL;
  v116 = 8LL;
  v118 = 1LL;
  v120 = 8LL;
  v122 = 8LL;
  v124 = 4LL;
  v126 = 4LL;
  v128 = 4LL;
  v82 = a23 == 0LL;
  if ( a23 )
  {
    do
      ++v65;
    while ( a23[v65] );
    v69 = 2 * v65 + 2;
    v82 = a23 == 0LL;
  }
  v130 = v69;
  if ( v82 )
    v66 = L"NULL";
  v131 = 0;
  v129 = v66;
  v132 = &a24;
  v134 = &a25;
  v136 = &a26;
  v138 = &a27;
  v140 = &a28;
  v142 = &a29;
  v144 = &a30;
  v146 = &a31;
  v148 = &a32;
  v150 = &a33;
  v152 = &a34;
  v154 = &a35;
  v156 = &a36;
  v158 = &a37;
  v160 = &a38;
  v162 = &a39;
  v164 = &a40;
  v166 = &a41;
  v168 = &a42;
  v170 = &a43;
  v172 = &a44;
  v174 = &a45;
  v176 = &a46;
  v178 = &a47;
  v180 = &a48;
  v133 = 8LL;
  v135 = 8LL;
  v137 = 8LL;
  v139 = 8LL;
  v141 = 8LL;
  v143 = 8LL;
  v145 = 8LL;
  v147 = 8LL;
  v149 = 8LL;
  v151 = 8LL;
  v153 = 8LL;
  v155 = 8LL;
  v157 = 8LL;
  v159 = 8LL;
  v161 = 8LL;
  v163 = 8LL;
  v165 = 8LL;
  v167 = 8LL;
  v169 = 8LL;
  v171 = 8LL;
  v173 = 8LL;
  v175 = 8LL;
  v177 = 8LL;
  v179 = 8LL;
  v181 = 8LL;
  v182 = &a49;
  v183 = 8LL;
  v184 = &a50;
  v185 = 8LL;
  v186 = &a51;
  v187 = 8LL;
  v188 = &a52;
  v190 = &a53;
  v192 = &a54;
  v194 = &a55;
  v196 = &a56;
  v198 = &a57;
  v200 = &a58;
  v202 = &a59;
  v204 = &a60;
  v206 = &a61;
  v208 = &a62;
  v210 = &a63;
  v212 = &a64;
  v214 = &STACK[0x6A8];
  v216 = &STACK[0x6B0];
  v218 = &STACK[0x6B8];
  v220 = &STACK[0x6C0];
  v189 = 8LL;
  v191 = 8LL;
  v193 = 8LL;
  v195 = 8LL;
  v197 = 8LL;
  v199 = 8LL;
  v201 = 8LL;
  v203 = 8LL;
  v205 = 8LL;
  v207 = 8LL;
  v209 = 8LL;
  v211 = 8LL;
  v213 = 8LL;
  v215 = 8LL;
  v217 = 8LL;
  v219 = 8LL;
  v221 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v65, &EventNVMeNamespaceIoPerformance, 0LL, 0x42u, &v85);
}
