/*
 * XREFs of RenderNineGridInternal @ 0x14009F6F0
 * Callers:
 *     RenderNineGrid @ 0x14009F0E0 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1400A05D0 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1400A0760 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x1400A0BB0 (DNG_InitStretch.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int64 __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned __int64 result; // rax
  int v16; // edi
  unsigned __int64 v17; // r10
  int v18; // esi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r13
  int v21; // r11d
  int v22; // eax
  int v23; // r12d
  int v24; // eax
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // r15
  int v29; // r15d
  int v30; // ebx
  int v31; // edx
  int v32; // ecx
  int v33; // r11d
  int v34; // r9d
  int v35; // eax
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // r15d
  int v39; // r9d
  int v40; // eax
  int v41; // eax
  __int64 v42; // r9
  unsigned __int64 v43; // rtt
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rcx
  int v46; // r9d
  int v47; // r9d
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // r8d
  unsigned int v52; // edx
  char v53; // r15
  int v54; // r14d
  int v55; // edx
  int v56; // esi
  int v57; // r9d
  int v58; // r11d
  int v59; // r9d
  _DWORD *v60; // rcx
  int v61; // r11d
  int v62; // edx
  int v63; // r14d
  int v64; // edi
  __int64 v65; // r11
  __int64 v66; // r15
  int v67; // esi
  int v68; // eax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rtt
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rcx
  unsigned int v74; // r14d
  __int64 v75; // rdi
  __int64 v76; // r15
  int v77; // r8d
  void *v78; // rcx
  char *v79; // rdx
  char *v80; // r9
  int v81; // r10d
  int v82; // r9d
  __int64 v83; // r14
  __int64 v84; // rdx
  unsigned __int64 v85; // kr08_8
  unsigned __int64 v86; // kr10_8
  int v87; // eax
  unsigned __int64 v88; // rdi
  int v89; // eax
  __int64 v90; // rbx
  __int64 v91; // rbx
  int v92; // eax
  int v93; // r12d
  __int64 v94; // rbx
  __int64 v95; // r14
  int v96; // r15d
  int v97; // r8d
  __int64 v98; // rdi
  const void *v99; // rdx
  char *v100; // rcx
  char *v101; // r9
  int v102; // eax
  __int64 v103; // rdi
  int v104; // ebx
  __int64 v105; // r12
  int v106; // edx
  __int64 v107; // rax
  int v108; // r15d
  int v109; // edx
  int v110; // eax
  int v111; // ecx
  int v112; // edi
  int v113; // r15d
  unsigned __int64 v114; // rsi
  int v115; // ebx
  __int64 v116; // r14
  const void *v117; // rdx
  char *v118; // rcx
  char *v119; // r9
  int v120; // r9d
  unsigned __int64 v121; // r11
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // r10
  unsigned __int64 v125; // rcx
  __int64 v126; // r13
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned __int64 v130; // kr18_8
  __int64 v131; // r11
  __int64 v132; // r10
  __int64 v133; // rcx
  unsigned int *v134; // rdx
  unsigned int *v135; // r8
  __int64 v136; // r9
  unsigned int v137; // ecx
  int v138; // [rsp+38h] [rbp-D0h]
  int v139; // [rsp+38h] [rbp-D0h]
  int v140; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v141; // [rsp+40h] [rbp-C8h]
  int v142; // [rsp+40h] [rbp-C8h]
  int v143; // [rsp+48h] [rbp-C0h]
  int v144; // [rsp+48h] [rbp-C0h]
  int v145; // [rsp+50h] [rbp-B8h]
  int v146; // [rsp+50h] [rbp-B8h]
  int v147; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v148; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v149; // [rsp+60h] [rbp-A8h]
  int v150; // [rsp+60h] [rbp-A8h]
  __int64 i; // [rsp+60h] [rbp-A8h]
  int v152; // [rsp+68h] [rbp-A0h]
  unsigned int v153; // [rsp+68h] [rbp-A0h]
  int v154; // [rsp+70h] [rbp-98h]
  unsigned __int64 v155; // [rsp+78h] [rbp-90h]
  int v156; // [rsp+80h] [rbp-88h]
  __int64 v157; // [rsp+88h] [rbp-80h]
  __int64 v158; // [rsp+90h] [rbp-78h]
  int v159; // [rsp+98h] [rbp-70h]
  int v160; // [rsp+A0h] [rbp-68h]
  int v161; // [rsp+A8h] [rbp-60h] BYREF
  int v162; // [rsp+ACh] [rbp-5Ch]
  __int64 v163; // [rsp+B0h] [rbp-58h]
  int v164; // [rsp+B8h] [rbp-50h]
  int v165; // [rsp+BCh] [rbp-4Ch]
  int v166; // [rsp+C0h] [rbp-48h]
  __int64 v167; // [rsp+C8h] [rbp-40h]
  int v168; // [rsp+D0h] [rbp-38h]
  int v169; // [rsp+D4h] [rbp-34h]
  unsigned int v170; // [rsp+D8h] [rbp-30h]
  int v171; // [rsp+DCh] [rbp-2Ch]
  int v172; // [rsp+E4h] [rbp-24h]
  int v173; // [rsp+E8h] [rbp-20h]
  int v174; // [rsp+ECh] [rbp-1Ch]
  int v175; // [rsp+F0h] [rbp-18h]
  int v176; // [rsp+F4h] [rbp-14h]
  int v177; // [rsp+F8h] [rbp-10h]
  int v178; // [rsp+FCh] [rbp-Ch]
  unsigned int v179; // [rsp+100h] [rbp-8h]
  int v180; // [rsp+104h] [rbp-4h]
  int v181; // [rsp+108h] [rbp+0h]
  int v182; // [rsp+10Ch] [rbp+4h]
  char v183; // [rsp+110h] [rbp+8h] BYREF
  char v184; // [rsp+130h] [rbp+28h] BYREF
  int v185; // [rsp+150h] [rbp+48h]
  int v186; // [rsp+154h] [rbp+4Ch]
  int v187; // [rsp+158h] [rbp+50h]
  int v188; // [rsp+15Ch] [rbp+54h]
  int v189; // [rsp+160h] [rbp+58h]
  unsigned __int64 v190; // [rsp+164h] [rbp+5Ch]
  int v191; // [rsp+174h] [rbp+6Ch]
  int v192; // [rsp+178h] [rbp+70h]
  int v193; // [rsp+17Ch] [rbp+74h]
  unsigned __int64 v194; // [rsp+180h] [rbp+78h]
  unsigned __int64 v195; // [rsp+188h] [rbp+80h]
  unsigned __int64 v196; // [rsp+190h] [rbp+88h]
  unsigned __int64 v197; // [rsp+198h] [rbp+90h]
  __int128 v198; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v199; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v200; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v201; // [rsp+1D0h] [rbp+C8h]
  int v204; // [rsp+238h] [rbp+130h]
  int v205; // [rsp+240h] [rbp+138h]
  int v206; // [rsp+258h] [rbp+150h]
  int v207; // [rsp+258h] [rbp+150h]

  v8 = a3[1];
  v10 = *a3;
  v11 = *a4;
  v12 = a4[1];
  v156 = v8 - *a3;
  v13 = v12 - *a4;
  v14 = HIDWORD(*a4);
  result = (unsigned int)(HIDWORD(v12) - HIDWORD(*a4));
  v155 = HIDWORD(v8);
  v159 = result;
  v141 = HIDWORD(*a3);
  v160 = HIDWORD(v8) - HIDWORD(*a3);
  if ( v13 >= 128000000 || (int)result >= 128000000 || v13 <= -128000000 || (int)result <= -128000000 )
    return result;
  memset_0(&v161, 0, 0xF8uLL);
  v16 = v10 - v11;
  v17 = *(_QWORD *)(a1 + 48);
  v18 = v8 - v11;
  LODWORD(v155) = v155 - v14;
  v19 = *(_QWORD *)(a2 + 48);
  v20 = v17 + *(unsigned int *)(a1 + 40);
  v21 = *(_DWORD *)(a2 + 32);
  v197 = v19 + *(unsigned int *)(a2 + 40);
  v193 = *(_DWORD *)(a1 + 32);
  v22 = *(_DWORD *)(a1 + 64);
  v196 = v19;
  v148 = v17;
  v204 = v22 / 4;
  v23 = v22 / 4;
  v164 = v22 / 4;
  v24 = *(_DWORD *)(a2 + 64);
  v142 = v141 - v14;
  v194 = v17;
  v195 = v20;
  v205 = v24 / 4;
  v168 = v24 / 4;
  v154 = v16;
  v161 = v16;
  v162 = v18;
  v157 = *(_QWORD *)(a1 + 56) + 4 * (v204 * (v159 - v142 - 1) - (__int64)v16);
  v25 = *a5;
  v26 = a5[1];
  v27 = a5[2] - v25;
  v206 = a5[3] - v26;
  v28 = v24 / 4 * (v206 - 1);
  v158 = *(_QWORD *)(a2 + 56) + 4 * (v25 + v28 + v24 / 4 * v26);
  if ( (*a6 & 0x20) != 0 )
  {
    v82 = v23;
    v92 = v23 * (v159 - 1);
    v93 = v142;
    v94 = v157 + 4 * (v82 * v142 - (__int64)v92);
    result = v155;
    v95 = v158 + 4 * (v205 * v142 - v28);
    v96 = a5[3] - v26;
    if ( v206 >= (int)v155 )
      v96 = v155;
    if ( v27 >= v18 )
      v27 = v18;
    if ( v27 > v16 && v142 < v96 )
    {
      result = v16;
      v97 = 4 * (v27 - v16);
      v207 = v97;
      v98 = 4LL * v16;
      while ( 1 )
      {
        v99 = (const void *)(v98 + v95);
        v100 = (char *)(v98 + v94);
        if ( v97 <= 0 )
          break;
        v101 = &v100[v97];
        if ( v101 <= v100 )
          goto LABEL_65;
        result = (unsigned __int64)v99 + v97;
        if ( result <= (unsigned __int64)v99 || (unsigned __int64)v101 > v20 || v17 > (unsigned __int64)v100 )
          goto LABEL_65;
        if ( (result > v20 || v17 > (unsigned __int64)v99) && (result > v197 || v196 > (unsigned __int64)v99) )
          goto LABEL_65;
        memmove(v100, v99, v97);
        v82 = v204;
        ++v93;
        result = v205;
        v17 = v148;
        v97 = v207;
        v94 += 4LL * v204;
        v95 += 4LL * v205;
        if ( v93 >= v96 )
          goto LABEL_66;
      }
    }
    goto LABEL_66;
  }
  v29 = a6[1];
  v30 = 1;
  v187 = *a6 & 2;
  v166 = v156;
  v170 = v206;
  v31 = a6[2];
  v165 = v13;
  v169 = v27;
  v171 = v21;
  v172 = v29;
  v143 = v31;
  v175 = v31;
  if ( v13 - v31 - v29 <= 0 || v27 - v31 - v29 <= 0 )
  {
    v32 = 0;
    v182 = 0;
    if ( v31 + v29 )
    {
      v32 = v182;
      v33 = v13 * v29 / (v29 + v31);
      v185 = v33;
    }
    else
    {
      v33 = 0;
      v185 = 0;
    }
    v34 = v13 - v33;
    v138 = v13 - v33;
    v186 = v13 - v33;
  }
  else
  {
    v32 = 1;
    v182 = 1;
    v34 = v31;
    v138 = v31;
    v186 = v31;
    v33 = v29;
    v185 = v29;
  }
  v173 = v16;
  if ( v33 >= v18 )
    v35 = v18;
  else
    v35 = v33;
  v174 = v35;
  if ( !v32 && v33 )
  {
    DNG_InitStretch((unsigned int)&v183, v33, v29, v16, v35);
    v17 = v194;
    v34 = v186;
    v31 = v175;
    v16 = v161;
    v20 = v195;
    v33 = v185;
    v29 = v172;
    v27 = v169;
    v13 = v165;
    v23 = v164;
    v18 = v162;
    v148 = v194;
    v138 = v186;
    v143 = v175;
    v154 = v161;
  }
  v36 = v13 - v34;
  v37 = (unsigned int)(v27 - v31 - v29);
  v178 = v37;
  v38 = v13 - v34 - v33;
  v152 = v13 - v34;
  v179 = v38;
  v39 = v16;
  if ( v33 > v16 )
    v39 = v33;
  v180 = v39;
  if ( (int)(v33 + v38) < v18 )
    v40 = v38 + v33;
  else
    v40 = v18;
  v181 = v40;
  v145 = v40;
  v41 = v182;
  if ( v182 )
  {
    v192 = v145 - v33;
    v42 = (unsigned int)(v39 - v33);
    v191 = v42;
    v149 = ((v37 << 32) - 1) / (unsigned __int64)v38 + 1;
    v43 = v37 << 32;
    v44 = ((v37 << 32) / (unsigned __int64)v38) >> 1;
    v45 = (v43 / v38) >> 33;
    v190 = v149;
    if ( (int)v42 <= 5 )
    {
      if ( (int)v42 > 0 )
      {
        do
        {
          v86 = __PAIR64__(v45, v44) + v149;
          LODWORD(v45) = (__PAIR64__(v45, v44) + v149) >> 32;
          LODWORD(v44) = v86;
          --v42;
        }
        while ( v42 );
        v17 = v148;
      }
    }
    else
    {
      v146 = (((unsigned int)v44 + (int)v42 * (unsigned __int64)(unsigned int)v149) >> 32) + v42 * HIDWORD(v149) + v45;
      LODWORD(v44) = v44 + v42 * v149;
      LODWORD(v45) = v146;
    }
    v31 = v143;
    v41 = v182;
    v188 = v45;
    v36 = v152;
    v189 = v44;
  }
  v46 = v16;
  if ( v36 > v16 )
    v46 = v36;
  v47 = v46 - v38 - v33;
  v176 = v47;
  if ( v13 < v18 )
    v18 = v13;
  v48 = v18 - v38 - v33;
  v177 = v48;
  if ( !v41 && v138 )
  {
    DNG_InitStretch((unsigned int)&v184, v138, v31, v47, v48);
    v17 = v194;
    v20 = v195;
    v23 = v164;
    v148 = v194;
    v154 = v161;
  }
  v49 = v159;
  v50 = a6[4];
  v51 = v159 - v50;
  v52 = a6[3];
  v139 = v159 - v50;
  v153 = v52;
  if ( (int)(v159 - v50 - v52) <= 0 || (int)(v206 - v52 - v50) <= 0 )
  {
    v53 = 0;
    if ( v50 + v52 )
      v54 = (int)(v159 * v52) / (int)(v50 + v52);
    else
      v54 = 0;
    v144 = v54;
    v55 = v159 - v54;
  }
  else
  {
    v144 = a6[3];
    v53 = 1;
    v55 = a6[4];
  }
  v56 = v159 - v55;
  v57 = v142;
  v58 = v155;
  if ( v159 - v55 > v142 )
    v57 = v159 - v55;
  if ( v159 < (int)v155 )
    v58 = v159;
  if ( (int)v155 <= v56 )
    goto LABEL_35;
  v163 = v157;
  v167 = v158;
  if ( v50 != v55 )
  {
    if ( v55 > 0 )
    {
      v198 = 0LL;
      v199 = 0LL;
      DNG_InitStretch((unsigned int)&v198, v55, v50, v159 - v58, v159 - v57);
      DNG_StretchCol(&v161, &v198);
      v17 = v194;
      v59 = v161;
      v20 = v195;
      v23 = v164;
      v51 = v139;
      v148 = v194;
      v154 = v161;
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  v102 = v50 - v57 - v55 + v159 - 1;
  v163 = v157 - 4LL * v204 * v102;
  v167 = v158 - 4LL * v205 * v102;
  if ( v57 >= v58 )
  {
LABEL_35:
    v59 = v154;
    goto LABEL_36;
  }
  v103 = (unsigned int)(v58 - v57);
  do
  {
    DNG_DrawRow(&v161);
    v163 += 4LL * v204;
    v167 += 4LL * v205;
    --v103;
  }
  while ( v103 );
  v17 = v194;
  v59 = v161;
  v20 = v195;
  v23 = v164;
  v51 = v139;
  v49 = v159;
  v148 = v194;
  v154 = v161;
LABEL_36:
  v60 = a6;
  v61 = v142;
  result = (unsigned int)a6[3];
  v62 = a6[4];
  v63 = v206 - result - v62;
  v64 = v49 - result - v62;
  if ( v53 )
  {
    if ( v63 > 0 && v64 > 0 && v142 < v56 )
    {
      result = v155;
      if ( (int)v155 > v144 )
      {
        v65 = v157 - 4LL * v204 * v62;
        v66 = v158 - 4LL * v205 * v62;
        v67 = v142;
        if ( (int)v153 > v142 )
          v67 = v153;
        if ( v187 )
        {
          v104 = v139;
          v105 = v65 + 4 * ((int)(v204 * (v67 - v153)) - (__int64)(v204 * (v64 - 1)));
          v163 = v105;
          v106 = (int)(v67 - v153) % v63;
          v107 = v66 + 4 * (v168 * v106 - (__int64)(v205 * (v63 - 1)));
          v108 = v63 - v106;
          v167 = v107;
          v109 = v155;
          v110 = v64;
          v111 = v155;
          if ( v63 < v64 )
            v110 = v63;
          if ( v139 < (int)v155 )
            v111 = v139;
          if ( v67 + v110 < v111 )
          {
            if ( v63 < v64 )
              v64 = v63;
            v112 = v67 + v64;
          }
          else
          {
            v112 = v155;
            if ( v139 < (int)v155 )
              v112 = v139;
          }
          if ( v67 < v112 )
          {
            v126 = 4LL * v204;
            v127 = (unsigned int)(v112 - v67);
            do
            {
              DNG_DrawRow(&v161);
              if ( --v108 )
              {
                v128 = v167;
              }
              else
              {
                v108 = v63;
                v128 = v167 - 4LL * v205 * v63;
              }
              v105 = v126 + v163;
              v167 = 4LL * v205 + v128;
              v163 += v126;
              --v127;
            }
            while ( v127 );
            v17 = v194;
            v20 = v195;
            v59 = v161;
            v104 = v139;
            v109 = v155;
            v148 = v194;
          }
          v113 = v109;
          result = 4LL * v204 * v63;
          v114 = v105 - result;
          if ( v104 < v109 )
            v113 = v104;
          if ( v112 < v113 )
          {
            v115 = 4 * v166;
            result = v59;
            v116 = 4LL * v59;
            do
            {
              v117 = (const void *)(v116 + v114);
              v118 = (char *)(v116 + v105);
              if ( v115 <= 0 )
                break;
              v119 = &v118[v115];
              if ( v119 <= v118 )
                break;
              result = (unsigned __int64)v117 + v115;
              if ( result <= (unsigned __int64)v117 || (unsigned __int64)v119 > v20 || v17 > (unsigned __int64)v118 )
                break;
              if ( (result > v20 || v17 > (unsigned __int64)v117) && (result > v197 || v196 > (unsigned __int64)v117) )
                break;
              memmove(v118, v117, v115);
              ++v112;
              v17 = v148;
              result = 4LL * v204;
              v105 += result;
              v114 += result;
            }
            while ( v112 < v113 );
          }
        }
        else
        {
          v68 = v155;
          if ( v51 < (int)v155 )
            v68 = v51;
          v147 = v64 + v153 - v68;
          v69 = (unsigned int)v64;
          v140 = v64 + v153 - v67;
          v70 = (((unsigned __int64)(unsigned int)v63 << 32) - 1) / (unsigned int)v64 + 1;
          v71 = (unsigned __int64)(unsigned int)v63 << 32;
          v200 = v70;
          v72 = (v71 / v69) >> 1;
          v201 = HIDWORD(v70);
          v73 = (v71 / v69) >> 33;
          v150 = v73;
          if ( v147 <= 5 )
          {
            if ( v147 > 0 )
            {
              v84 = (unsigned int)v147;
              do
              {
                v85 = __PAIR64__(v73, v72) + v70;
                LODWORD(v73) = (__PAIR64__(v73, v72) + v70) >> 32;
                LODWORD(v72) = v85;
                --v84;
              }
              while ( v84 );
            }
          }
          else
          {
            v73 = ((unsigned int)v72 + v147 * (unsigned __int64)(unsigned int)v70) >> 32;
            LODWORD(v72) = v72 + v147 * v70;
            LODWORD(v73) = v150 + v147 * HIDWORD(v70) + v73;
          }
          v74 = 0;
          v75 = v65 - 4LL * v23 * v147;
          result = 4LL * v168 * (int)v73;
          v76 = v66 - result;
          for ( i = v65 - 4LL * v23 * v140; v75 != i; v75 -= 4LL * v23 )
          {
            if ( v30 )
            {
              v163 = v75;
              v167 = v76;
              DNG_DrawRow(&v161);
              v20 = v195;
              v23 = v164;
              v148 = v194;
              v154 = v161;
            }
            else
            {
              v77 = 4 * v166;
              result = v59 + (__int64)v23;
              v78 = (void *)(v75 + 4LL * v59);
              v79 = (char *)(v75 + 4 * result);
              if ( 4 * v166 <= 0 )
                break;
              result = (unsigned __int64)v78 + v77;
              if ( result <= (unsigned __int64)v78 )
                break;
              v80 = &v79[v77];
              if ( v80 <= v79 || result > v20 || v17 > (unsigned __int64)v78 )
                break;
              if ( ((unsigned __int64)v80 > v20 || v17 > (unsigned __int64)v79)
                && ((unsigned __int64)v80 > v197 || v196 > (unsigned __int64)v79) )
              {
                break;
              }
              memmove(v78, v79, v77);
            }
            v30 = ((int)v72 + (int)v200 < (unsigned int)v72) + (_DWORD)v201;
            v74 += v30;
            if ( v74 < v170 )
              v76 -= 4LL * v168 * v30;
            v17 = v148;
            LODWORD(v72) = v72 + v200;
            v59 = v154;
            result = -(__int64)v23;
          }
        }
        v61 = v142;
        v60 = a6;
      }
    }
  }
  v81 = v155;
  if ( v144 < (int)v155 )
    v81 = v144;
  if ( v61 >= v144 )
  {
LABEL_65:
    v82 = v204;
    goto LABEL_66;
  }
  v82 = v204;
  v87 = v206 - v60[3];
  v163 = v157 - 4LL * v204 * (v159 - v144);
  result = 4LL * v205 * v87;
  v88 = v158 - result;
  v167 = v158 - result;
  if ( v153 == v144 )
  {
    v89 = v153 - v61 - 1;
    v90 = v157 - 4LL * v204 * (v159 - v144) - 4LL * v204 * v89;
    result = 4LL * v205 * v89;
    v163 = v90;
    v167 = v88 - result;
    if ( v61 >= v81 )
      goto LABEL_66;
    v91 = (unsigned int)(v81 - v61);
    do
    {
      result = DNG_DrawRow(&v161);
      v163 += 4LL * v204;
      v167 += 4LL * v205;
      --v91;
    }
    while ( v91 );
    goto LABEL_65;
  }
  if ( v144 > 0 )
  {
    HIDWORD(v199) = v144 - v61;
    v120 = v144 - v81;
    DWORD2(v199) = v120;
    v83 = 0LL;
    *(_QWORD *)&v199 = 0LL;
    v121 = (((unsigned __int64)v153 << 32) - 1) / (unsigned int)v144 + 1;
    v122 = ((unsigned __int64)v153 << 32) / (unsigned int)v144;
    *((_QWORD *)&v198 + 1) = v121;
    v123 = v122 >> 1;
    v124 = v122 >> 33;
    if ( v120 <= 5 )
    {
      if ( v120 > 0 )
      {
        v129 = (unsigned int)v120;
        do
        {
          v130 = __PAIR64__(v124, v123) + v121;
          LODWORD(v124) = (__PAIR64__(v124, v123) + v121) >> 32;
          LODWORD(v123) = v130;
          --v129;
        }
        while ( v129 );
      }
    }
    else
    {
      v125 = (unsigned int)v123 + v120 * (unsigned __int64)(unsigned int)v121;
      LODWORD(v123) = v123 + v120 * v121;
      LODWORD(v124) = HIDWORD(v125) + v120 * HIDWORD(v121) + v124;
    }
    *(_QWORD *)&v198 = __PAIR64__(v123, v124);
    result = DNG_StretchCol(&v161, &v198);
    v82 = v204;
    goto LABEL_67;
  }
LABEL_66:
  v83 = 0LL;
LABEL_67:
  if ( a8 && v160 <= *(_DWORD *)(a1 + 36) && v156 <= *(_DWORD *)(a1 + 32) && v160 > 0 )
  {
    v131 = (unsigned int)v160;
    result = (unsigned int)(v156 / 2);
    v132 = 4LL * v82;
    do
    {
      v133 = *(_QWORD *)(a1 + 56);
      v134 = (unsigned int *)(v133 + v83);
      v135 = (unsigned int *)(v83 + 4LL * v156 + v133 - 4);
      if ( v156 / 2 > 0 )
      {
        v136 = (unsigned int)(v156 / 2);
        do
        {
          v137 = *v134++;
          result = *v135--;
          *(v134 - 1) = result;
          v135[1] = v137;
          --v136;
        }
        while ( v136 );
      }
      v83 += v132;
      --v131;
    }
    while ( v131 );
  }
  return result;
}
