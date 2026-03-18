/*
 * XREFs of LZ4_compress_fast_extState @ 0x1403A17F0
 * Callers:
 *     RtlCompressBufferLz4 @ 0x1403A1770 (RtlCompressBufferLz4.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall LZ4_compress_fast_extState(unsigned int *a1, _QWORD *a2, char *a3, int a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r12
  _QWORD *v8; // r9
  unsigned int *v9; // r10
  int v10; // eax
  __int64 v11; // rdx
  char *v12; // rsi
  __int16 v13; // r8
  unsigned __int64 v14; // r15
  _BYTE *v15; // r14
  unsigned __int64 v16; // rbp
  char *v17; // r11
  _DWORD *v18; // rcx
  int v19; // edx
  int v20; // r10d
  __int64 v21; // rax
  _DWORD *v22; // r12
  __int16 v23; // r9
  unsigned __int16 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  size_t v27; // rsi
  size_t v28; // rdi
  int v29; // ebx
  int v30; // ebx
  char *v31; // r8
  _QWORD *v32; // rcx
  unsigned int v33; // r9d
  __int64 v34; // r10
  unsigned int v35; // edx
  unsigned int v36; // edx
  __int64 v37; // rbx
  size_t v38; // r8
  _WORD *v39; // rdx
  signed __int64 v40; // r14
  unsigned __int64 v41; // r14
  _QWORD *v42; // rcx
  _QWORD *v43; // r10
  char *v44; // r9
  _QWORD *v45; // r8
  unsigned int v48; // r8d
  char v51; // al
  _WORD *v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // r8d
  __int64 v55; // rdx
  char *v56; // rcx
  __int64 v57; // rax
  unsigned __int128 v58; // rax
  __int64 v59; // rdx
  int v60; // r11d
  char *v61; // rbp
  char *v62; // rsi
  char *v63; // rdi
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // r12
  char *v67; // rdx
  int v68; // r8d
  __int64 v69; // rcx
  char *v70; // r10
  unsigned int v71; // ecx
  char *v72; // r8
  _BYTE *v73; // r14
  int v74; // ecx
  unsigned int v75; // edx
  _BYTE *v76; // r9
  unsigned int v77; // edx
  __int64 v78; // rbx
  size_t v79; // r8
  _WORD *v80; // rdx
  __int64 v81; // rbp
  unsigned __int64 v82; // rbp
  _QWORD *v83; // r14
  char *v84; // r9
  _QWORD *v85; // rdx
  _QWORD *v86; // rcx
  unsigned int v89; // r8d
  size_t v90; // rdi
  char *v91; // rdx
  char v94; // al
  _WORD *v95; // rcx
  __int64 v96; // r8
  unsigned int v97; // r8d
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  char *v101; // rdi
  unsigned __int64 v102; // r14
  unsigned __int64 v103; // rbp
  int v104; // r8d
  int v105; // r11d
  _QWORD *v106; // rdx
  unsigned __int64 v107; // rcx
  int v108; // r10d
  unsigned __int64 v109; // rcx
  int v110; // r15d
  unsigned int *v111; // rax
  unsigned int v112; // ecx
  int v113; // eax
  char *v114; // r12
  unsigned __int64 v115; // rcx
  _DWORD *v116; // r8
  _QWORD *v117; // r15
  unsigned int v118; // ecx
  __int64 v119; // r10
  int v120; // ecx
  unsigned int v121; // edx
  size_t v122; // rbx
  _WORD *v123; // rdx
  signed __int64 v124; // r9
  unsigned __int64 v125; // r15
  char *v126; // r10
  _QWORD *v127; // rdx
  _QWORD *v128; // r12
  _QWORD *v129; // rcx
  unsigned int v132; // r8d
  size_t v133; // rbp
  char v136; // al
  unsigned __int64 v137; // rax
  unsigned int v138; // ecx
  unsigned int v139; // r8d
  char *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  char *v143; // r9
  int v144; // r11d
  _QWORD *v145; // r13
  char *v146; // rdi
  unsigned __int64 v147; // r14
  unsigned __int64 v148; // rbp
  unsigned __int64 v149; // rdx
  _QWORD *v150; // r10
  unsigned __int64 v151; // rcx
  int v152; // r8d
  unsigned __int64 v153; // rcx
  int v154; // r11d
  unsigned int v155; // r12d
  _DWORD *v156; // r9
  unsigned int *v157; // rax
  unsigned int v158; // ecx
  int v159; // eax
  char *v160; // r8
  unsigned __int64 v161; // r12
  _BYTE *v162; // r15
  int v163; // ecx
  unsigned int v164; // edx
  _BYTE *v165; // r10
  unsigned int v166; // edx
  __int64 v167; // rbx
  size_t v168; // r8
  _WORD *v169; // rdx
  __int64 v170; // r13
  unsigned __int64 v171; // r10
  _QWORD *v172; // r15
  char *v173; // r9
  _QWORD *v174; // rdx
  _QWORD *v175; // rcx
  unsigned int v178; // r8d
  char v181; // al
  unsigned __int64 v182; // rax
  unsigned int v183; // ecx
  unsigned int v184; // r8d
  __int64 v185; // rdx
  __int64 v186; // rax
  size_t v187; // rbp
  unsigned __int128 v188; // rax
  size_t v189; // r14
  unsigned __int128 v190; // rax
  unsigned __int128 v191; // rax
  char *v193; // [rsp+20h] [rbp-98h]
  char *v194; // [rsp+20h] [rbp-98h]
  char *v195; // [rsp+20h] [rbp-98h]
  char *v196; // [rsp+20h] [rbp-98h]
  __int64 v197; // [rsp+28h] [rbp-90h]
  char *v198; // [rsp+28h] [rbp-90h]
  unsigned __int64 v199; // [rsp+28h] [rbp-90h]
  char *v200; // [rsp+30h] [rbp-88h]
  _WORD *v201; // [rsp+30h] [rbp-88h]
  _DWORD *v202; // [rsp+30h] [rbp-88h]
  unsigned __int64 v203; // [rsp+38h] [rbp-80h]
  char *v204; // [rsp+38h] [rbp-80h]
  _QWORD *v205; // [rsp+38h] [rbp-80h]
  char *v206; // [rsp+38h] [rbp-80h]
  _WORD *v207; // [rsp+40h] [rbp-78h]
  _BYTE *v208; // [rsp+40h] [rbp-78h]
  unsigned int *v209; // [rsp+40h] [rbp-78h]
  unsigned int *v210; // [rsp+40h] [rbp-78h]
  __int16 v211; // [rsp+48h] [rbp-70h]
  int v212; // [rsp+48h] [rbp-70h]
  unsigned __int64 v213; // [rsp+48h] [rbp-70h]
  char *v214; // [rsp+50h] [rbp-68h]
  int v215; // [rsp+50h] [rbp-68h]
  int v216; // [rsp+50h] [rbp-68h]
  char *v217; // [rsp+58h] [rbp-60h]
  _DWORD *v218; // [rsp+58h] [rbp-60h]
  __int64 v219; // [rsp+60h] [rbp-58h]
  unsigned int *v220; // [rsp+C0h] [rbp+8h]
  int v223; // [rsp+D8h] [rbp+20h]
  int v224; // [rsp+D8h] [rbp+20h]
  unsigned int v225; // [rsp+D8h] [rbp+20h]
  int v226; // [rsp+D8h] [rbp+20h]
  unsigned int v227; // [rsp+E0h] [rbp+28h]
  char v228; // [rsp+E0h] [rbp+28h]
  int v229; // [rsp+E0h] [rbp+28h]
  char v230; // [rsp+E0h] [rbp+28h]
  unsigned int v231; // [rsp+E0h] [rbp+28h]
  char v232; // [rsp+E0h] [rbp+28h]
  unsigned int v233; // [rsp+E0h] [rbp+28h]
  char v234; // [rsp+E0h] [rbp+28h]

  v220 = a1;
  v5 = 0;
  v6 = a4;
  v8 = a2;
  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
  {
    v220 = 0LL;
    v9 = 0LL;
  }
  else
  {
    memset_0(a1, 0, 0x4020uLL);
    v9 = v220;
    v8 = a2;
  }
  if ( (unsigned int)v6 > 0x7E000000 )
    v10 = 0;
  else
    v10 = v6
        + ((int)((unsigned __int64)(2155905153LL * (int)v6) >> 32) >> 7)
        + ((unsigned int)((unsigned __int64)(2155905153LL * (int)v6) >> 32) >> 31)
        + 16;
  if ( a5 >= v10 )
  {
    if ( (int)v6 >= 65547 )
    {
      if ( (unsigned int)v6 > 0x7E000000 )
        return v5;
      v142 = v9[4100];
      v9[4102] += v6;
      v143 = (char *)v8 - v142;
      v144 = 0;
      v62 = a3;
      v145 = a2;
      v9[4101] = 2;
      v9[4100] = v142 + v6;
      v146 = (char *)a2 + v6;
      v147 = (unsigned __int64)a2 + v6 - 11;
      v196 = v143;
      v148 = (unsigned __int64)a2 + v6 - 5;
      v149 = v147;
      v9[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v142;
      v150 = (_QWORD *)((char *)a2 + 1);
      v151 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)a2 + 1);
LABEL_177:
      v152 = 1;
      v216 = v144;
      v153 = v151 >> 52;
      v154 = 64;
      while ( 1 )
      {
        v155 = (_DWORD)v150 - (_DWORD)v143;
        v156 = v150;
        v202 = v150;
        v157 = &v220[(unsigned int)v153];
        v158 = *v157;
        v210 = v157;
        v150 = (_QWORD *)((char *)v150 + v152);
        v233 = *v157;
        v159 = v154++;
        if ( (unsigned __int64)v150 > v147 )
          break;
        v160 = &v196[v158];
        v153 = (0xCF1BBCDCBB000000uLL * *v150) >> 52;
        v206 = v160;
        *v210 = v155;
        if ( v233 + 0xFFFF >= v155 && *(_DWORD *)v160 == *v156 )
        {
          v161 = v149;
          v213 = v149;
          if ( v160 > (char *)a2 )
          {
            v213 = v149;
            if ( *((_BYTE *)v156 - 1) == *(v160 - 1) )
            {
              do
              {
                v156 = (_DWORD *)((char *)v156 - 1);
                --v160;
                v202 = v156;
                v206 = v160;
              }
              while ( v156 > (_DWORD *)v145 && v160 > (char *)a2 && *((_BYTE *)v156 - 1) == *(v160 - 1) );
            }
          }
          v162 = v62 + 1;
          v163 = (_DWORD)v156 - (_DWORD)v145;
          v226 = (_DWORD)v156 - (_DWORD)v145;
          if ( (unsigned int)((_DWORD)v156 - (_DWORD)v145) < 0xF )
          {
            *v62 = 16 * v163;
          }
          else
          {
            v164 = v163 - 15;
            *v62 = -16;
            v234 = v163 - 15;
            v165 = v62 + 1;
            if ( v163 - 15 >= 255 )
            {
              v166 = v164 / 0xFF;
              v167 = v166;
              v168 = v166;
              LOBYTE(v166) = -1;
              memset_0(v62 + 1, v166, v168);
              v165 = &v162[v167];
              v160 = v206;
              v162 += v167;
              v163 = v226;
              v156 = v202;
              LOBYTE(v164) = v167 + v234;
            }
            *v162 = v164;
            v162 = v165 + 1;
          }
          v169 = &v162[v163];
          v170 = (char *)v145 - v162;
          do
          {
            *(_QWORD *)v162 = *(_QWORD *)&v162[v170];
            v162 += 8;
          }
          while ( v162 < (_BYTE *)v169 );
          v171 = v148 - 7;
          v144 = v216;
          v145 = v156;
          while ( 1 )
          {
            v172 = (_QWORD *)((char *)v145 + 4);
            v173 = v62;
            *v169 = (_WORD)v145 - (_WORD)v160;
            v62 = (char *)(v169 + 1);
            v174 = v160 + 4;
            v175 = (_QWORD *)((char *)v145 + 4);
            if ( (unsigned __int64)v145 + 4 >= v171 )
            {
              while ( 1 )
              {
                v213 = v161;
                if ( (unsigned __int64)v175 >= v148 - 7 )
                  break;
                if ( *v174 != *v175 )
                {
                  __asm { tzcnt   r8, r8 }
                  v178 = (_DWORD)v175 + ((unsigned int)_R8 >> 3) - (_DWORD)v172;
                  goto LABEL_204;
                }
                ++v175;
LABEL_200:
                ++v174;
              }
              if ( (unsigned __int64)v175 < v148 - 3 && *(_DWORD *)v174 == *(_DWORD *)v175 )
              {
                v175 = (_QWORD *)((char *)v175 + 4);
                v174 = (_QWORD *)((char *)v174 + 4);
              }
              if ( (unsigned __int64)v175 < v148 - 1 && *(_WORD *)v174 == *(_WORD *)v175 )
              {
                v175 = (_QWORD *)((char *)v175 + 2);
                v174 = (_QWORD *)((char *)v174 + 2);
              }
              if ( (unsigned __int64)v175 < v148 && *(_BYTE *)v174 == *(_BYTE *)v175 )
                LODWORD(v175) = (_DWORD)v175 + 1;
              v213 = v161;
              v178 = (_DWORD)v175 - (_DWORD)v172;
            }
            else
            {
              if ( *v174 == *v172 )
              {
                v175 = (_QWORD *)((char *)v145 + 12);
                goto LABEL_200;
              }
              __asm { tzcnt   r8, r8 }
              v178 = (unsigned int)_R8 >> 3;
            }
LABEL_204:
            v145 = (_QWORD *)((char *)v145 + v178 + 4);
            v181 = *v173;
            if ( v178 >= 0xF )
            {
              v184 = v178 - 15;
              *v173 = v181 + 15;
              *(_DWORD *)v62 = -1;
              if ( v184 >= 0x3FC )
              {
                v186 = v184 / 0x3FC;
                do
                {
                  v62 += 4;
                  v184 -= 1020;
                  *(_DWORD *)v62 = -1;
                  --v186;
                }
                while ( v186 );
              }
              v185 = v184 / 0xFF;
              v62[v185] = v185 + v184;
              v62 += v185 + 1;
            }
            else
            {
              *v173 = v181 + v178;
            }
            if ( (unsigned __int64)v145 >= v161 )
              goto LABEL_195;
            v220[(0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v145 - 2)) >> 52] = (_DWORD)v145 - (_DWORD)v196 - 2;
            v182 = (0xCF1BBCDCBB000000uLL * *v145) >> 52;
            v183 = v220[v182];
            v220[v182] = (_DWORD)v145 - (_DWORD)v196;
            v160 = &v196[v183];
            if ( v183 + 0xFFFF < (int)v145 - (int)v196 )
            {
              v149 = v213;
LABEL_209:
              v150 = (_QWORD *)((char *)v145 + 1);
              LODWORD(v143) = (_DWORD)v196;
              v151 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v145 + 1);
              goto LABEL_177;
            }
            v149 = v161;
            if ( *(_DWORD *)v160 != *(_DWORD *)v145 )
              goto LABEL_209;
            v213 = v161;
            v171 = v148 - 7;
            v169 = v62 + 1;
            *v62 = 0;
          }
        }
        v152 = v159 >> 6;
        LODWORD(v143) = (_DWORD)v196;
      }
LABEL_195:
      v90 = v146 - (char *)v145;
      if ( v90 >= 0xF )
      {
        *v62 = -16;
        v187 = v90 - 15;
        ++v62;
        if ( v90 - 15 >= 0xFF )
        {
          v188 = v187 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v188) = -1;
          memset_0(v62, SDWORD2(v188), v187 / 0xFF);
          v62 += v187 / 0xFF;
          v187 %= 0xFFuLL;
        }
        *v62 = v187;
      }
      else
      {
        *v62 = 16 * v90;
      }
      v91 = (char *)v145;
    }
    else
    {
      if ( (unsigned int)v6 > 0x7E000000 )
        return v5;
      if ( !(_DWORD)v6 )
      {
LABEL_228:
        *a3 = 0;
        return 1;
      }
      v59 = v9[4100];
      v60 = 0;
      v9[4102] += v6;
      v61 = (char *)a2;
      v62 = a3;
      v204 = (char *)v8 - v59;
      v9[4100] = v59 + v6;
      v63 = (char *)a2 + v6;
      v9[4101] = 3;
      v64 = (unsigned __int64)a2 + v6 - 11;
      v65 = (unsigned __int64)a2 + v6 - 5;
      if ( (int)v6 >= 13 )
      {
        v66 = (unsigned __int64)a2 + v6 - 11;
        *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v59;
        v67 = (char *)a2 + 1;
LABEL_73:
        v68 = 1;
        v215 = v60;
        v229 = 64;
        v69 = (unsigned int)(-1640531535 * *(_DWORD *)v67) >> 19;
        while ( 1 )
        {
          v217 = v67;
          v211 = (_WORD)v67 - (_WORD)v204;
          v201 = (_WORD *)v9 + v69;
          v70 = v67;
          v67 += v68;
          v223 = v229++ >> 6;
          if ( (unsigned __int64)v67 > v64 )
            break;
          v71 = -1640531535 * *(_DWORD *)v67;
          v72 = &v204[(unsigned __int16)*v201];
          *v201 = v211;
          v69 = v71 >> 19;
          v198 = v72;
          if ( *(_DWORD *)v72 == *(_DWORD *)v70 )
          {
            if ( v72 > (char *)a2 && *(v70 - 1) == *(v72 - 1) )
            {
              do
              {
                --v70;
                --v72;
                v217 = v70;
                v198 = v72;
              }
              while ( v70 > v61 && v72 > (char *)a2 && *(v70 - 1) == *(v72 - 1) );
            }
            v73 = v62 + 1;
            v74 = (_DWORD)v70 - (_DWORD)v61;
            v224 = (_DWORD)v70 - (_DWORD)v61;
            if ( (unsigned int)((_DWORD)v70 - (_DWORD)v61) < 0xF )
            {
              *v62 = 16 * v74;
            }
            else
            {
              v75 = v74 - 15;
              *v62 = -16;
              v230 = v74 - 15;
              v76 = v62 + 1;
              if ( v74 - 15 >= 255 )
              {
                v77 = v75 / 0xFF;
                v78 = v77;
                v79 = v77;
                LOBYTE(v77) = -1;
                memset_0(v62 + 1, v77, v79);
                v76 = &v73[v78];
                v74 = v224;
                v73 += v78;
                v72 = v198;
                v70 = v217;
                v60 = v215;
                LOBYTE(v75) = v78 + v230;
              }
              *v73 = v75;
              v73 = v76 + 1;
            }
            v80 = &v73[v74];
            v81 = v61 - v73;
            do
            {
              *(_QWORD *)v73 = *(_QWORD *)&v73[v81];
              v73 += 8;
            }
            while ( v73 < (_BYTE *)v80 );
            v82 = v65 - 7;
            while ( 1 )
            {
              v83 = v70 + 4;
              v84 = v62;
              *v80 = (_WORD)v70 - (_WORD)v72;
              v62 = (char *)(v80 + 1);
              v85 = v72 + 4;
              v86 = v70 + 4;
              if ( (unsigned __int64)(v70 + 4) >= v82 )
              {
                while ( (unsigned __int64)v86 < v65 - 7 )
                {
                  if ( *v85 != *v86 )
                  {
                    __asm { tzcnt   r8, r8 }
                    v89 = (_DWORD)v86 + ((unsigned int)_R8 >> 3) - (_DWORD)v83;
                    goto LABEL_95;
                  }
                  ++v86;
LABEL_91:
                  ++v85;
                }
                if ( (unsigned __int64)v86 < v65 - 3 && *(_DWORD *)v85 == *(_DWORD *)v86 )
                {
                  v86 = (_QWORD *)((char *)v86 + 4);
                  v85 = (_QWORD *)((char *)v85 + 4);
                }
                if ( (unsigned __int64)v86 < v65 - 1 && *(_WORD *)v85 == *(_WORD *)v86 )
                {
                  v86 = (_QWORD *)((char *)v86 + 2);
                  v85 = (_QWORD *)((char *)v85 + 2);
                }
                if ( (unsigned __int64)v86 < v65 && *(_BYTE *)v85 == *(_BYTE *)v86 )
                  LODWORD(v86) = (_DWORD)v86 + 1;
                v89 = (_DWORD)v86 - (_DWORD)v83;
              }
              else
              {
                if ( *v85 == *v83 )
                {
                  v86 = v70 + 12;
                  goto LABEL_91;
                }
                __asm { tzcnt   r8, r8 }
                v89 = (unsigned int)_R8 >> 3;
              }
LABEL_95:
              v70 += v89 + 4;
              v94 = *v84;
              if ( v89 >= 0xF )
              {
                v97 = v89 - 15;
                *v84 = v94 + 15;
                *(_DWORD *)v62 = -1;
                if ( v97 >= 0x3FC )
                {
                  v99 = v97 / 0x3FC;
                  do
                  {
                    v62 += 4;
                    v97 -= 1020;
                    *(_DWORD *)v62 = -1;
                    --v99;
                  }
                  while ( v99 );
                }
                v98 = v97 / 0xFF;
                v62[v98] = v98 + v97;
                v62 += v98 + 1;
              }
              else
              {
                *v84 = v89 + v94;
              }
              v61 = v70;
              if ( (unsigned __int64)v70 >= v66 )
                goto LABEL_88;
              *((_WORD *)v220 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v70 - 2)) >> 19)) = (_WORD)v70 - (_WORD)v204 - 2;
              v95 = (_WORD *)v220 + ((unsigned int)(-1640531535 * *(_DWORD *)v70) >> 19);
              v96 = (unsigned __int16)*v95;
              *v95 = (_WORD)v70 - (_WORD)v204;
              v72 = &v204[v96];
              if ( *(_DWORD *)v72 != *(_DWORD *)v70 )
              {
                v67 = v70 + 1;
                v9 = v220;
                goto LABEL_73;
              }
              v82 = v65 - 7;
              v80 = v62 + 1;
              *v62 = 0;
            }
          }
          v68 = v223;
          v9 = v220;
        }
      }
LABEL_88:
      v90 = v63 - v61;
      if ( v90 >= 0xF )
      {
        *v62 = -16;
        v189 = v90 - 15;
        ++v62;
        if ( v90 - 15 >= 0xFF )
        {
          v190 = v189 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v190) = -1;
          memset_0(v62, SDWORD2(v190), v189 / 0xFF);
          v62 += v189 / 0xFF;
          v189 %= 0xFFuLL;
        }
        *v62 = v189;
        v91 = v61;
      }
      else
      {
        v91 = v61;
        *v62 = 16 * v90;
      }
    }
LABEL_198:
    memmove(v62 + 1, v91, v90);
    v30 = v90 + (_DWORD)v62 + 1;
    return (unsigned int)(v30 - (_DWORD)a3);
  }
  if ( (int)v6 >= 65547 )
  {
    if ( (unsigned int)v6 > 0x7E000000 )
      return v5;
    v100 = v9[4100];
    v101 = (char *)v8 + v6;
    v9[4102] += v6;
    v102 = (unsigned __int64)v8 + v6 - 11;
    v103 = (unsigned __int64)v8 + v6 - 5;
    v62 = a3;
    v199 = (unsigned __int64)&a3[a5];
    v9[4101] = 2;
    v9[4100] = v100 + v6;
    v104 = (_DWORD)v8 - v100;
    v195 = (char *)v8 - v100;
    v105 = 0;
    v205 = v8;
    v220[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v100;
    v106 = (_QWORD *)((char *)a2 + 1);
    v107 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)a2 + 1);
LABEL_122:
    v108 = 1;
    v109 = v107 >> 52;
    v212 = v105;
    v110 = 64;
    while ( 1 )
    {
      v218 = v106;
      v231 = (_DWORD)v106 - v104;
      v111 = &v220[(unsigned int)v109];
      v112 = *v111;
      v209 = v111;
      v106 = (_QWORD *)((char *)v106 + v108);
      v225 = *v111;
      v113 = v110++;
      if ( (unsigned __int64)v106 > v102 )
        break;
      v114 = &v195[v112];
      v115 = 0xCF1BBCDCBB000000uLL * *v106;
      *v209 = v231;
      v116 = v218;
      v109 = v115 >> 52;
      if ( v225 + 0xFFFF >= v231 && *(_DWORD *)v114 == *v218 )
      {
        if ( v114 > (char *)a2 && *((_BYTE *)v218 - 1) == *(v114 - 1) )
        {
          do
          {
            v116 = (_DWORD *)((char *)v116 - 1);
            --v114;
            v218 = v116;
          }
          while ( v116 > (_DWORD *)v8 && v114 > (char *)a2 && *((_BYTE *)v116 - 1) == *(v114 - 1) );
        }
        v117 = v62 + 1;
        v118 = (_DWORD)v116 - (_DWORD)v8;
        v119 = (unsigned int)((_DWORD)v116 - (_DWORD)v8);
        v219 = v119;
        if ( (unsigned __int64)&v62[v119 + 9 + ((int)v116 - (int)v8) / 0xFFu] <= v199 )
        {
          if ( v118 < 0xF )
          {
            *v62 = 16 * v118;
          }
          else
          {
            v120 = v118 - 15;
            *v62 = -16;
            v232 = v120;
            if ( v120 >= 255 )
            {
              v121 = v120 / 0xFFu;
              v122 = v120 / 0xFFu;
              LOBYTE(v121) = -1;
              memset_0(v62 + 1, v121, v122);
              v117 = (_QWORD *)((char *)v117 + v122);
              v8 = v205;
              v105 = v212;
              v116 = v218;
              v119 = v219;
              LOBYTE(v120) = v122 + v232;
              v5 = 0;
            }
            *(_BYTE *)v117 = v120;
            v117 = (_QWORD *)((char *)v117 + 1);
          }
          v123 = (_WORD *)((char *)v117 + v119);
          v124 = (char *)v8 - (char *)v117;
          do
          {
            *v117 = *(_QWORD *)((char *)v117 + v124);
            ++v117;
          }
          while ( v117 < (_QWORD *)v123 );
          v125 = v103 - 7;
          v8 = v116;
          while ( 1 )
          {
            v126 = v62;
            v62 = (char *)(v123 + 1);
            *v123 = (_WORD)v8 - (_WORD)v114;
            v127 = v114 + 4;
            v128 = (_QWORD *)((char *)v8 + 4);
            v129 = (_QWORD *)((char *)v8 + 4);
            if ( (unsigned __int64)v8 + 4 >= v125 )
            {
              while ( (unsigned __int64)v129 < v103 - 7 )
              {
                if ( *v127 != *v129 )
                {
                  __asm { tzcnt   r8, r8 }
                  v132 = (_DWORD)v129 + ((unsigned int)_R8 >> 3) - (_DWORD)v128;
                  goto LABEL_152;
                }
                ++v129;
LABEL_148:
                ++v127;
              }
              if ( (unsigned __int64)v129 < v103 - 3 && *(_DWORD *)v127 == *(_DWORD *)v129 )
              {
                v129 = (_QWORD *)((char *)v129 + 4);
                v127 = (_QWORD *)((char *)v127 + 4);
              }
              if ( (unsigned __int64)v129 < v103 - 1 && *(_WORD *)v127 == *(_WORD *)v129 )
              {
                v129 = (_QWORD *)((char *)v129 + 2);
                v127 = (_QWORD *)((char *)v127 + 2);
              }
              if ( (unsigned __int64)v129 < v103 && *(_BYTE *)v127 == *(_BYTE *)v129 )
                LODWORD(v129) = (_DWORD)v129 + 1;
              v132 = (_DWORD)v129 - (_DWORD)v128;
            }
            else
            {
              if ( *v127 == *v128 )
              {
                v129 = (_QWORD *)((char *)v8 + 12);
                goto LABEL_148;
              }
              __asm { tzcnt   r8, r8 }
              v132 = (unsigned int)_R8 >> 3;
            }
LABEL_152:
            v8 = (_QWORD *)((char *)v8 + v132 + 4);
            v205 = v8;
            if ( (unsigned __int64)&v62[(v132 + 240) / 0xFF + 6] > v199 )
              break;
            v136 = *v126;
            if ( v132 >= 0xF )
            {
              v139 = v132 - 15;
              *v126 = v136 + 15;
              *(_DWORD *)v62 = -1;
              if ( v139 >= 0x3FC )
              {
                v141 = v139 / 0x3FC;
                do
                {
                  v62 += 4;
                  v139 -= 1020;
                  *(_DWORD *)v62 = -1;
                  --v141;
                }
                while ( v141 );
              }
              v140 = &v62[v139 / 0xFF];
              v62 = v140 + 1;
              *v140 = v139 + v139 / 0xFF;
            }
            else
            {
              *v126 = v132 + v136;
            }
            if ( (unsigned __int64)v8 >= v102 )
              goto LABEL_141;
            v220[(0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v8 - 2)) >> 52] = (_DWORD)v8 - (_DWORD)v195 - 2;
            v137 = (0xCF1BBCDCBB000000uLL * *v8) >> 52;
            v138 = v220[v137];
            v220[v137] = (_DWORD)v8 - (_DWORD)v195;
            v114 = &v195[v138];
            if ( v138 + 0xFFFF < (int)v8 - (int)v195 || *(_DWORD *)v114 != *(_DWORD *)v8 )
            {
              v106 = (_QWORD *)((char *)v8 + 1);
              v104 = (int)v195;
              v107 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v8 + 1);
              goto LABEL_122;
            }
            v125 = v103 - 7;
            v123 = v62 + 1;
            *v62 = 0;
          }
        }
        return v5;
      }
      v108 = v113 >> 6;
      v104 = (int)v195;
    }
LABEL_141:
    v90 = v101 - (char *)v8;
    if ( (unsigned __int64)&v62[v90 + 1 + (v90 + 240) / 0xFF] > v199 )
      return v5;
    if ( v90 < 0xF )
    {
      *v62 = 16 * v90;
    }
    else
    {
      *v62 = -16;
      v133 = v90 - 15;
      ++v62;
      if ( v90 - 15 >= 0xFF )
      {
        v191 = v133 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v191) = -1;
        memset_0(v62, SDWORD2(v191), v133 / 0xFF);
        v8 = v205;
        v62 += v133 / 0xFF;
        LOBYTE(v133) = v133 / 0xFF + v133;
      }
      *v62 = v133;
    }
    v91 = (char *)v8;
    goto LABEL_198;
  }
  if ( (unsigned int)v6 > 0x7E000000 )
    return v5;
  if ( !(_DWORD)v6 )
  {
    if ( a5 <= 0 )
      return v5;
    goto LABEL_228;
  }
  v11 = v9[4100];
  v9[4102] += v6;
  v12 = (char *)v8 + v6;
  v203 = (unsigned __int64)&a3[a5];
  v13 = (_WORD)v8 - v11;
  v193 = a3;
  v214 = (char *)v8 - v11;
  v9[4100] = v11 + v6;
  v14 = (unsigned __int64)v8 + v6 - 11;
  v9[4101] = 3;
  v15 = v8;
  v16 = (unsigned __int64)v8 + v6 - 5;
  v17 = a3;
  if ( (int)v6 >= 13 )
  {
    *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v8) >> 19)) = v11;
    v18 = (_DWORD *)((char *)v8 + 1);
LABEL_12:
    v19 = 1;
    v20 = 64;
    v21 = (unsigned int)(-1640531535 * *v18) >> 19;
    while ( 1 )
    {
      v22 = v18;
      v23 = (_WORD)v18 - v13;
      v24 = (unsigned __int16 *)v220 + v21;
      v25 = *v24;
      v207 = v24;
      v26 = v19;
      v19 = v20 >> 6;
      v18 = (_DWORD *)((char *)v18 + v26);
      ++v20;
      if ( (unsigned __int64)v18 > v14 )
        break;
      v31 = &v214[v25];
      v200 = v31;
      v227 = (unsigned int)(-1640531535 * *v18) >> 19;
      *v207 = v23;
      v21 = v227;
      if ( *(_DWORD *)v31 == *v22 )
      {
        if ( v31 > (char *)a2 && *((_BYTE *)v22 - 1) == *(v31 - 1) )
        {
          do
          {
            v22 = (_DWORD *)((char *)v22 - 1);
            v200 = --v31;
          }
          while ( v22 > (_DWORD *)v15 && v31 > (char *)a2 && *((_BYTE *)v22 - 1) == *(v31 - 1) );
        }
        v32 = v17 + 1;
        v208 = v17 + 1;
        v33 = (_DWORD)v22 - (_DWORD)v15;
        v34 = (unsigned int)((_DWORD)v22 - (_DWORD)v15);
        v197 = v34;
        if ( (unsigned __int64)&v17[((int)v22 - (int)v15) / 0xFFu + 9 + v34] <= v203 )
        {
          if ( v33 < 0xF )
          {
            *v17 = 16 * v33;
          }
          else
          {
            v35 = v33 - 15;
            *v17 = -16;
            v228 = v33 - 15;
            if ( (int)(v33 - 15) >= 255 )
            {
              v36 = v35 / 0xFF;
              v37 = v36;
              v38 = v36;
              LOBYTE(v36) = -1;
              memset_0(v32, v36, v38);
              v32 = &v208[v37];
              v31 = v200;
              v17 = v193;
              v34 = v197;
              LOBYTE(v35) = v37 + v228;
              v5 = 0;
            }
            *(_BYTE *)v32 = v35;
            v32 = (_QWORD *)((char *)v32 + 1);
          }
          v39 = (_WORD *)((char *)v32 + v34);
          v40 = v15 - (_BYTE *)v32;
          do
          {
            *v32 = *(_QWORD *)((char *)v32 + v40);
            ++v32;
          }
          while ( v32 < (_QWORD *)v39 );
          v41 = v16 - 7;
          while ( 1 )
          {
            v42 = v22 + 1;
            v43 = v31 + 4;
            *v39 = (_WORD)v22 - (_WORD)v31;
            v44 = v17;
            v17 = (char *)(v39 + 1);
            v45 = v22 + 1;
            v193 = (char *)(v39 + 1);
            if ( (unsigned __int64)(v22 + 1) >= v41 )
            {
              while ( (unsigned __int64)v45 < v16 - 7 )
              {
                if ( *v43 != *v45 )
                {
                  __asm { tzcnt   rax, rdx }
                  v48 = ((unsigned int)_RAX >> 3) - (_DWORD)v42 + (_DWORD)v45;
                  goto LABEL_42;
                }
                ++v45;
LABEL_38:
                ++v43;
              }
              if ( (unsigned __int64)v45 < v16 - 3 && *(_DWORD *)v43 == *(_DWORD *)v45 )
              {
                v45 = (_QWORD *)((char *)v45 + 4);
                v43 = (_QWORD *)((char *)v43 + 4);
              }
              if ( (unsigned __int64)v45 < v16 - 1 && *(_WORD *)v43 == *(_WORD *)v45 )
              {
                v45 = (_QWORD *)((char *)v45 + 2);
                v43 = (_QWORD *)((char *)v43 + 2);
              }
              if ( (unsigned __int64)v45 < v16 && *(_BYTE *)v43 == *(_BYTE *)v45 )
                LODWORD(v45) = (_DWORD)v45 + 1;
              v48 = (_DWORD)v45 - (_DWORD)v42;
            }
            else
            {
              if ( *v43 == *v42 )
              {
                v45 = v22 + 3;
                goto LABEL_38;
              }
              __asm { tzcnt   r8, rdx }
              v48 = (unsigned int)_R8 >> 3;
            }
LABEL_42:
            v22 = (_DWORD *)((char *)v22 + v48 + 4);
            if ( (unsigned __int64)&v17[(v48 + 240) / 0xFF + 6] > v203 )
              break;
            v51 = *v44;
            if ( v48 >= 0xF )
            {
              v54 = v48 - 15;
              *v44 = v51 + 15;
              *(_DWORD *)v17 = -1;
              if ( v54 >= 0x3FC )
              {
                v57 = v54 / 0x3FC;
                do
                {
                  v17 += 4;
                  v54 -= 1020;
                  *(_DWORD *)v17 = -1;
                  --v57;
                }
                while ( v57 );
              }
              v55 = v54 / 0xFF;
              v56 = &v17[v55];
              v17 += v55 + 1;
              *v56 = v55 + v54;
              v193 = v17;
            }
            else
            {
              *v44 = v48 + v51;
            }
            v15 = v22;
            if ( (unsigned __int64)v22 >= v14 )
              goto LABEL_14;
            *((_WORD *)v220 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v22 - 2)) >> 19)) = (_WORD)v22 - (_WORD)v214 - 2;
            v52 = (_WORD *)v220 + ((unsigned int)(-1640531535 * *v22) >> 19);
            v53 = (unsigned __int16)*v52;
            *v52 = (_WORD)v22 - (_WORD)v214;
            v31 = &v214[v53];
            if ( *(_DWORD *)v31 != *v22 )
            {
              v13 = (__int16)v214;
              v18 = (_DWORD *)((char *)v22 + 1);
              goto LABEL_12;
            }
            v41 = v16 - 7;
            v39 = v17 + 1;
            *v17 = 0;
          }
        }
        return v5;
      }
      v13 = (__int16)v214;
    }
  }
LABEL_14:
  v27 = v12 - v15;
  if ( (unsigned __int64)&v17[v27 + 1 + (v27 + 240) / 0xFF] <= v203 )
  {
    if ( v27 < 0xF )
    {
      *v17 = 16 * v27;
    }
    else
    {
      *v17 = -16;
      v28 = v27 - 15;
      v194 = ++v17;
      if ( v27 - 15 >= 0xFF )
      {
        v58 = v28 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v58) = -1;
        memset_0(v17, SDWORD2(v58), v28 / 0xFF);
        v17 = &v194[v28 / 0xFF];
        LOBYTE(v28) = v28 / 0xFF + v28;
      }
      *v17 = v28;
    }
    v29 = (_DWORD)v17 + 1;
    memmove(v17 + 1, v15, v27);
    v30 = v27 + v29;
    return (unsigned int)(v30 - (_DWORD)a3);
  }
  return v5;
}
