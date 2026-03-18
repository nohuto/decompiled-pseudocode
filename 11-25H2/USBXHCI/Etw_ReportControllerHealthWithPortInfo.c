/*
 * XREFs of Etw_ReportControllerHealthWithPortInfo @ 0x14004F318
 * Callers:
 *     Controller_CheckHealth @ 0x14000957C (Controller_CheckHealth.c)
 *     RootHub_DetectPortInInactiveState @ 0x14000A42C (RootHub_DetectPortInInactiveState.c)
 *     RootHub_DetectPortInComplianceMode @ 0x14000A540 (RootHub_DetectPortInComplianceMode.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14000103C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001068 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

char __fastcall Etw_ReportControllerHealthWithPortInfo(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  _DWORD *v4; // rax
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 v15; // si
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // r10d
  int v21; // r11d
  __int64 v22; // r9
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  char v25; // [rsp+39h] [rbp-CFh] BYREF
  char v26; // [rsp+3Ah] [rbp-CEh] BYREF
  char v27; // [rsp+3Bh] [rbp-CDh] BYREF
  char v28; // [rsp+3Ch] [rbp-CCh] BYREF
  char v29; // [rsp+3Dh] [rbp-CBh] BYREF
  char v30; // [rsp+3Eh] [rbp-CAh] BYREF
  unsigned __int8 v31; // [rsp+3Fh] [rbp-C9h]
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v36; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v37; // [rsp+54h] [rbp-B4h] BYREF
  int v38; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ACh] BYREF
  int v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+64h] [rbp-A4h] BYREF
  int v42; // [rsp+68h] [rbp-A0h] BYREF
  int v43; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v44; // [rsp+70h] [rbp-98h] BYREF
  int v45; // [rsp+74h] [rbp-94h] BYREF
  int v46; // [rsp+78h] [rbp-90h] BYREF
  int v47; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v48; // [rsp+80h] [rbp-88h] BYREF
  int v49; // [rsp+84h] [rbp-84h] BYREF
  int v50; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v52; // [rsp+90h] [rbp-78h] BYREF
  int v53; // [rsp+94h] [rbp-74h] BYREF
  int v54; // [rsp+98h] [rbp-70h] BYREF
  int v55; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v56; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+A4h] [rbp-64h] BYREF
  int v58; // [rsp+A8h] [rbp-60h] BYREF
  int v59; // [rsp+ACh] [rbp-5Ch] BYREF
  int v60; // [rsp+B0h] [rbp-58h] BYREF
  int v61; // [rsp+B4h] [rbp-54h] BYREF
  int v62; // [rsp+B8h] [rbp-50h] BYREF
  int v63; // [rsp+BCh] [rbp-4Ch] BYREF
  int v64; // [rsp+C0h] [rbp-48h] BYREF
  int v65; // [rsp+C4h] [rbp-44h] BYREF
  int v66; // [rsp+C8h] [rbp-40h] BYREF
  int v67; // [rsp+CCh] [rbp-3Ch] BYREF
  int v68; // [rsp+D0h] [rbp-38h] BYREF
  int v69; // [rsp+D4h] [rbp-34h] BYREF
  int v70; // [rsp+D8h] [rbp-30h] BYREF
  int v71; // [rsp+DCh] [rbp-2Ch] BYREF
  int v72; // [rsp+E0h] [rbp-28h] BYREF
  int v73; // [rsp+E4h] [rbp-24h] BYREF
  int v74; // [rsp+E8h] [rbp-20h] BYREF
  int v75; // [rsp+ECh] [rbp-1Ch] BYREF
  int v76; // [rsp+F0h] [rbp-18h] BYREF
  int v77; // [rsp+F4h] [rbp-14h] BYREF
  int v78; // [rsp+F8h] [rbp-10h] BYREF
  int v79; // [rsp+FCh] [rbp-Ch] BYREF
  int v80; // [rsp+100h] [rbp-8h] BYREF
  int v81; // [rsp+104h] [rbp-4h] BYREF
  __int64 v82; // [rsp+108h] [rbp+0h] BYREF
  __int64 v83; // [rsp+110h] [rbp+8h] BYREF
  __int64 v84; // [rsp+118h] [rbp+10h] BYREF
  __int64 v85; // [rsp+120h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v87; // [rsp+148h] [rbp+40h]
  int v88; // [rsp+150h] [rbp+48h]
  int v89; // [rsp+154h] [rbp+4Ch]
  int *v90; // [rsp+158h] [rbp+50h]
  int v91; // [rsp+160h] [rbp+58h]
  int v92; // [rsp+164h] [rbp+5Ch]
  char *v93; // [rsp+168h] [rbp+60h]
  int v94; // [rsp+170h] [rbp+68h]
  int v95; // [rsp+174h] [rbp+6Ch]
  char *v96; // [rsp+178h] [rbp+70h]
  int v97; // [rsp+180h] [rbp+78h]
  int v98; // [rsp+184h] [rbp+7Ch]
  int *v99; // [rsp+188h] [rbp+80h]
  int v100; // [rsp+190h] [rbp+88h]
  int v101; // [rsp+194h] [rbp+8Ch]
  __int16 *v102; // [rsp+198h] [rbp+90h]
  int v103; // [rsp+1A0h] [rbp+98h]
  int v104; // [rsp+1A4h] [rbp+9Ch]
  __int16 *v105; // [rsp+1A8h] [rbp+A0h]
  int v106; // [rsp+1B0h] [rbp+A8h]
  int v107; // [rsp+1B4h] [rbp+ACh]
  int *v108; // [rsp+1B8h] [rbp+B0h]
  int v109; // [rsp+1C0h] [rbp+B8h]
  int v110; // [rsp+1C4h] [rbp+BCh]
  int *v111; // [rsp+1C8h] [rbp+C0h]
  int v112; // [rsp+1D0h] [rbp+C8h]
  int v113; // [rsp+1D4h] [rbp+CCh]
  char *v114; // [rsp+1D8h] [rbp+D0h]
  int v115; // [rsp+1E0h] [rbp+D8h]
  int v116; // [rsp+1E4h] [rbp+DCh]
  char v117[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v118[16]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v119[16]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v120; // [rsp+218h] [rbp+110h]
  __int64 v121; // [rsp+220h] [rbp+118h]
  int *v122; // [rsp+228h] [rbp+120h]
  __int64 v123; // [rsp+230h] [rbp+128h]
  int *v124; // [rsp+238h] [rbp+130h]
  __int64 v125; // [rsp+240h] [rbp+138h]
  int *v126; // [rsp+248h] [rbp+140h]
  __int64 v127; // [rsp+250h] [rbp+148h]
  char *v128; // [rsp+258h] [rbp+150h]
  int v129; // [rsp+260h] [rbp+158h]
  int v130; // [rsp+264h] [rbp+15Ch]
  char *v131; // [rsp+268h] [rbp+160h]
  int v132; // [rsp+270h] [rbp+168h]
  int v133; // [rsp+274h] [rbp+16Ch]
  int *v134; // [rsp+278h] [rbp+170h]
  int v135; // [rsp+280h] [rbp+178h]
  int v136; // [rsp+284h] [rbp+17Ch]
  int *v137; // [rsp+288h] [rbp+180h]
  int v138; // [rsp+290h] [rbp+188h]
  int v139; // [rsp+294h] [rbp+18Ch]
  int *v140; // [rsp+298h] [rbp+190h]
  int v141; // [rsp+2A0h] [rbp+198h]
  int v142; // [rsp+2A4h] [rbp+19Ch]
  char *v143; // [rsp+2A8h] [rbp+1A0h]
  int v144; // [rsp+2B0h] [rbp+1A8h]
  int v145; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v146; // [rsp+2B8h] [rbp+1B0h]
  int v147; // [rsp+2C0h] [rbp+1B8h]
  int v148; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v149; // [rsp+2C8h] [rbp+1C0h]
  int v150; // [rsp+2D0h] [rbp+1C8h]
  int v151; // [rsp+2D4h] [rbp+1CCh]
  int *v152; // [rsp+2D8h] [rbp+1D0h]
  __int64 v153; // [rsp+2E0h] [rbp+1D8h]
  int *v154; // [rsp+2E8h] [rbp+1E0h]
  __int64 v155; // [rsp+2F0h] [rbp+1E8h]
  int *v156; // [rsp+2F8h] [rbp+1F0h]
  __int64 v157; // [rsp+300h] [rbp+1F8h]
  int *v158; // [rsp+308h] [rbp+200h]
  __int64 v159; // [rsp+310h] [rbp+208h]
  int *v160; // [rsp+318h] [rbp+210h]
  __int64 v161; // [rsp+320h] [rbp+218h]
  int *v162; // [rsp+328h] [rbp+220h]
  __int64 v163; // [rsp+330h] [rbp+228h]
  int *v164; // [rsp+338h] [rbp+230h]
  __int64 v165; // [rsp+340h] [rbp+238h]
  int *v166; // [rsp+348h] [rbp+240h]
  __int64 v167; // [rsp+350h] [rbp+248h]
  int *v168; // [rsp+358h] [rbp+250h]
  __int64 v169; // [rsp+360h] [rbp+258h]
  char *v170; // [rsp+368h] [rbp+260h]
  __int64 v171; // [rsp+370h] [rbp+268h]
  int *v172; // [rsp+378h] [rbp+270h]
  __int64 v173; // [rsp+380h] [rbp+278h]
  int *v174; // [rsp+388h] [rbp+280h]
  __int64 v175; // [rsp+390h] [rbp+288h]
  int *v176; // [rsp+398h] [rbp+290h]
  __int64 v177; // [rsp+3A0h] [rbp+298h]
  int *v178; // [rsp+3A8h] [rbp+2A0h]
  __int64 v179; // [rsp+3B0h] [rbp+2A8h]
  int *v180; // [rsp+3B8h] [rbp+2B0h]
  __int64 v181; // [rsp+3C0h] [rbp+2B8h]
  int *v182; // [rsp+3C8h] [rbp+2C0h]
  __int64 v183; // [rsp+3D0h] [rbp+2C8h]
  int *v184; // [rsp+3D8h] [rbp+2D0h]
  __int64 v185; // [rsp+3E0h] [rbp+2D8h]
  int *v186; // [rsp+3E8h] [rbp+2E0h]
  __int64 v187; // [rsp+3F0h] [rbp+2E8h]
  int *v188; // [rsp+3F8h] [rbp+2F0h]
  __int64 v189; // [rsp+400h] [rbp+2F8h]
  int *v190; // [rsp+408h] [rbp+300h]
  __int64 v191; // [rsp+410h] [rbp+308h]
  int *v192; // [rsp+418h] [rbp+310h]
  __int64 v193; // [rsp+420h] [rbp+318h]
  int *v194; // [rsp+428h] [rbp+320h]
  __int64 v195; // [rsp+430h] [rbp+328h]
  int *v196; // [rsp+438h] [rbp+330h]
  __int64 v197; // [rsp+440h] [rbp+338h]
  int *v198; // [rsp+448h] [rbp+340h]
  __int64 v199; // [rsp+450h] [rbp+348h]
  int *v200; // [rsp+458h] [rbp+350h]
  __int64 v201; // [rsp+460h] [rbp+358h]
  int *v202; // [rsp+468h] [rbp+360h]
  __int64 v203; // [rsp+470h] [rbp+368h]
  int *v204; // [rsp+478h] [rbp+370h]
  __int64 v205; // [rsp+480h] [rbp+378h]
  int *v206; // [rsp+488h] [rbp+380h]
  __int64 v207; // [rsp+490h] [rbp+388h]
  int *v208; // [rsp+498h] [rbp+390h]
  __int64 v209; // [rsp+4A0h] [rbp+398h]
  int *v210; // [rsp+4A8h] [rbp+3A0h]
  __int64 v211; // [rsp+4B0h] [rbp+3A8h]
  int *v212; // [rsp+4B8h] [rbp+3B0h]
  __int64 v213; // [rsp+4C0h] [rbp+3B8h]
  int *v214; // [rsp+4C8h] [rbp+3C0h]
  __int64 v215; // [rsp+4D0h] [rbp+3C8h]
  int *v216; // [rsp+4D8h] [rbp+3D0h]
  __int64 v217; // [rsp+4E0h] [rbp+3D8h]
  int *v218; // [rsp+4E8h] [rbp+3E0h]
  __int64 v219; // [rsp+4F0h] [rbp+3E8h]
  int *v220; // [rsp+4F8h] [rbp+3F0h]
  __int64 v221; // [rsp+500h] [rbp+3F8h]
  int *v222; // [rsp+508h] [rbp+400h]
  __int64 v223; // [rsp+510h] [rbp+408h]
  int *v224; // [rsp+518h] [rbp+410h]
  __int64 v225; // [rsp+520h] [rbp+418h]
  int *v226; // [rsp+528h] [rbp+420h]
  __int64 v227; // [rsp+530h] [rbp+428h]
  int *v228; // [rsp+538h] [rbp+430h]
  __int64 v229; // [rsp+540h] [rbp+438h]

  v4 = *(_DWORD **)(a1 + 88);
  v31 = a4;
  if ( v4 )
  {
    v6 = v4[21];
    v7 = v4[22];
    v32 = v4[25];
    v33 = v4[26];
    v34 = v4[27];
    v35 = v4[29];
  }
  else
  {
    v6 = -1;
    v32 = -1;
    v7 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
  }
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 20);
  else
    v9 = -1;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 16);
  else
    v11 = -1;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 152);
    v12 = 120LL * (unsigned int)(a2 - 1);
    v13 = *(_QWORD *)(v10 + 48);
    v14 = *(_BYTE *)(v12 + v13 + 96);
    v15 = *(_BYTE *)(v12 + v13 + 104);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  if ( (unsigned int)dword_14006B470 > 5 )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)&dword_14006B470, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v89 = 0;
      v92 = 0;
      v95 = 0;
      v98 = 0;
      v101 = 0;
      v104 = 0;
      v107 = 0;
      v110 = 0;
      v113 = 0;
      v116 = 0;
      v87 = &v82;
      v40 = *(_DWORD *)(a1 + 644);
      v90 = &v40;
      v24 = *(_BYTE *)(a1 + 720);
      v93 = &v24;
      v25 = *(_BYTE *)(a1 + 721);
      v96 = &v25;
      v41 = *(_DWORD *)(a1 + 660);
      v99 = &v41;
      v36 = *(_WORD *)(a1 + 664);
      v102 = &v36;
      v37 = *(_WORD *)(a1 + 668);
      v105 = &v37;
      LOWORD(v38) = *(_WORD *)(a1 + 648);
      v108 = &v38;
      LOWORD(v39) = *(_WORD *)(a1 + 652);
      v111 = &v39;
      v16 = *(_BYTE *)(a1 + 656);
      v91 = 4;
      v100 = 4;
      v26 = v16;
      v94 = 1;
      v97 = 1;
      v103 = 2;
      v106 = 2;
      v109 = 2;
      v112 = 2;
      v115 = 1;
      v114 = &v26;
      v82 = 33556480LL;
      v88 = 8;
      tlgCreate1Sz_char((__int64)v117, (_BYTE *)(a1 + 704));
      tlgCreate1Sz_char((__int64)v118, (_BYTE *)(a1 + 709));
      tlgCreate1Sz_char((__int64)v119, (_BYTE *)(a1 + 714));
      v17 = *(_QWORD *)(a1 + 728);
      v120 = &v83;
      v42 = *(_DWORD *)(a1 + 864);
      v122 = &v42;
      v83 = v17;
      v121 = v18;
      v19 = *(_DWORD *)(a1 + 792);
      v130 = 0;
      v133 = 0;
      v136 = 0;
      v139 = 0;
      v142 = 0;
      v145 = 0;
      v148 = 0;
      v151 = 0;
      v43 = v19;
      v124 = &v43;
      v44 = *(_DWORD *)(a1 + 176);
      v126 = &v44;
      v27 = *(_BYTE *)(a1 + 1000);
      v128 = &v27;
      v28 = *(_BYTE *)(a1 + 1001);
      v131 = &v28;
      v45 = *(_DWORD *)(a1 + 1012);
      v134 = &v45;
      v46 = *(_DWORD *)(a1 + 1016);
      v137 = &v46;
      v47 = *(_DWORD *)(a1 + 1044);
      v140 = &v47;
      v29 = *(_BYTE *)(a1 + 1072);
      v143 = &v29;
      v84 = *(_QWORD *)(a1 + 736);
      v146 = &v84;
      v85 = *(_QWORD *)(a1 + 744);
      v149 = &v85;
      v152 = &v48;
      v154 = &v49;
      v156 = &v32;
      v158 = &v33;
      v48 = v6;
      v123 = (unsigned int)(v18 - 4);
      v125 = v123;
      v127 = v123;
      v129 = v18 - 7;
      v132 = v18 - 7;
      v135 = v18 - 4;
      v138 = v18 - 4;
      v141 = v18 - 4;
      v144 = v18 - 7;
      v147 = v18;
      v150 = v18;
      v153 = v123;
      v49 = v7;
      v155 = v123;
      v157 = v123;
      v159 = v123;
      v160 = &v34;
      v162 = &v50;
      v164 = &v51;
      v166 = &v52;
      v168 = &v35;
      v30 = *(_BYTE *)(a1 + 872);
      v170 = &v30;
      v53 = *(_DWORD *)(a1 + 876);
      v172 = &v53;
      v54 = *(_DWORD *)(a1 + 880);
      v174 = &v54;
      v55 = *(_DWORD *)(a1 + 884);
      v176 = &v55;
      v56 = *(_DWORD *)(a1 + 888);
      v178 = &v56;
      v57 = *(_DWORD *)(a1 + 892);
      v180 = &v57;
      v58 = *(_DWORD *)(a1 + 896);
      v182 = &v58;
      v59 = *(_DWORD *)(a1 + 900);
      v184 = &v59;
      v60 = *(_DWORD *)(a1 + 904);
      v186 = &v60;
      v61 = *(_DWORD *)(a1 + 908);
      v188 = &v61;
      v62 = *(_DWORD *)(a1 + 912);
      v190 = &v62;
      v63 = *(_DWORD *)(a1 + 916);
      v192 = &v63;
      v161 = v123;
      v50 = v9;
      v163 = v123;
      v51 = v20;
      v165 = v123;
      v52 = v11;
      v167 = v123;
      v169 = v123;
      v171 = (unsigned int)(v18 - 7);
      v173 = v123;
      v175 = v123;
      v177 = v123;
      v179 = v123;
      v181 = v123;
      v183 = v123;
      v185 = v123;
      v187 = v123;
      v189 = v123;
      v191 = v123;
      v193 = v123;
      v64 = *(_DWORD *)(a1 + 920);
      v194 = &v64;
      v65 = *(_DWORD *)(a1 + 924);
      v196 = &v65;
      v66 = *(_DWORD *)(a1 + 928);
      v198 = &v66;
      v67 = *(_DWORD *)(a1 + 932);
      v200 = &v67;
      v68 = *(_DWORD *)(a1 + 936);
      v202 = &v68;
      v69 = *(_DWORD *)(a1 + 940);
      v204 = &v69;
      v70 = *(_DWORD *)(a1 + 944);
      v206 = &v70;
      v71 = *(_DWORD *)(a1 + 948);
      v208 = &v71;
      v72 = *(_DWORD *)(a1 + 952);
      v210 = &v72;
      v73 = *(_DWORD *)(a1 + 956);
      v212 = &v73;
      v74 = *(_DWORD *)(a1 + 960);
      v214 = &v74;
      v75 = *(_DWORD *)(a1 + 964);
      v216 = &v75;
      v76 = *(_DWORD *)(a1 + 1088);
      v218 = &v76;
      v220 = &v77;
      v222 = &v78;
      v79 = v31;
      v224 = &v79;
      v80 = v14;
      v195 = v123;
      v197 = v123;
      v199 = v123;
      v201 = v123;
      v203 = v123;
      v205 = v123;
      v207 = v123;
      v209 = v123;
      v211 = v123;
      v213 = v123;
      v215 = v123;
      v217 = v123;
      v219 = v123;
      v77 = v21;
      v221 = v123;
      v78 = v22;
      v223 = v123;
      v225 = v123;
      v226 = &v80;
      v81 = v15;
      v228 = &v81;
      v227 = v123;
      v229 = v123;
      LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_14006B470,
                      (unsigned __int8 *)dword_140063EF5,
                      v18,
                      v22,
                      0x42u,
                      &v86);
    }
  }
  *(_QWORD *)(a1 + 876) = 0LL;
  *(_QWORD *)(a1 + 884) = 0LL;
  *(_QWORD *)(a1 + 892) = 0LL;
  *(_QWORD *)(a1 + 900) = 0LL;
  *(_QWORD *)(a1 + 908) = 0LL;
  *(_DWORD *)(a1 + 916) = 0;
  return v10;
}
