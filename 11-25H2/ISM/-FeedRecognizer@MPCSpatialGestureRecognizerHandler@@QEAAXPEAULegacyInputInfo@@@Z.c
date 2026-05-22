/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C4988
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BFB70 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800C638C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct LegacyInputInfo *a2)
{
  __int64 *v4; // rcx
  __int128 *v5; // r9
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rdx
  __int64 (__fastcall *v10)(__int64 *, __int128 *, __int64, __int128 *); // r10
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  int v26; // eax
  __int64 *v27; // rcx
  __int128 *v28; // r9
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 *v32; // rdx
  __int64 (__fastcall *v33)(__int64 *, __int128 *, __int64, __int128 *); // r10
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // r8
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rdx
  unsigned int v49; // eax
  __int64 *v50; // rcx
  __int128 *v51; // r9
  __int128 v52; // xmm1
  __int64 v53; // rax
  __int128 v54; // xmm0
  __int128 *v55; // rdx
  __int64 (__fastcall *v56)(__int64 *, __int128 *, __int64, __int128 *); // r10
  __int64 v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // r8
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  __int64 *v74; // rcx
  __int128 *v75; // rdx
  __int128 v76; // xmm1
  __int128 *v77; // r9
  __int64 v78; // rax
  __int128 v79; // xmm0
  __int64 (__fastcall *v80)(__int64 *, __int128 *, __int64, __int128 *); // r10
  __int64 v81; // rax
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int64 v89; // r8
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int64 v95; // rdx
  int v96; // eax
  int v97; // eax
  __int64 *v98; // rcx
  __int128 v99; // xmm1
  __int64 v100; // r8
  __int128 v101; // xmm0
  __int64 v102; // rax
  __int128 v103; // xmm1
  __int64 (__fastcall *v104)(__int64 *, __int128 *, __int64, __int128 *); // rax
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int64 v118; // rdx
  int v119; // eax
  __int64 *v120; // rcx
  __int128 v121; // xmm1
  __int64 v122; // r8
  __int128 v123; // xmm0
  __int64 v124; // rax
  __int128 v125; // xmm1
  __int64 (__fastcall *v126)(__int64 *, __int128 *, __int64, __int128 *); // rax
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int128 v130; // xmm1
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int64 v140; // rdx
  int v141; // eax
  __int64 *v142; // rcx
  __int128 v143; // xmm1
  __int64 v144; // r8
  __int128 v145; // xmm0
  __int64 v146; // rax
  __int128 v147; // xmm1
  __int64 (__fastcall *v148)(__int64 *, __int128 *, __int64, __int128 *); // rax
  __int128 v149; // xmm0
  __int128 v150; // xmm1
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm0
  __int128 v154; // xmm1
  __int128 v155; // xmm0
  __int128 v156; // xmm1
  __int128 v157; // xmm0
  __int128 v158; // xmm1
  __int128 v159; // xmm0
  __int128 v160; // xmm1
  __int128 v161; // xmm0
  __int64 v162; // rdx
  int v163; // eax
  __int64 v164; // rdx
  __int64 *v165; // rcx
  __int128 v166; // xmm1
  __int64 v167; // r8
  __int128 v168; // xmm0
  __int64 v169; // rax
  __int128 v170; // xmm1
  __int64 (__fastcall *v171)(__int64 *, __int128 *, __int64, __int128 *); // rax
  __int128 v172; // xmm0
  __int128 v173; // xmm1
  __int128 v174; // xmm0
  __int128 v175; // xmm1
  __int128 v176; // xmm0
  __int128 v177; // xmm1
  __int128 v178; // xmm0
  __int128 v179; // xmm1
  __int128 v180; // xmm0
  __int128 v181; // xmm1
  __int128 v182; // xmm0
  __int128 v183; // xmm1
  __int128 v184; // xmm0
  __int64 v185; // rdx
  int v186; // eax
  int v187; // [rsp+28h] [rbp-E0h]
  __int128 v188; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v189; // [rsp+48h] [rbp-C0h]
  __int128 v190; // [rsp+58h] [rbp-B0h]
  __int128 v191; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v192; // [rsp+78h] [rbp-90h]
  __int128 v193; // [rsp+88h] [rbp-80h]
  __int128 v194; // [rsp+98h] [rbp-70h]
  __int128 v195; // [rsp+A8h] [rbp-60h]
  __int128 v196; // [rsp+B8h] [rbp-50h]
  __int128 v197; // [rsp+C8h] [rbp-40h]
  __int128 v198; // [rsp+D8h] [rbp-30h]
  __int128 v199; // [rsp+E8h] [rbp-20h]
  __int128 v200; // [rsp+F8h] [rbp-10h]
  __int128 v201; // [rsp+108h] [rbp+0h]
  __int128 v202; // [rsp+118h] [rbp+10h]
  __int128 v203; // [rsp+128h] [rbp+20h]
  __int128 v204; // [rsp+138h] [rbp+30h]
  __int128 v205; // [rsp+148h] [rbp+40h]
  __int64 v206; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 218);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 219);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 2:
      if ( *((_BYTE *)a2 + 1204) )
        v73 = 0LL;
      else
        v73 = *((unsigned int *)a2 + 67);
      MPCSpatialGestureRecognizerHandler::SetMode(this, v73);
      v74 = (__int64 *)*((_QWORD *)this + 3);
      v75 = (__int128 *)((char *)a2 + 936);
      v76 = *(_OWORD *)((char *)a2 + 328);
      v77 = &v191;
      v188 = *(_OWORD *)((char *)a2 + 312);
      v78 = *v74;
      v79 = *(_OWORD *)((char *)a2 + 344);
      v189 = v76;
      v80 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v78 + 48);
      v81 = 9LL;
      v190 = v79;
      do
      {
        v82 = v75[1];
        *v77 = *v75;
        v83 = v75[2];
        v77[1] = v82;
        v84 = v75[3];
        v77[2] = v83;
        v85 = v75[4];
        v77[3] = v84;
        v86 = v75[5];
        v77[4] = v85;
        v87 = v75[6];
        v77[5] = v86;
        v88 = v75[7];
        v75 += 8;
        v77[6] = v87;
        v77 += 8;
        *(v77 - 1) = v88;
        --v81;
      }
      while ( v81 );
      v89 = *((_QWORD *)a2 + 2);
      v90 = v75[1];
      *v77 = *v75;
      v91 = v75[2];
      v77[1] = v90;
      v92 = v75[3];
      v77[2] = v91;
      v93 = v75[4];
      v77[3] = v92;
      v94 = v75[5];
      v95 = *((_QWORD *)v75 + 12);
      v77[4] = v93;
      v77[5] = v94;
      *((_QWORD *)v77 + 12) = v95;
      v96 = v80(v74, &v191, v89, &v188);
      if ( v96 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v96,
          v187);
      break;
    case 3:
      v50 = (__int64 *)*((_QWORD *)this + 3);
      v51 = &v191;
      v52 = *(_OWORD *)((char *)a2 + 328);
      v188 = *(_OWORD *)((char *)a2 + 312);
      v53 = *v50;
      v54 = *(_OWORD *)((char *)a2 + 344);
      v55 = (__int128 *)((char *)a2 + 936);
      v189 = v52;
      v56 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v53 + 64);
      v57 = 9LL;
      v190 = v54;
      do
      {
        v58 = v55[1];
        *v51 = *v55;
        v59 = v55[2];
        v51[1] = v58;
        v60 = v55[3];
        v51[2] = v59;
        v61 = v55[4];
        v51[3] = v60;
        v62 = v55[5];
        v51[4] = v61;
        v63 = v55[6];
        v51[5] = v62;
        v64 = v55[7];
        v55 += 8;
        v51[6] = v63;
        v51 += 8;
        *(v51 - 1) = v64;
        --v57;
      }
      while ( v57 );
      v65 = *((_QWORD *)a2 + 2);
      v66 = v55[1];
      *v51 = *v55;
      v67 = v55[2];
      v51[1] = v66;
      v68 = v55[3];
      v51[2] = v67;
      v69 = v55[4];
      v51[3] = v68;
      v70 = v55[5];
      v71 = *((_QWORD *)v55 + 12);
      v51[4] = v69;
      v51[5] = v70;
      *((_QWORD *)v51 + 12) = v71;
      v72 = v56(v50, &v191, v65, &v188);
      if ( v72 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v72,
          v187);
      break;
    case 4:
      v27 = (__int64 *)*((_QWORD *)this + 3);
      v28 = &v191;
      v29 = *(_OWORD *)((char *)a2 + 328);
      v188 = *(_OWORD *)((char *)a2 + 312);
      v30 = *v27;
      v31 = *(_OWORD *)((char *)a2 + 344);
      v32 = (__int128 *)((char *)a2 + 936);
      v189 = v29;
      v33 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v30 + 72);
      v34 = 9LL;
      v190 = v31;
      do
      {
        v35 = v32[1];
        *v28 = *v32;
        v36 = v32[2];
        v28[1] = v35;
        v37 = v32[3];
        v28[2] = v36;
        v38 = v32[4];
        v28[3] = v37;
        v39 = v32[5];
        v28[4] = v38;
        v40 = v32[6];
        v28[5] = v39;
        v41 = v32[7];
        v32 += 8;
        v28[6] = v40;
        v28 += 8;
        *(v28 - 1) = v41;
        --v34;
      }
      while ( v34 );
      v42 = *((_QWORD *)a2 + 2);
      v43 = v32[1];
      *v28 = *v32;
      v44 = v32[2];
      v28[1] = v43;
      v45 = v32[3];
      v28[2] = v44;
      v46 = v32[4];
      v28[3] = v45;
      v47 = v32[5];
      v48 = *((_QWORD *)v32 + 12);
      v28[4] = v46;
      v28[5] = v47;
      *((_QWORD *)v28 + 12) = v48;
      v49 = v33(v27, &v191, v42, &v188);
      if ( (int)(v49 + 0x80000000) >= 0 && v49 != -2147023728 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF0,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)v49,
          v187);
      break;
    case 6:
    case 0xB:
      v4 = (__int64 *)*((_QWORD *)this + 3);
      v5 = &v191;
      v6 = *(_OWORD *)((char *)a2 + 328);
      v188 = *(_OWORD *)((char *)a2 + 312);
      v7 = *v4;
      v8 = *(_OWORD *)((char *)a2 + 344);
      v9 = (__int128 *)((char *)a2 + 936);
      v189 = v6;
      v10 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v7 + 56);
      v11 = 9LL;
      v190 = v8;
      do
      {
        v12 = v9[1];
        *v5 = *v9;
        v13 = v9[2];
        v5[1] = v12;
        v14 = v9[3];
        v5[2] = v13;
        v15 = v9[4];
        v5[3] = v14;
        v16 = v9[5];
        v5[4] = v15;
        v17 = v9[6];
        v5[5] = v16;
        v18 = v9[7];
        v9 += 8;
        v5[6] = v17;
        v5 += 8;
        *(v5 - 1) = v18;
        --v11;
      }
      while ( v11 );
      v19 = *((_QWORD *)a2 + 2);
      v20 = v9[1];
      *v5 = *v9;
      v21 = v9[2];
      v5[1] = v20;
      v22 = v9[3];
      v5[2] = v21;
      v23 = v9[4];
      v5[3] = v22;
      v24 = v9[5];
      v25 = *((_QWORD *)v9 + 12);
      v5[4] = v23;
      v5[5] = v24;
      *((_QWORD *)v5 + 12) = v25;
      v26 = v10(v4, &v191, v19, &v188);
      if ( v26 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v26,
          v187);
      break;
  }
  if ( *((_DWORD *)a2 + 17) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v164 = 0LL;
    else
      v164 = *((unsigned int *)a2 + 67);
    MPCSpatialGestureRecognizerHandler::SetMode(this, v164);
    v165 = (__int64 *)*((_QWORD *)this + 3);
    v166 = *(_OWORD *)((char *)a2 + 328);
    v167 = *((_QWORD *)a2 + 2);
    v188 = *(_OWORD *)((char *)a2 + 312);
    v168 = *(_OWORD *)((char *)a2 + 344);
    v169 = *v165;
    v189 = v166;
    v170 = *((_OWORD *)a2 + 142);
    v171 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v169 + 80);
    v190 = v168;
    v191 = *((_OWORD *)a2 + 141);
    v172 = *((_OWORD *)a2 + 143);
    v192 = v170;
    v173 = *((_OWORD *)a2 + 144);
    v193 = v172;
    v174 = *((_OWORD *)a2 + 145);
    v194 = v173;
    v175 = *((_OWORD *)a2 + 146);
    v195 = v174;
    v176 = *((_OWORD *)a2 + 147);
    v196 = v175;
    v177 = *((_OWORD *)a2 + 148);
    v197 = v176;
    v178 = *((_OWORD *)a2 + 149);
    v198 = v177;
    v179 = *((_OWORD *)a2 + 150);
    v199 = v178;
    v180 = *((_OWORD *)a2 + 151);
    v200 = v179;
    v181 = *((_OWORD *)a2 + 152);
    v201 = v180;
    v182 = *((_OWORD *)a2 + 153);
    v202 = v181;
    v183 = *((_OWORD *)a2 + 154);
    v203 = v182;
    v184 = *((_OWORD *)a2 + 155);
    v185 = *((_QWORD *)a2 + 312);
    v204 = v183;
    v205 = v184;
    v206 = v185;
    v186 = v171(v165, &v191, v167, &v188);
    if ( v186 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v186,
        v187);
  }
  else
  {
    switch ( *((_DWORD *)a2 + 17) )
    {
      case 3:
LABEL_39:
        v142 = (__int64 *)*((_QWORD *)this + 3);
        v143 = *(_OWORD *)((char *)a2 + 328);
        v144 = *((_QWORD *)a2 + 2);
        v188 = *(_OWORD *)((char *)a2 + 312);
        v145 = *(_OWORD *)((char *)a2 + 344);
        v146 = *v142;
        v189 = v143;
        v147 = *((_OWORD *)a2 + 142);
        v148 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v146 + 88);
        v190 = v145;
        v191 = *((_OWORD *)a2 + 141);
        v149 = *((_OWORD *)a2 + 143);
        v192 = v147;
        v150 = *((_OWORD *)a2 + 144);
        v193 = v149;
        v151 = *((_OWORD *)a2 + 145);
        v194 = v150;
        v152 = *((_OWORD *)a2 + 146);
        v195 = v151;
        v153 = *((_OWORD *)a2 + 147);
        v196 = v152;
        v154 = *((_OWORD *)a2 + 148);
        v197 = v153;
        v155 = *((_OWORD *)a2 + 149);
        v198 = v154;
        v156 = *((_OWORD *)a2 + 150);
        v199 = v155;
        v157 = *((_OWORD *)a2 + 151);
        v200 = v156;
        v158 = *((_OWORD *)a2 + 152);
        v201 = v157;
        v159 = *((_OWORD *)a2 + 153);
        v202 = v158;
        v160 = *((_OWORD *)a2 + 154);
        v203 = v159;
        v161 = *((_OWORD *)a2 + 155);
        v162 = *((_QWORD *)a2 + 312);
        v204 = v160;
        v205 = v161;
        v206 = v162;
        v163 = v148(v142, &v191, v144, &v188);
        if ( v163 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x117,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v163,
            v187);
        goto LABEL_31;
      case 4:
        v98 = (__int64 *)*((_QWORD *)this + 3);
        v99 = *(_OWORD *)((char *)a2 + 328);
        v100 = *((_QWORD *)a2 + 2);
        v188 = *(_OWORD *)((char *)a2 + 312);
        v101 = *(_OWORD *)((char *)a2 + 344);
        v102 = *v98;
        v189 = v99;
        v103 = *((_OWORD *)a2 + 142);
        v104 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v102 + 96);
        v190 = v101;
        v191 = *((_OWORD *)a2 + 141);
        v105 = *((_OWORD *)a2 + 143);
        v192 = v103;
        v106 = *((_OWORD *)a2 + 144);
        v193 = v105;
        v107 = *((_OWORD *)a2 + 145);
        v194 = v106;
        v108 = *((_OWORD *)a2 + 146);
        v195 = v107;
        v109 = *((_OWORD *)a2 + 147);
        v196 = v108;
        v110 = *((_OWORD *)a2 + 148);
        v197 = v109;
        v111 = *((_OWORD *)a2 + 149);
        v198 = v110;
        v112 = *((_OWORD *)a2 + 150);
        v199 = v111;
        v113 = *((_OWORD *)a2 + 151);
        v200 = v112;
        v114 = *((_OWORD *)a2 + 152);
        v201 = v113;
        v115 = *((_OWORD *)a2 + 153);
        v202 = v114;
        v116 = *((_OWORD *)a2 + 154);
        v203 = v115;
        v117 = *((_OWORD *)a2 + 155);
        v118 = *((_QWORD *)a2 + 312);
        v204 = v116;
        v205 = v117;
        v206 = v118;
        v119 = v104(v98, &v191, v100, &v188);
        if ( v119 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x120,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v119,
            v187);
        break;
      case 5:
        break;
      case 6:
        goto LABEL_39;
      default:
        goto LABEL_31;
    }
    v120 = (__int64 *)*((_QWORD *)this + 3);
    v121 = *(_OWORD *)((char *)a2 + 328);
    v122 = *((_QWORD *)a2 + 2);
    v188 = *(_OWORD *)((char *)a2 + 312);
    v123 = *(_OWORD *)((char *)a2 + 344);
    v124 = *v120;
    v189 = v121;
    v125 = *((_OWORD *)a2 + 142);
    v126 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v124 + 104);
    v190 = v123;
    v191 = *((_OWORD *)a2 + 141);
    v127 = *((_OWORD *)a2 + 143);
    v192 = v125;
    v128 = *((_OWORD *)a2 + 144);
    v193 = v127;
    v129 = *((_OWORD *)a2 + 145);
    v194 = v128;
    v130 = *((_OWORD *)a2 + 146);
    v195 = v129;
    v131 = *((_OWORD *)a2 + 147);
    v196 = v130;
    v132 = *((_OWORD *)a2 + 148);
    v197 = v131;
    v133 = *((_OWORD *)a2 + 149);
    v198 = v132;
    v134 = *((_OWORD *)a2 + 150);
    v199 = v133;
    v135 = *((_OWORD *)a2 + 151);
    v200 = v134;
    v136 = *((_OWORD *)a2 + 152);
    v201 = v135;
    v137 = *((_OWORD *)a2 + 153);
    v202 = v136;
    v138 = *((_OWORD *)a2 + 154);
    v203 = v137;
    v139 = *((_OWORD *)a2 + 155);
    v140 = *((_QWORD *)a2 + 312);
    v204 = v138;
    v205 = v139;
    v206 = v140;
    v141 = v126(v120, &v191, v122, &v188);
    if ( v141 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x128,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v141,
        v187);
  }
LABEL_31:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v97 = *((_DWORD *)this + 42);
  else
    v97 = 0;
  *((_DWORD *)a2 + 199) = v97;
  *((_DWORD *)a2 + 200) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 201) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}
