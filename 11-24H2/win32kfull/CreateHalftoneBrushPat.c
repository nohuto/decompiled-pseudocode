/*
 * XREFs of CreateHalftoneBrushPat @ 0x1402F49F0
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1402F3278 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     ComputeRGBLUTAA @ 0x14013DE44 (ComputeRGBLUTAA.c)
 *     CachedHalftonePattern @ 0x1401AAEDC (CachedHalftonePattern.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v8; // r12
  unsigned int v10; // edi
  __int128 v11; // xmm0
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _BYTE *v25; // r11
  unsigned int v26; // r10d
  __int64 v27; // r14
  unsigned int v28; // r9d
  unsigned __int16 *v29; // r8
  char v30; // dl
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // r11
  unsigned int v35; // r10d
  unsigned __int16 *v36; // r9
  unsigned int v37; // eax
  char v38; // r8
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  _BYTE *v44; // r11
  unsigned int v45; // r10d
  __int64 v46; // r14
  unsigned int v47; // r9d
  unsigned __int16 *v48; // r8
  char v49; // dl
  unsigned int v50; // ecx
  size_t v51; // r12
  char *v52; // r15
  unsigned int v53; // r14d
  unsigned int v54; // eax
  __int64 v55; // rbx
  const void *v56; // r14
  int i; // edi
  char v58; // r10
  __int64 v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // r14d
  unsigned __int16 *v63; // r11
  unsigned int v64; // eax
  unsigned __int16 *v65; // r8
  unsigned int v66; // ecx
  unsigned __int16 *v67; // rdi
  unsigned int v68; // esi
  int v69; // eax
  unsigned int v70; // r11d
  char v71; // r10
  unsigned int v72; // edx
  unsigned int v73; // ecx
  int v74; // eax
  char v75; // r10
  char v76; // r10
  _BYTE *v77; // rdx
  unsigned int v78; // r8d
  char v79; // r10
  __int64 v80; // rcx
  unsigned int v81; // r13d
  __int64 v82; // rdx
  int v83; // r14d
  unsigned __int16 *v84; // rax
  unsigned int v85; // r13d
  unsigned __int16 *v86; // r11
  _BYTE *v87; // r12
  unsigned int v88; // r15d
  char v89; // dl
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // r15d
  unsigned __int16 *v93; // r11
  int v94; // edx
  unsigned int v95; // ecx
  __int64 v97; // rax
  unsigned int v98; // r10d
  __int64 v99; // rcx
  int v100; // r14d
  unsigned __int16 *v101; // r11
  int v102; // r10d
  unsigned __int16 *v103; // r9
  unsigned __int64 v104; // rdx
  _BYTE *v105; // r14
  unsigned __int64 v106; // r11
  unsigned __int64 v107; // rdi
  unsigned __int64 v108; // rsi
  int v109; // eax
  unsigned __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r11
  __int64 v114; // r8
  _BYTE *v115; // r9
  unsigned int v116; // r10d
  unsigned __int16 *v117; // r8
  int v118; // eax
  unsigned __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned int v121; // r11d
  __int64 v122; // rdx
  int v123; // r14d
  unsigned __int16 *v124; // rax
  unsigned int v125; // r11d
  unsigned __int16 *v126; // r10
  unsigned int v127; // r8d
  _DWORD *v128; // r11
  unsigned int v129; // edx
  int v130; // eax
  int v131; // ecx
  int v132; // r10d
  __int64 v133; // r15
  __int64 v134; // r11
  __int64 v135; // rdx
  _BYTE *v136; // r8
  unsigned int v137; // r9d
  unsigned __int16 *v138; // rdx
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // r11
  __int64 v143; // r8
  _BYTE *v144; // r9
  unsigned int v145; // r10d
  __int64 v146; // r14
  unsigned __int16 *v147; // r8
  int v148; // eax
  unsigned __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rdx
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // r8
  _BYTE *v154; // r10
  unsigned int v155; // r11d
  unsigned __int16 *v156; // r8
  int v157; // eax
  char v158; // dl
  unsigned int v159; // ecx
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // r11
  __int64 v163; // r8
  _BYTE *v164; // r9
  unsigned int v165; // r10d
  __int64 v166; // r14
  unsigned __int16 *v167; // r8
  int v168; // eax
  unsigned __int64 v169; // rdx
  unsigned int v170; // [rsp+34h] [rbp-CCh]
  int v171; // [rsp+34h] [rbp-CCh]
  int v172; // [rsp+34h] [rbp-CCh]
  int v173; // [rsp+34h] [rbp-CCh]
  int v174; // [rsp+38h] [rbp-C8h]
  unsigned int v175; // [rsp+38h] [rbp-C8h]
  unsigned int v176; // [rsp+38h] [rbp-C8h]
  unsigned int v177; // [rsp+38h] [rbp-C8h]
  unsigned int v178; // [rsp+38h] [rbp-C8h]
  unsigned int v179; // [rsp+3Ch] [rbp-C4h]
  unsigned int v180; // [rsp+3Ch] [rbp-C4h]
  int v181; // [rsp+3Ch] [rbp-C4h]
  int v182; // [rsp+3Ch] [rbp-C4h]
  __int64 v184; // [rsp+48h] [rbp-B8h]
  _BYTE *v185; // [rsp+48h] [rbp-B8h]
  _BYTE *v186; // [rsp+48h] [rbp-B8h]
  _BYTE *v187; // [rsp+48h] [rbp-B8h]
  _WORD *v188; // [rsp+48h] [rbp-B8h]
  __int16 v189; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v190; // [rsp+52h] [rbp-AEh]
  __int128 v191; // [rsp+58h] [rbp-A8h]
  __int64 v192; // [rsp+68h] [rbp-98h]
  unsigned int v193; // [rsp+70h] [rbp-90h]
  __int64 v194; // [rsp+78h] [rbp-88h]
  _BYTE *v195; // [rsp+80h] [rbp-80h]
  __int64 v196; // [rsp+88h] [rbp-78h]
  _QWORD v197[3]; // [rsp+90h] [rbp-70h] BYREF
  int v198; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v199; // [rsp+B5h] [rbp-4Bh]
  unsigned __int8 v200; // [rsp+B6h] [rbp-4Ah]
  unsigned __int8 v201; // [rsp+B7h] [rbp-49h]
  int v202; // [rsp+E0h] [rbp-20h]
  int v203; // [rsp+E4h] [rbp-1Ch]
  int v204; // [rsp+E8h] [rbp-18h]
  unsigned int v205; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v206; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v207; // [rsp+F8h] [rbp-8h]
  unsigned int v208; // [rsp+100h] [rbp+0h]
  unsigned int v209; // [rsp+104h] [rbp+4h]

  v195 = (_BYTE *)a3;
  v8 = 0LL;
  memset_0(v197, 0, 0x48uLL);
  v189 = 0;
  v190 = 0;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (int *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(a1, a3, a2, &v189) == 1 )
  {
    v205 = CachedHalftonePattern(a1, a3, (__int64)v197, 0, 0, 0);
    v10 = v205;
    if ( (int)v205 > 0 )
    {
      v11 = *(_OWORD *)(a1 + 3960);
      v12 = *(unsigned __int16 *)(a1 + 166);
      v13 = *(_DWORD *)(a3 + 56);
      v14 = *(unsigned __int16 *)(a1 + 170);
      v170 = v12;
      v192 = *(_QWORD *)(a1 + 3976);
      v191 = v11;
      if ( (v13 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v191));
      v15 = a1 + 548;
      v174 = v13 & 0x2000000;
      if ( (v13 & 0x2000000) == 0 )
        v15 = v8;
      v194 = v15;
      v16 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v189 + 3984);
      v17 = *(_DWORD *)(a1 + 4LL * ((unsigned int)HIBYTE(v189) + 256) + 3984);
      v18 = *(_DWORD *)(a1 + 4LL * ((unsigned int)v190 + 512) + 3984);
      EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
      v19 = (unsigned __int8)v195[31];
      if ( v19 > 0xF8 )
      {
        if ( v19 != 249 )
        {
          switch ( v19 )
          {
            case 0xFAu:
              if ( v14 )
              {
                if ( v174 )
                {
                  v140 = v198;
                  v141 = a5;
                  v142 = v197[0];
                  do
                  {
                    v143 = v142;
                    v144 = a4;
                    v142 += v140;
                    a4 += v141;
                    --v14;
                    v145 = v12;
                    if ( v12 )
                    {
                      v146 = v194;
                      v147 = (unsigned __int16 *)(v143 + 2);
                      do
                      {
                        v148 = *v147;
                        v149 = (v16 - *(v147 - 1)) & 0x30000 | (unsigned __int64)((v18 - v147[1]) & 0xE00000);
                        v147 += 3;
                        *v144++ = *(_BYTE *)((((v17 - v148) & 0x1C0000 | v149) >> 16) + v146);
                        --v145;
                      }
                      while ( v145 );
                      v12 = v170;
                      v140 = v198;
                      v141 = a5;
                    }
                  }
                  while ( v14 );
                }
                else
                {
                  v150 = v198;
                  v151 = a5;
                  v152 = v197[0];
                  do
                  {
                    v153 = v152;
                    v154 = a4;
                    v152 += v150;
                    a4 += v151;
                    --v14;
                    v207 = v152;
                    v155 = v12;
                    if ( v12 )
                    {
                      v156 = (unsigned __int16 *)(v153 + 2);
                      do
                      {
                        v157 = *v156;
                        v158 = ((v18 - v156[1]) >> 16) & 0xE0;
                        v159 = (v16 - *(v156 - 1)) >> 16;
                        v156 += 3;
                        *v154++ = ((v17 - v157) >> 16) & 0x1C | v159 & 3 | v158;
                        --v155;
                      }
                      while ( v155 );
                      v152 = v207;
                      v150 = v198;
                      v151 = a5;
                    }
                  }
                  while ( v14 );
                }
              }
              break;
            case 0xFBu:
              v132 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v16 + v17 + v18) >> 8)]
                   + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v16 + v17 + v18)];
              if ( v14 )
              {
                v133 = v198;
                v134 = v197[0];
                do
                {
                  v135 = v134;
                  v136 = a4;
                  v134 += v133;
                  a4 += a5;
                  --v14;
                  v137 = v12;
                  if ( v12 )
                  {
                    v138 = (unsigned __int16 *)(v135 + 2);
                    do
                    {
                      v139 = *v138;
                      v138 += 3;
                      *v136++ = BYTE13(v191) ^ ((unsigned int)(v132 - v139) >> 12);
                      --v137;
                    }
                    while ( v137 );
                  }
                }
                while ( v14 );
              }
              break;
            case 0xFCu:
            case 0xFDu:
              if ( v14 )
              {
                v120 = v198;
                v121 = v12;
                v122 = a5;
                v123 = v12 & 1;
                v124 = (unsigned __int16 *)v197[0];
                v125 = v121 >> 1;
                LODWORD(v194) = v125;
                do
                {
                  v126 = v124;
                  v188 = a4;
                  a4 += v122;
                  --v14;
                  v207 = (unsigned __int64)v124 + v120;
                  v127 = v125;
                  if ( v125 )
                  {
                    v128 = v188;
                    do
                    {
                      v129 = DWORD2(v191) & (v18 - v126[5]) | (((unsigned int)v191 & (v16 - *v126) | DWORD1(v191) & (v17 - v126[1]) | DWORD2(v191) & (v18 - v126[2])) >> 16);
                      v130 = v126[3];
                      v131 = DWORD1(v191) & (v17 - v126[4]);
                      v126 += 6;
                      *v128++ = HIDWORD(v191) ^ (v191 & (v16 - v130) | v131 | v129);
                      --v127;
                    }
                    while ( v127 );
                    v188 = v128;
                    v125 = v194;
                  }
                  if ( v123 )
                    *v188 = HIWORD(v191) ^ (WORD1(v191) & ((v16 - *v126) >> 16) | WORD3(v191) & ((v17 - v126[1]) >> 16) | WORD5(v191) & ((v18 - v126[2]) >> 16));
                  v124 = (unsigned __int16 *)v207;
                  v120 = v198;
                  v122 = a5;
                }
                while ( v14 );
              }
              break;
            case 0xFEu:
              if ( v14 )
              {
                v111 = v198;
                v112 = a5;
                v113 = v197[0];
                do
                {
                  v114 = v113;
                  v115 = a4;
                  v113 += v111;
                  a4 += v112;
                  --v14;
                  v116 = v12;
                  if ( v12 )
                  {
                    v117 = (unsigned __int16 *)(v114 + 4);
                    do
                    {
                      v118 = *v117;
                      v119 = (v17 - *(v117 - 1)) & 0x380000 | (unsigned __int64)((v16 - *(v117 - 2)) & 0x1C00000);
                      v117 += 3;
                      *v115++ = VGA256Xlate[((v18 - v118) & 0x70000 | v119) >> 16];
                      --v116;
                    }
                    while ( v116 );
                    v12 = v170;
                    v111 = v198;
                    v112 = a5;
                  }
                }
                while ( v14 );
              }
              break;
            default:
              if ( v14 )
              {
                v97 = v198;
                v98 = v12;
                v99 = a5;
                v100 = v12 & 1;
                v101 = (unsigned __int16 *)v197[0];
                v102 = v98 >> 1;
                LODWORD(v196) = v102;
                v173 = v100;
                do
                {
                  --v14;
                  v195 = a4;
                  a4 += v99;
                  v182 = v14;
                  v103 = v101;
                  v187 = a4;
                  v101 = (unsigned __int16 *)((char *)v101 + v97);
                  v207 = (unsigned __int64)v101;
                  if ( v102 )
                  {
                    v104 = DWORD1(v191);
                    v105 = v195;
                    v106 = HIDWORD(v192);
                    v107 = (unsigned int)v192;
                    v108 = HIDWORD(v191);
                    do
                    {
                      v109 = *v103;
                      v110 = (v106 >> 16) & ((unsigned __int64)(v18 - v103[5]) >> 16) | (v107 >> 16) & ((unsigned __int64)(v17 - v103[4]) >> 16) | (v108 >> 16) & ((unsigned __int64)(v16 - v103[3]) >> 16) | ((unsigned __int64)DWORD2(v191) >> 16) & ((unsigned __int64)(v18 - v103[2]) >> 16) | (v104 >> 16) & ((unsigned __int64)(v17 - v103[1]) >> 16);
                      v103 += 6;
                      v104 = DWORD1(v191);
                      *v105++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v191 >> 16) & ((unsigned __int64)(v16 - v109) >> 16) | v110) ^ 0x77];
                      --v102;
                    }
                    while ( v102 );
                    v14 = v182;
                    a4 = v187;
                    v102 = v196;
                    v101 = (unsigned __int16 *)v207;
                    v195 = v105;
                    v100 = v173;
                  }
                  if ( v100 )
                    *v195 = VGA16Xlate[(((unsigned int)v191 & (v16 - *v103) | DWORD1(v191) & (v17 - v103[1]) | (unsigned __int64)(DWORD2(v191) & (v18 - v103[2]))) ^ 0x700000) >> 16];
                  v97 = v198;
                  v99 = a5;
                }
                while ( v14 );
              }
              break;
          }
          return v205;
        }
      }
      else if ( v19 != 248 )
      {
        if ( v19 == 1 )
        {
          v78 = ((v16 + v17 + v18) ^ 0xFFF0) >> 4;
          v79 = -((v13 & 0x4000) == 0);
          if ( v14 )
          {
            v80 = v198;
            v81 = v12;
            v82 = a5;
            v83 = v12 & 7;
            v84 = (unsigned __int16 *)v197[0];
            v85 = v81 >> 3;
            do
            {
              v86 = v84;
              v186 = a4;
              v87 = a4;
              a4 += v82;
              v207 = (unsigned __int64)v84 + v80;
              --v14;
              v88 = v85;
              if ( v85 )
              {
                do
                {
                  v89 = ((v78 - v86[7]) >> 16) & 0x20 | ((v78 - v86[16]) >> 16) & 4 | ((v78 - v86[19]) >> 16) & 2 | ((v78 - v86[4]) >> 16) & 0x40 | ((v78 - v86[22]) >> 16) & 1 | ((v78 - v86[1]) >> 16) & 0x80;
                  v90 = v86[10];
                  v91 = (v78 - v86[13]) >> 16;
                  v86 += 24;
                  *v87++ = v79 ^ (((v78 - v90) >> 16) & 0x10 | v91 & 8 | v89);
                  --v88;
                }
                while ( v88 );
                v186 = v87;
              }
              v92 = v83;
              if ( v83 )
              {
                v93 = v86 + 1;
                v94 = 0;
                do
                {
                  v95 = v78 - *v93;
                  v93 += 3;
                  v94 = (2 * v94) | v95 & 0x10000;
                  --v92;
                }
                while ( v92 );
                v172 = v94;
                BYTE2(v172) = v79 ^ BYTE2(v94);
                *v186 = (unsigned int)(v172 << (8 - v83)) >> 16;
              }
              v84 = (unsigned __int16 *)v207;
              v80 = v198;
              v82 = a5;
            }
            while ( v14 );
          }
        }
        else if ( v19 == 2 )
        {
          v58 = (v13 & 0x4000) == 0 ? 0x77 : 0;
          if ( v14 )
          {
            v59 = v198;
            v60 = v12;
            v61 = a5;
            v62 = v12 & 1;
            v63 = (unsigned __int16 *)v197[0];
            v64 = v60 >> 1;
            LODWORD(v194) = v64;
            v171 = v62;
            do
            {
              --v14;
              v195 = a4;
              a4 += v61;
              v181 = v14;
              v65 = v63;
              v185 = a4;
              v63 = (unsigned __int16 *)((char *)v63 + v59);
              v66 = v64;
              v207 = (unsigned __int64)v63;
              if ( v64 )
              {
                v67 = v65;
                v193 = WORD1(v191);
                v68 = WORD1(v191);
                v203 = HIWORD(DWORD1(v191));
                v178 = WORD1(v192);
                v202 = HIWORD(HIDWORD(v192));
                LODWORD(v196) = HIWORD(DWORD2(v191));
                v204 = HIWORD(HIDWORD(v191));
                do
                {
                  v69 = v67[5];
                  v193 = v66 - 1;
                  v70 = v18 - v67[2];
                  v71 = v202 & ((v18 - v69) >> 16) | v178 & ((v17 - v67[4]) >> 16);
                  v72 = v16 - v67[3];
                  v73 = (v17 - v67[1]) >> 16;
                  v74 = *v67;
                  v67 += 6;
                  v75 = v203 & v73 | v71;
                  v66 = v193;
                  v76 = v204 & BYTE2(v72) | v75;
                  v77 = v195;
                  *v195 = ((v13 & 0x4000) == 0 ? 0x77 : 0) ^ (v196 & BYTE2(v70) | v68 & ((v16 - v74) >> 16) | v76);
                  v195 = v77 + 1;
                }
                while ( v66 );
                a4 = v185;
                v62 = v171;
                v58 = (v13 & 0x4000) == 0 ? 0x77 : 0;
                v63 = (unsigned __int16 *)v207;
                v206 = v67;
                v65 = v67;
                v14 = v181;
              }
              if ( v62 )
                *v195 = v58 ^ (((v16 - *v65) >> 16) & BYTE2(v191) | ((v17 - v65[1]) >> 16) & BYTE6(v191) | ((v18 - v65[2]) >> 16) & BYTE10(v191));
              v64 = v194;
              v59 = v198;
              v61 = a5;
            }
            while ( v14 );
          }
        }
        else
        {
          v20 = 3;
          v196 = 3LL;
          switch ( v19 )
          {
            case 5u:
            case 6u:
              a4[v199] = ~(_BYTE)v18;
              a4[v200] = ~(_BYTE)v17;
              a4[v201] = ~(_BYTE)v16;
              if ( (_BYTE)v19 == 5 )
              {
                v51 = 3 * v12;
              }
              else
              {
                v20 = 4;
                a4[3] = 0;
                v196 = 4LL;
                v51 = 4 * v12;
              }
              v52 = &a4[v20];
              v53 = v51 - v20;
              if ( (_DWORD)v51 != v20 )
              {
                do
                {
                  v54 = v53;
                  if ( v20 <= v53 )
                    v54 = v20;
                  v55 = v54;
                  memmove(v52, a4, v54);
                  v52 += v55;
                  v20 = v55 + v196;
                  v196 = (unsigned int)(v55 + v196);
                  v53 -= v55;
                }
                while ( v53 );
              }
              v56 = a4;
              for ( i = v14 - 1; i; --i )
              {
                a4 += a5;
                memmove(a4, v56, v51);
              }
              break;
            case 0xF5u:
            case 0xF6u:
              if ( v14 )
              {
                v40 = v198;
                v41 = a5;
                v42 = v197[0];
                do
                {
                  v43 = v42;
                  v44 = a4;
                  v42 += v40;
                  a4 += v41;
                  --v14;
                  v45 = v12;
                  if ( v12 )
                  {
                    v46 = v194;
                    v207 = __PAIR64__(v17, v18);
                    v209 = v16;
                    v208 = v16;
                    v47 = *((_DWORD *)&v207
                          + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v207 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                    v48 = (unsigned __int16 *)(v43 + 2);
                    do
                    {
                      --v45;
                      v49 = BYTE14(v191);
                      v177 = v48[1];
                      if ( v47 < v177 )
                      {
                        v180 = *v48;
                        if ( v47 < v180 )
                        {
                          v50 = *(v48 - 1);
                          if ( v47 < v50 )
                            v49 = *(_BYTE *)((((v17 - v180) & (v180 - DWORD1(v191)) & 0x38000 | (v18 - v177) & (v177 - DWORD2(v191)) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v16 - v50) & (unsigned __int16)(v50 - v191) & 0x7000)) >> 12)
                                           + v46);
                        }
                      }
                      *v44 = v49;
                      v48 += 3;
                      ++v44;
                    }
                    while ( v45 );
                    v12 = v170;
                    v40 = v198;
                    v41 = a5;
                  }
                }
                while ( v14 );
              }
              break;
            case 0xF7u:
              if ( v14 )
              {
                v21 = v198;
                v22 = v197[0];
                if ( v174 )
                {
                  v23 = a5;
                  do
                  {
                    v24 = v22;
                    v25 = a4;
                    v22 += v21;
                    a4 += v23;
                    --v14;
                    v26 = v12;
                    if ( v12 )
                    {
                      v27 = v194;
                      v207 = __PAIR64__(v17, v18);
                      v209 = v16;
                      v208 = v16;
                      v28 = *((_DWORD *)&v207
                            + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v207 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                      v29 = (unsigned __int16 *)(v24 + 2);
                      do
                      {
                        --v26;
                        v30 = BYTE14(v191);
                        v179 = v29[1];
                        if ( v28 < v179 )
                        {
                          v175 = *v29;
                          if ( v28 < v175 )
                          {
                            v31 = *(v29 - 1);
                            if ( v28 < v31 )
                              v30 = *(_BYTE *)((((v17 - v175) & (v175 - DWORD1(v191)) & 0x1C000 | (v18 - v179) & (v179 - DWORD2(v191)) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v16 - v31) & (unsigned __int16)(v31 - v191) & 0x3000)) >> 12)
                                             + v27);
                          }
                        }
                        *v25 = v30;
                        v29 += 3;
                        ++v25;
                      }
                      while ( v26 );
                      v12 = v170;
                      v21 = v198;
                      v23 = a5;
                    }
                  }
                  while ( v14 );
                }
                else
                {
                  v32 = a5;
                  do
                  {
                    v33 = v22;
                    v34 = a4;
                    v22 += v21;
                    a4 += v32;
                    --v14;
                    v184 = v22;
                    if ( v12 )
                    {
                      v207 = __PAIR64__(v17, v18);
                      v209 = v16;
                      v208 = v16;
                      v35 = *((_DWORD *)&v207
                            + ((v18 >= v17) | (unsigned __int64)(*((_DWORD *)&v207 + (v18 >= v17)) >= v16 ? 2 : 0))) >> 21;
                      v36 = (unsigned __int16 *)(v33 + 2);
                      do
                      {
                        --v12;
                        v37 = *(v36 - 1);
                        v38 = BYTE14(v191);
                        v176 = v36[1];
                        if ( v35 < v176 )
                        {
                          v39 = *v36;
                          v193 = v39;
                          if ( v35 < v39 && v35 < v37 )
                            v38 = ((v16 - v37) >> 12) & ((v37 - (unsigned int)v191) >> 12) & 3 | ((v17 - v193) >> 12) & ((v39 - DWORD1(v191)) >> 12) & 0x1C | ((v18 - v176) >> 12) & ((v176 - DWORD2(v191)) >> 12) & 0xE0;
                        }
                        *v34 = v38;
                        v36 += 3;
                        ++v34;
                      }
                      while ( v12 );
                      v12 = v170;
                      v22 = v184;
                      v21 = v198;
                      v32 = a5;
                    }
                  }
                  while ( v14 );
                }
              }
              break;
            default:
              return 4294967285LL;
          }
        }
        return v205;
      }
      if ( v14 )
      {
        v160 = v198;
        v161 = a5;
        v162 = v197[0];
        do
        {
          v163 = v162;
          v164 = a4;
          v162 += v160;
          a4 += v161;
          --v14;
          v165 = v12;
          if ( v12 )
          {
            v166 = v194;
            v167 = (unsigned __int16 *)(v163 + 2);
            do
            {
              v168 = *v167;
              v169 = (v16 - *(v167 - 1)) & 0x70000 | (unsigned __int64)((v18 - v167[1]) & 0x1C00000);
              v167 += 3;
              *v164++ = *(_BYTE *)((((v17 - v168) & 0x380000 | v169) >> 16) + v166);
              --v165;
            }
            while ( v165 );
            v12 = v170;
            v160 = v198;
            v161 = a5;
          }
        }
        while ( v14 );
      }
      return v205;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
