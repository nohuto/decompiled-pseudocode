/*
 * XREFs of ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410
 * Callers:
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 * Callees:
 *     ?bAddOverflow@@YAH_J0@Z @ 0x140144A04 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x140144A50 (-bSubOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x140144A9C (-bMulOverflow@@YAH_J0@Z.c)
 *     rotate::bScalePlgDDALToPlgDDA @ 0x140144B24 (rotate--bScalePlgDDALToPlgDDA.c)
 *     rotate::ROT_DIV @ 0x140145834 (rotate--ROT_DIV.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1401987D8 (-bSubOverflow@@YAHJJ@Z.c)
 *     rotate::QDIV @ 0x1402174B8 (rotate--QDIV.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall rotate::bInitPlgDDA(rotate *this, struct rotate::_PLGDDA *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r14
  LONG left; // r15d
  int v14; // r12d
  int v15; // r10d
  LONG top; // r13d
  LONG bottom; // esi
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r13
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // r11
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // r11
  __int64 v46; // r12
  __int64 v47; // r15
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r9
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 *v61; // r8
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r9
  __int128 *v82; // rcx
  __int128 v83; // xmm0
  __int64 v84; // xmm1_8
  __int64 v85; // r8
  __int64 v86; // r9
  __int128 *v87; // rcx
  __int128 v88; // xmm0
  __int64 v89; // xmm1_8
  __int64 v90; // r11
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // r9
  __int64 v94; // r10
  unsigned int v95; // r9d
  __int64 v96; // r11
  __int64 v97; // r9
  __int64 v98; // r10
  __int64 v99; // r11
  __int64 v100; // r10
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r9
  __int64 v106; // r10
  __int64 v107; // r11
  __int64 v108; // r9
  __int64 v109; // r13
  __int64 v110; // r10
  __int64 v111; // r9
  __int64 v112; // r10
  __int64 v113; // r13
  __int64 v114; // r15
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // r9
  __int64 v120; // r9
  __int64 v121; // r10
  __int64 v122; // r9
  __int64 v123; // r10
  __int64 v124; // r11
  __int64 v125; // r10
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r9
  __int64 v129; // r10
  __int64 v130; // r10
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // r10
  __int64 v134; // r9
  __int64 v135; // rdx
  __int64 v136; // r9
  __int64 v137; // r10
  __int64 v138; // r9
  __int64 v139; // r10
  __int64 v140; // rdx
  __int64 v141; // r9
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // r11
  __int64 v145; // r10
  __int64 v146; // r10
  __int64 v147; // r11
  __int64 v148; // r9
  __int64 v149; // r10
  __int64 v150; // r10
  __int64 v151; // r9
  __int64 v152; // r10
  __int64 v153; // r9
  __int64 v154; // r10
  __int64 v155; // r11
  __int64 v156; // r10
  __int64 v157; // r10
  __int64 v158; // r11
  __int64 v159; // r9
  __int64 v160; // r10
  __int64 v161; // r9
  __int64 v162; // r9
  __int64 v163; // r10
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // r9
  __int64 v167; // r9
  __int64 v168; // r10
  __int64 v169; // r15
  __int64 v170; // r9
  __int64 v171; // r9
  __int64 v172; // r11
  __int64 v173; // r9
  __int64 v174; // rax
  __int64 v175; // r11
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // r9
  __int64 v179; // rax
  __int64 v180; // r9
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // r9
  __int64 v184; // r9
  __int64 v185; // r10
  __int64 v186; // rdx
  unsigned __int64 v187; // rcx
  unsigned __int64 *v188; // r8
  unsigned __int64 v189; // r9
  unsigned __int64 v190; // rdx
  __int64 v191; // rax
  unsigned __int64 v192; // rcx
  __int64 v193; // rdx
  __int64 v194; // r9
  __int64 v195; // r10
  __int64 v196; // r9
  __int64 v197; // r10
  __int64 v198; // rdx
  __int64 v199; // r9
  __int64 v200; // rdx
  __int64 v201; // r9
  __int64 v202; // r10
  unsigned __int64 v203; // r8
  unsigned __int64 v204; // rcx
  unsigned __int64 *v205; // r9
  unsigned __int64 v206; // rdx
  __int64 v207; // rax
  unsigned __int64 v208; // r8
  __int64 v209; // r11
  __int64 v210; // r10
  __int64 v211; // r10
  __int64 v212; // r11
  __int64 v213; // r9
  __int64 v214; // r10
  __int64 v215; // r10
  __int64 v216; // r9
  __int64 v217; // r10
  __int64 v218; // r9
  __int64 v219; // r10
  __int64 v220; // r11
  unsigned __int64 v221; // r8
  unsigned __int64 v222; // rcx
  unsigned __int64 *v223; // r9
  unsigned __int64 v224; // rdx
  __int64 v225; // r10
  unsigned __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // r9
  __int64 v229; // r11
  __int64 v230; // r11
  __int64 v231; // r9
  __int64 v232; // r9
  __int64 v233; // r11
  __int64 v234; // r13
  __int64 v235; // r9
  __int64 v236; // r11
  unsigned __int64 v237; // rcx
  unsigned __int64 v238; // r11
  unsigned __int64 *v239; // r8
  unsigned __int64 v240; // rdx
  __int64 v241; // r10
  __int64 v242; // xmm1_8
  __int128 v243; // xmm0
  __int64 v244; // xmm1_8
  __int128 v245; // xmm0
  __int64 v246; // xmm1_8
  __int128 v247; // xmm0
  __int64 v248; // xmm1_8
  __int128 v249; // xmm0
  __int64 v250; // xmm1_8
  __int128 v251; // xmm0
  __int64 v252; // xmm1_8
  rotate *v253; // rdx
  char v254; // [rsp+20h] [rbp-B9h]
  char v255; // [rsp+20h] [rbp-B9h]
  char v256; // [rsp+20h] [rbp-B9h]
  char v257; // [rsp+20h] [rbp-B9h]
  int v259; // [rsp+28h] [rbp-B1h]
  __int64 v260; // [rsp+28h] [rbp-B1h]
  __int64 v261; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v262; // [rsp+38h] [rbp-A1h]
  __int64 v263; // [rsp+40h] [rbp-99h]
  __int64 v264; // [rsp+48h] [rbp-91h]
  __int64 v265; // [rsp+50h] [rbp-89h]
  __int64 v266; // [rsp+58h] [rbp-81h] BYREF
  __int64 v267; // [rsp+60h] [rbp-79h]
  __int64 v268; // [rsp+68h] [rbp-71h]
  __int64 v269; // [rsp+70h] [rbp-69h]
  __int64 v270; // [rsp+78h] [rbp-61h]
  __int64 v271; // [rsp+80h] [rbp-59h]
  __int64 v272; // [rsp+88h] [rbp-51h]
  __int64 v273; // [rsp+90h] [rbp-49h]
  __int64 v274; // [rsp+98h] [rbp-41h]
  __int64 v275; // [rsp+A0h] [rbp-39h]
  __int64 v276; // [rsp+A8h] [rbp-31h]
  rotate *v277; // [rsp+B0h] [rbp-29h]
  __int128 v278; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v279; // [rsp+C8h] [rbp-11h] BYREF
  _QWORD v280[3]; // [rsp+D8h] [rbp-1h]
  int v281; // [rsp+F0h] [rbp+17h]
  int v282; // [rsp+F4h] [rbp+1Bh]

  v277 = this;
  result = Win32AllocPoolZInit(792LL, 1633969223LL);
  v7 = 0LL;
  v8 = result;
  if ( result )
  {
    v9 = *(_QWORD *)&a4->left;
    v10 = *(_QWORD *)&a4->right;
    v11 = *(_QWORD *)&a4->left;
    v12 = *(_QWORD *)&a4[1].left;
    left = a3->left;
    v280[0] = v9;
    v14 = v10 + v12 - v9;
    v280[1] = v10;
    v280[2] = v12;
    v15 = HIDWORD(v10) + HIDWORD(v12) - HIDWORD(v11);
    v281 = v14;
    v282 = v15;
    v278 = 0LL;
    v279 = 0LL;
    if ( left || a3->top )
    {
      LODWORD(v267) = *(_DWORD *)a2;
      if ( (unsigned int)bSubOverflow(v267, left) )
        goto LABEL_252;
      top = a3->top;
      LODWORD(v265) = *((_DWORD *)a2 + 1);
      if ( (unsigned int)bSubOverflow(v265, top) )
        goto LABEL_252;
      LODWORD(v263) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)bSubOverflow(v263, left) )
        goto LABEL_252;
      v259 = *((_DWORD *)a2 + 3);
      if ( (unsigned int)bSubOverflow(v259, top) )
        goto LABEL_252;
      LODWORD(v262) = a3->right;
      if ( (unsigned int)bSubOverflow(v262, left) )
        goto LABEL_252;
      bottom = a3->bottom;
      if ( (unsigned int)bSubOverflow(bottom, top) )
        goto LABEL_252;
      LODWORD(v278) = v267 - left;
      DWORD1(v278) = v265 - top;
      DWORD2(v278) = v263 - left;
      HIDWORD(v278) = v259 - top;
      a2 = (struct rotate::_PLGDDA *)&v278;
      DWORD2(v279) = v262 - left;
      HIDWORD(v279) = bottom - top;
      a3 = (struct _RECTL *)&v279;
    }
    v18 = (SHIDWORD(v10) <= v15) ^ (unsigned int)(SHIDWORD(v10) > SHIDWORD(v9));
    v19 = 0;
    v20 = (SHIDWORD(v10) <= v15) ^ (SHIDWORD(v10) > SHIDWORD(v9));
    if ( SHIDWORD(v280[v18]) > SHIDWORD(v280[(unsigned int)v18 ^ 3LL]) )
      v20 ^= 3u;
    v276 = 1LL;
    if ( !v20 )
    {
      if ( SHIDWORD(v10) >= SHIDWORD(v12) && (SHIDWORD(v10) > SHIDWORD(v12) || (int)v10 >= (int)v12) )
      {
        v19 = 1;
        goto LABEL_42;
      }
      v19 = 0;
      goto LABEL_40;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          if ( SHIDWORD(v10) < SHIDWORD(v12) || SHIDWORD(v10) <= SHIDWORD(v12) && (int)v10 < (int)v12 )
          {
            v19 = 6;
LABEL_42:
            v23 = a3->bottom - a3->top;
            v24 = a3->right - a3->left;
            goto LABEL_43;
          }
          v19 = 7;
        }
LABEL_40:
        v23 = a3->right - a3->left;
        v24 = a3->bottom - a3->top;
LABEL_43:
        v25 = v24;
        v26 = v23;
        if ( !v23 )
          goto LABEL_252;
        if ( !v24 )
          goto LABEL_252;
        v27 = v19;
        v28 = *((int *)a2 + 1);
        v29 = *(int *)a2;
        v30 = 3 * v27;
        v31 = dword_140362384[6 * v27];
        v32 = dword_14036238C[6 * v27];
        v27 *= 2LL;
        v33 = dword_140362390[2 * v30];
        v34 = dword_140362380[2 * v30];
        v35 = (v26 - 1) * dword_140362388[2 * v30];
        v266 = v32;
        v272 = v33;
        v267 = v31;
        v265 = v34;
        v263 = v31 * v28 + v34 * v29 + v35;
        v36 = dword_140362300[2 * v27];
        v37 = v32 * v29 + (v25 - 1) * dword_140362394[2 * v30];
        v38 = dword_140362304[2 * v27];
        v271 = v33 * v28 + v37;
        v39 = SLODWORD(v280[v36]);
        v40 = SHIDWORD(v280[v36]);
        v41 = dword_140362308[2 * v27];
        v42 = SLODWORD(v280[v38]);
        v43 = SHIDWORD(v280[v38]) - v40;
        v275 = v39;
        v44 = SLODWORD(v280[v41]) - v39;
        v45 = SHIDWORD(v280[v41]) - v40;
        v274 = v40;
        v46 = v42 - v39;
        if ( v46 )
        {
          if ( (unsigned int)bMulOverflow(v25, v46) )
            goto LABEL_252;
        }
        if ( v43 && (unsigned int)bMulOverflow(v25, v43) )
          goto LABEL_252;
        if ( v44 && (unsigned int)bMulOverflow(v26, v44) )
          goto LABEL_252;
        if ( v45 && (unsigned int)bMulOverflow(v26, v45) )
          goto LABEL_252;
        v47 = v25 * v43;
        v260 = v25 * v46;
        v273 = v26 * v44;
        v262 = v26 * v45;
        if ( !(v26 * v45) || (unsigned int)bMulOverflow(v26, v25) || v274 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v274 < 16 )
          goto LABEL_252;
        v261 = v274 + 16;
        if ( (unsigned int)bMulOverflow(v48 * v25, v274 + 16) )
          goto LABEL_252;
        v261 *= v49;
        if ( (unsigned int)bMulOverflow(v263, v25 * v43) )
          goto LABEL_252;
        if ( (unsigned int)bAddOverflow(v261, v50 * v47) )
          goto LABEL_252;
        v264 = v51 + v261;
        if ( (unsigned int)bMulOverflow(v271, v262) )
          goto LABEL_252;
        if ( (unsigned int)bAddOverflow(v264, v52 * v262) )
          goto LABEL_252;
        v264 += v53;
        if ( (unsigned int)bSubOverflow(v264, 1LL) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v54, 16LL) )
          goto LABEL_252;
        v56 = 16 * v55;
        if ( !v56 )
          goto LABEL_252;
        v57 = v47 % v56 + v56;
        if ( v47 % v56 >= 0 )
          v57 = v47 % v56;
        v269 = v57;
        v58 = v47 / v56 - 1;
        if ( v47 % v56 >= 0 )
          v58 = v47 / v56;
        v268 = v58;
        v59 = v262 % v56;
        v261 = v262 % v56;
        if ( v262 % v56 < 0 )
          v261 = v59 + v56;
        v60 = v262 / v56 - 1;
        v61 = (unsigned __int64 *)(v8 + 8);
        if ( v59 >= 0 )
          v60 = v262 / v56;
        v62 = v264 - 1;
        *(_QWORD *)&v278 = v60;
        if ( v264 - 1 >= 0 )
        {
          v254 = 0;
        }
        else
        {
          v254 = 1;
          v62 = 1 - v264;
        }
        v270 = v62 / v56;
        *v61 = v62 / v56;
        v63 = v62 % v56;
        if ( v254 )
        {
          v64 = -v270;
          *v61 = -v270;
          if ( v63 )
          {
            *v61 = v64 - 1;
            v65 = v56 - v63;
          }
          else
          {
            v65 = 0LL;
          }
        }
        else
        {
          v65 = v62 % v56;
        }
        v66 = v268;
        *(_QWORD *)(v8 + 16) = v65;
        v67 = v269;
        *(_OWORD *)(v8 + 24) = *(_OWORD *)(v8 + 8);
        v68 = *(_QWORD *)(v8 + 24) + v66;
        v69 = v67 + *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 24) = v68;
        *(_QWORD *)(v8 + 32) = v69;
        if ( v69 >= v56 )
        {
          *(_QWORD *)(v8 + 24) = v68 + 1;
          *(_QWORD *)(v8 + 32) = v69 - v56;
        }
        v70 = v278;
        v71 = v261;
        *(_OWORD *)(v8 + 40) = *(_OWORD *)(v8 + 8);
        v72 = *(_QWORD *)(v8 + 40) + v70;
        v73 = *(_QWORD *)(v8 + 48) + v71;
        *(_QWORD *)(v8 + 40) = v72;
        *(_QWORD *)(v8 + 48) = v73;
        if ( v73 >= v56 )
        {
          *(_QWORD *)(v8 + 40) = v72 + 1;
          *(_QWORD *)(v8 + 48) = v73 - v56;
        }
        v74 = v268;
        *(_OWORD *)(v8 + 56) = *(_OWORD *)(v8 + 40);
        v75 = *(_QWORD *)(v8 + 56) + v74;
        v76 = v67 + *(_QWORD *)(v8 + 64);
        *(_QWORD *)(v8 + 56) = v75;
        *(_QWORD *)(v8 + 64) = v76;
        if ( v76 >= v56 )
        {
          *(_QWORD *)(v8 + 56) = v75 + 1;
          *(_QWORD *)(v8 + 64) = v76 - v56;
        }
        if ( (unsigned int)bMulOverflow(v265, v25 * v43) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v266, v262) )
          goto LABEL_252;
        *(_QWORD *)&v278 = v77 * v262;
        v269 = v265 * v47;
        if ( (unsigned int)bAddOverflow(v265 * v47, v77 * v262) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v267, v25 * v43) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v272, v262) )
          goto LABEL_252;
        v270 = v78 * v262;
        v268 = v267 * v47;
        if ( (unsigned int)bAddOverflow(v267 * v47, v78 * v262) )
          goto LABEL_252;
        rotate::ROT_DIV(v8 + 264, v278 + v269, v79);
        v80 = v270 + v268;
        *(_QWORD *)(v8 + 280) = v81;
        v83 = *v82;
        v84 = *((_QWORD *)v82 + 2);
        *(_OWORD *)(v8 + 288) = *v82;
        *(_OWORD *)(v8 + 312) = v83;
        *(_OWORD *)(v8 + 336) = v83;
        *(_QWORD *)(v8 + 304) = v84;
        *(_QWORD *)(v8 + 328) = v84;
        *(_QWORD *)(v8 + 352) = v84;
        rotate::ROT_DIV(v8 + 360, v80, v85);
        *(_QWORD *)(v8 + 376) = v86;
        v88 = *v87;
        v89 = *((_QWORD *)v87 + 2);
        *(_OWORD *)(v8 + 384) = *v87;
        *(_OWORD *)(v8 + 408) = v88;
        *(_OWORD *)(v8 + 432) = v88;
        *(_QWORD *)(v8 + 400) = v89;
        *(_QWORD *)(v8 + 424) = v89;
        *(_QWORD *)(v8 + 448) = v89;
        if ( (unsigned int)bMulOverflow(v46, v90) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v43, v44) )
          goto LABEL_252;
        if ( (unsigned int)bSubOverflow(v91, v43 * v44) )
          goto LABEL_252;
        v268 = v93 - v92;
        if ( (unsigned int)bMulOverflow(v94, 16LL) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v25, v95) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v265, v43) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v266, v96) )
          goto LABEL_252;
        v100 = 16 * v98;
        if ( !v100 )
          goto LABEL_252;
        v101 = 16 * v25;
        if ( !(16 * v25) )
          goto LABEL_252;
        v102 = v265 * v43 / v100 - 1;
        if ( v265 * v43 % v100 >= 0 )
          v102 = v265 * v43 / v100;
        v264 = v102;
        v103 = v97 * v99 / v101;
        v104 = v97 * v99 % v101;
        v105 = v103 - 1;
        if ( v104 >= 0 )
          v105 = v103;
        v270 = v105;
        if ( (unsigned int)bAddOverflow(v102, v105) )
          goto LABEL_252;
        v108 = v267 * v43 / v106 - 1;
        if ( v267 * v43 % v106 >= 0 )
          v108 = v267 * v43 / v106;
        v109 = 16 * v25;
        v110 = v272 * v107 / v109 - 1;
        if ( v272 * v107 % v109 >= 0 )
          v110 = v272 * v107 / v109;
        if ( (unsigned int)bAddOverflow(v108, v110) )
          goto LABEL_252;
        v113 = v112 + v111;
        if ( v47 )
        {
          if ( (unsigned int)bMulOverflow(*(_QWORD *)(v8 + 8), 16LL) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v115, v274) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(v260, v117 - v116) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v275, 16LL) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(v47, v118 + v119) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v121, v47 * v120) )
            goto LABEL_252;
          v125 = v122 + v123;
          v126 = v271;
          if ( v271 )
          {
            if ( (unsigned int)bMulOverflow(v271, v46 * v124) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v125, v126 * v46 * v124) )
            goto LABEL_252;
          v130 = v129 - v127;
          if ( v128 )
          {
            if ( (unsigned int)bMulOverflow(v44, v43) || (unsigned int)bMulOverflow(v131, v43 * v44) )
              goto LABEL_252;
          }
          if ( (unsigned int)bAddOverflow(v130, v128 * v43 * v44) )
            goto LABEL_252;
          *(_QWORD *)&v278 = v132 + v133;
          if ( (unsigned int)bSubOverflow(v132 + v133, 1LL) )
            goto LABEL_252;
          v261 = v134 - 1;
          if ( (unsigned int)bMulOverflow(16LL, v47) )
            goto LABEL_252;
          *(_QWORD *)(v8 + 664) = 16 * v47;
          *(_QWORD *)(v8 + 472) = 16 * v47;
          *(_QWORD *)(v8 + 568) = 16 * v47;
          if ( !(16 * v47) )
            goto LABEL_252;
          rotate::QDIV(v8 + 72, &v261);
          if ( (unsigned int)bMulOverflow(16LL, v260) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(*(_QWORD *)(v8 + 40), *(_QWORD *)(v8 + 8)) )
            goto LABEL_252;
          v269 = 16 * v137;
          if ( (unsigned int)bMulOverflow(16 * v137, v136 - v135) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v139 * v138, v268) )
            goto LABEL_252;
          if ( (unsigned int)bAddOverflow(v278 - 1, v141 - v140) )
            goto LABEL_252;
          v261 = v142 + v143;
          rotate::QDIV(v8 + 120, &v261);
          rotate::ROT_DIV(v8 + 648, v269, *(_QWORD *)(v8 + 664));
          v145 = v266;
          if ( v144 )
          {
            if ( (unsigned int)bMulOverflow(v266, v46) || (unsigned int)bMulOverflow(v146 * v46, v147) )
              goto LABEL_252;
          }
          v148 = v145 * v46 * v144;
          if ( v43 )
          {
            if ( (unsigned int)bMulOverflow(v145, v44) || (unsigned int)bMulOverflow(v149 * v44, v43) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v148, v145 * v43 * v44) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(16LL, v270 + v264) )
            goto LABEL_252;
          if ( (unsigned int)bMulOverflow(16 * v150, v260) )
            goto LABEL_252;
          if ( (unsigned int)bSubOverflow(16 * v260 * v152, v151) )
            goto LABEL_252;
          v266 = v154 - v153;
          rotate::QDIV(v8 + 456, &v266);
          v156 = v272;
          if ( v155 )
          {
            if ( (unsigned int)bMulOverflow(v272, v46) || (unsigned int)bMulOverflow(v157 * v46, v158) )
              goto LABEL_252;
          }
          v159 = v156 * v46 * v155;
          if ( v43 )
          {
            if ( (unsigned int)bMulOverflow(v156, v44) || (unsigned int)bMulOverflow(v160 * v44, v43) )
              goto LABEL_252;
          }
          if ( (unsigned int)bSubOverflow(v159, v156 * v43 * v44)
            || (unsigned int)bMulOverflow(16LL, v113)
            || (unsigned int)bMulOverflow(16 * v113, v260)
            || (unsigned int)bSubOverflow(16 * v260 * v113, v161) )
          {
            goto LABEL_252;
          }
          v266 = v163 - v162;
          rotate::QDIV(v8 + 552, &v266);
          rotate::ROT_DIV(v8 + 744, 16 * v260, 16 * v47);
          v114 = 16 * v47;
        }
        else
        {
          *(_QWORD *)(v8 + 648) = 0LL;
          v114 = 0LL;
          *(_QWORD *)(v8 + 656) = 0LL;
          *(_QWORD *)(v8 + 664) = 0LL;
          *(_QWORD *)(v8 + 456) = 0LL;
          *(_QWORD *)(v8 + 464) = 0LL;
          *(_QWORD *)(v8 + 472) = 0LL;
          *(_QWORD *)(v8 + 552) = 0LL;
          *(_QWORD *)(v8 + 560) = 0LL;
          *(_QWORD *)(v8 + 568) = 0LL;
          *(_QWORD *)(v8 + 72) = 0LL;
          *(_QWORD *)(v8 + 80) = 0LL;
          *(_QWORD *)(v8 + 120) = 0LL;
          *(_QWORD *)(v8 + 128) = 0LL;
          *(_QWORD *)(v8 + 744) = 0LL;
          *(_QWORD *)(v8 + 752) = 0LL;
        }
        *(_QWORD *)(v8 + 760) = v114;
        v164 = *(_QWORD *)(v8 + 8);
        if ( v164 )
        {
          if ( v164 >= 0 )
          {
            if ( v164 > 0x7FFFFFFFFFFFFFFLL )
              goto LABEL_252;
          }
          else if ( v164 < (__int64)0xF800000000000000uLL )
          {
            goto LABEL_252;
          }
        }
        if ( (unsigned int)bSubOverflow(16 * v164, v274) )
          goto LABEL_252;
        if ( (unsigned int)bMulOverflow(v273, v166 - v165) )
          goto LABEL_252;
        v271 = v167 * v168;
        if ( v275 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v275 < 16 )
          goto LABEL_252;
        v169 = v262;
        if ( (unsigned int)bMulOverflow(v262, v275 + 16) || (unsigned int)bAddOverflow(v271, v169 * v170) )
          goto LABEL_252;
        v173 = v271 + v171;
        v174 = v263;
        if ( v263 )
        {
          if ( (unsigned int)bMulOverflow(v46, v172) || (unsigned int)bMulOverflow(v263, v46 * v175) )
            goto LABEL_252;
          v174 = v176;
        }
        if ( !(unsigned int)bAddOverflow(v173, v174 * v46 * v172) )
        {
          v179 = v263;
          v180 = v177 + v178;
          if ( v263 )
          {
            if ( (unsigned int)bMulOverflow(v44, v43) || (unsigned int)bMulOverflow(v263, v43 * v44) )
              goto LABEL_252;
            v179 = v181;
          }
          if ( !(unsigned int)bSubOverflow(v180, v179 * v43 * v44) && !(unsigned int)bSubOverflow(v183 - v182, 1LL) )
          {
            v186 = v184 - 1;
            v269 = v184 - 1;
            if ( v169 >= 0 )
            {
              if ( v169 > 0x7FFFFFFFFFFFFFFLL )
                goto LABEL_252;
            }
            else if ( v169 < (__int64)0xF800000000000000uLL )
            {
              goto LABEL_252;
            }
            v187 = 16 * v169;
            *(_QWORD *)(v8 + 688) = 16 * v169;
            *(_QWORD *)(v8 + 496) = 16 * v169;
            *(_QWORD *)(v8 + 592) = 16 * v169;
            if ( !(16 * v169) )
              goto LABEL_252;
            v188 = (unsigned __int64 *)(v8 + 88);
            v189 = v184 - 1;
            if ( v186 >= 0 )
            {
              v255 = 0;
            }
            else
            {
              v255 = 1;
              v189 = -v186;
            }
            *(_QWORD *)&v278 = v189 / v187;
            *v188 = v189 / v187;
            v190 = v189 % v187;
            if ( v255 )
            {
              v191 = -(__int64)v278;
              *v188 = -(__int64)v278;
              if ( v190 )
              {
                *v188 = v191 - 1;
                v192 = v187 - v190;
              }
              else
              {
                v192 = 0LL;
              }
            }
            else
            {
              v192 = v189 % v187;
            }
            *(_QWORD *)(v8 + 96) = v192;
            if ( v185 )
            {
              if ( v185 >= 0 )
              {
                if ( v185 > 0x7FFFFFFFFFFFFFFLL )
                  goto LABEL_252;
              }
              else if ( v185 < (__int64)0xF800000000000000uLL )
              {
                goto LABEL_252;
              }
            }
            if ( (unsigned int)bSubOverflow(*(_QWORD *)(v8 + 24), *(_QWORD *)(v8 + 8))
              || (unsigned int)bMulOverflow(16 * v195, v194 - v193)
              || (unsigned int)bAddOverflow(16 * v197 * v196, v268)
              || (unsigned int)bAddOverflow(v269, v199 + v198) )
            {
              goto LABEL_252;
            }
            v203 = *(_QWORD *)(v8 + 688);
            v204 = v200 + v201;
            v205 = (unsigned __int64 *)(v8 + 104);
            if ( (v204 & 0x8000000000000000uLL) == 0LL )
            {
              v256 = 0;
            }
            else
            {
              v256 = 1;
              v204 = -(__int64)v204;
            }
            *(_QWORD *)&v278 = v204 / v203;
            *v205 = v204 / v203;
            v206 = v204 % v203;
            if ( v256 )
            {
              v207 = -(__int64)v278;
              *v205 = -(__int64)v278;
              if ( v206 )
              {
                *v205 = v207 - 1;
                v208 = v203 - v206;
              }
              else
              {
                v208 = 0LL;
              }
            }
            else
            {
              v208 = v204 % v203;
            }
            *(_QWORD *)(v8 + 112) = v208;
            rotate::ROT_DIV(v8 + 672, 16 * v202, *(_QWORD *)(v8 + 688));
            v210 = v265;
            if ( v209 )
            {
              if ( (unsigned int)bMulOverflow(v265, v46) || (unsigned int)bMulOverflow(v211 * v46, v212) )
                goto LABEL_252;
            }
            v213 = v210 * v46 * v209;
            if ( v43 )
            {
              if ( (unsigned int)bMulOverflow(v210, v44) || (unsigned int)bMulOverflow(v214 * v44, v43) )
                goto LABEL_252;
            }
            if ( (unsigned int)bSubOverflow(v213, v210 * v43 * v44) )
              goto LABEL_252;
            v215 = v270 + v264;
            if ( v270 + v264 )
            {
              if ( v215 >= 0 )
              {
                if ( v215 > 0x7FFFFFFFFFFFFFFLL )
                  goto LABEL_252;
              }
              else if ( v215 < (__int64)0xF800000000000000uLL )
              {
                goto LABEL_252;
              }
            }
            if ( (unsigned int)bMulOverflow(16 * v215, v273) || (unsigned int)bAddOverflow(16 * v273 * v217, v216) )
              goto LABEL_252;
            v221 = *(_QWORD *)(v8 + 496);
            v222 = v219 + v218;
            v223 = (unsigned __int64 *)(v8 + 480);
            if ( (v222 & 0x8000000000000000uLL) == 0LL )
            {
              v257 = 0;
            }
            else
            {
              v257 = 1;
              v222 = -(__int64)v222;
            }
            *v223 = v222 / v221;
            v224 = v222 % v221;
            if ( v257 )
            {
              v225 = -(__int64)(v222 / v221);
              *v223 = v225;
              if ( v224 )
              {
                v226 = v221 - v224;
                *v223 = v225 - 1;
              }
              else
              {
                v226 = 0LL;
              }
            }
            else
            {
              v226 = v222 % v221;
            }
            *(_QWORD *)(v8 + 488) = v226;
            v227 = v267;
            if ( v220 )
            {
              if ( (unsigned int)bMulOverflow(v267, v46) || (unsigned int)bMulOverflow(v228 * v46, v229) )
                goto LABEL_252;
            }
            v230 = v227 * v46 * v220;
            if ( v43 )
            {
              if ( (unsigned int)bMulOverflow(v227, v44) || (unsigned int)bMulOverflow(v231 * v44, v43) )
                goto LABEL_252;
            }
            if ( (unsigned int)bSubOverflow(v230, v227 * v43 * v44) )
              goto LABEL_252;
            if ( v113 )
            {
              if ( v113 < 0 )
              {
                if ( v113 >= (__int64)0xF800000000000000uLL )
                  goto LABEL_242;
                goto LABEL_252;
              }
              if ( v113 > 0x7FFFFFFFFFFFFFFLL )
                goto LABEL_252;
            }
LABEL_242:
            if ( !(unsigned int)bMulOverflow(16 * v113, v273) )
            {
              v234 = 16 * v232 * v113;
              if ( !(unsigned int)bAddOverflow(v234, v233) )
              {
                v237 = v236 + v234;
                v238 = *(_QWORD *)(v8 + 592);
                v239 = (unsigned __int64 *)(v8 + 576);
                if ( (v237 & 0x8000000000000000uLL) == 0LL )
                  LOBYTE(v276) = 0;
                else
                  v237 = -(__int64)v237;
                *v239 = v237 / v238;
                v240 = v237 % v238;
                if ( (_BYTE)v276 )
                {
                  v241 = -(__int64)(v237 / v238);
                  *v239 = v241;
                  if ( v240 )
                  {
                    *v239 = v241 - 1;
                    v7 = v238 - v240;
                  }
                }
                else
                {
                  v7 = v237 % v238;
                }
                *(_QWORD *)(v8 + 584) = v7;
                v242 = *(_QWORD *)(v8 + 688);
                *(_OWORD *)(v8 + 696) = *(_OWORD *)(v8 + 672);
                v243 = *(_OWORD *)(v8 + 480);
                *(_QWORD *)(v8 + 712) = v242;
                v244 = *(_QWORD *)(v8 + 496);
                *(_OWORD *)(v8 + 504) = v243;
                v245 = *(_OWORD *)(v8 + 576);
                *(_QWORD *)(v8 + 520) = v244;
                v246 = *(_QWORD *)(v8 + 592);
                *(_OWORD *)(v8 + 600) = v245;
                v247 = *(_OWORD *)(v8 + 648);
                *(_QWORD *)(v8 + 616) = v246;
                v248 = *(_QWORD *)(v8 + 664);
                *(_OWORD *)(v8 + 720) = v247;
                v249 = *(_OWORD *)(v8 + 456);
                *(_QWORD *)(v8 + 736) = v248;
                v250 = *(_QWORD *)(v8 + 472);
                *(_OWORD *)(v8 + 528) = v249;
                v251 = *(_OWORD *)(v8 + 552);
                *(_QWORD *)(v8 + 544) = v250;
                v252 = *(_QWORD *)(v8 + 568);
                *(_OWORD *)(v8 + 624) = v251;
                *(_QWORD *)(v8 + 640) = v252;
                rotate::ROT_DIV(v8 + 768, 16 * v235, 16 * v169);
                v253 = v277;
                *(_QWORD *)(v8 + 784) = 16 * v169;
                LODWORD(v7) = rotate::bScalePlgDDALToPlgDDA(v8, v253);
              }
            }
          }
        }
LABEL_252:
        Win32FreePool((void *)v8);
        return (unsigned int)v7;
      }
      if ( SHIDWORD(v9) < v15 )
        goto LABEL_23;
      if ( SHIDWORD(v9) > v15 )
      {
        v19 = 5;
        goto LABEL_40;
      }
      if ( (int)v9 < v14 )
      {
LABEL_23:
        v19 = 4;
        goto LABEL_42;
      }
      v19 = 5;
    }
    else
    {
      if ( SHIDWORD(v9) < v15 )
        goto LABEL_29;
      if ( SHIDWORD(v9) > v15 )
      {
        v19 = 3;
        goto LABEL_42;
      }
      if ( (int)v9 < v14 )
      {
LABEL_29:
        v19 = 2;
        goto LABEL_40;
      }
      v19 = 3;
    }
    if ( v19 == 3 )
      goto LABEL_42;
    goto LABEL_40;
  }
  return result;
}
