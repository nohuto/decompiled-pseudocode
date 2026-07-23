/*
 * XREFs of LZ4_compress_fast_extState @ 0x140383DB0
 * Callers:
 *     RtlCompressBufferLz4 @ 0x140383D30 (RtlCompressBufferLz4.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall LZ4_compress_fast_extState(unsigned int *a1, _QWORD *a2, _BYTE *a3, int a4, int a5)
{
  unsigned int v5; // r11d
  __int64 v6; // rbx
  _BYTE *v7; // r9
  char *v8; // r10
  unsigned int *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  char *v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r14
  char *v15; // rsi
  _BYTE *v16; // r15
  int v17; // r8d
  unsigned int *v18; // rbx
  char *v19; // rcx
  int v20; // r9d
  __int64 v21; // r10
  _WORD *v22; // rbx
  __int16 v23; // r8
  char *v24; // rdi
  size_t v25; // r13
  size_t v26; // rdi
  int v27; // r11d
  char *v28; // r9
  unsigned int v29; // r10d
  _QWORD *v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // r10
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // rbx
  size_t v36; // r8
  _WORD *v37; // rdx
  signed __int64 v38; // rsi
  unsigned __int64 v39; // rsi
  int i; // ebx
  _QWORD *v41; // r10
  __int16 v42; // ax
  char *v43; // r8
  _QWORD *v44; // r9
  _QWORD *v45; // rdx
  unsigned int v48; // ecx
  int v49; // esi
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // r9
  unsigned int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int128 v58; // rax
  __int64 v59; // rdx
  char *v60; // rbp
  char *v61; // rsi
  char *v62; // rdi
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // r15
  int v65; // ebx
  char *v66; // rdx
  int v67; // r8d
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  char *v70; // r8
  _BYTE *v71; // r14
  int v72; // ecx
  unsigned int v73; // edx
  _BYTE *v74; // r9
  unsigned int v75; // edx
  __int64 v76; // rbx
  size_t v77; // r8
  char v78; // al
  _WORD *v79; // rdx
  __int64 v80; // rbp
  unsigned __int64 v81; // rbp
  _QWORD *v82; // r14
  char *v83; // r9
  _QWORD *v84; // rdx
  _QWORD *v85; // rcx
  unsigned int v88; // r8d
  char v91; // al
  _WORD *v92; // rcx
  __int64 v93; // r8
  unsigned int v94; // r8d
  __int64 v95; // rdx
  size_t v96; // rdi
  size_t v97; // r14
  char *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  int v101; // r9d
  char *v102; // rdi
  unsigned __int64 v103; // r14
  unsigned __int64 v104; // rbp
  _QWORD *v105; // r13
  int v106; // r10d
  _QWORD *v107; // rdx
  unsigned __int64 v108; // rcx
  int v109; // ebx
  unsigned __int64 v110; // rcx
  int v111; // r15d
  unsigned int *v112; // rax
  unsigned int v113; // ecx
  int v114; // eax
  char *v115; // r8
  unsigned __int64 v116; // rcx
  _DWORD *v117; // r9
  _QWORD *v118; // r15
  unsigned int v119; // ecx
  __int64 v120; // rbx
  int v121; // ecx
  unsigned int v122; // edx
  size_t v123; // rbx
  char v124; // al
  _WORD *v125; // rdx
  signed __int64 v126; // r13
  unsigned __int64 v127; // rbx
  _QWORD *v128; // r15
  char *v129; // r9
  _QWORD *v130; // rdx
  _QWORD *v131; // rcx
  unsigned int v134; // r8d
  char v137; // al
  unsigned __int64 v138; // rax
  unsigned int v139; // ecx
  unsigned int v140; // r8d
  char *v141; // rax
  size_t v142; // rbp
  __int64 v143; // rax
  __int64 v144; // rcx
  int v145; // r9d
  _QWORD *v146; // r12
  char *v147; // rdi
  unsigned __int64 v148; // r14
  unsigned __int64 v149; // rbp
  int v150; // r10d
  _QWORD *v151; // rdx
  unsigned __int64 v152; // rcx
  int v153; // r8d
  unsigned __int64 v154; // rcx
  int v155; // r10d
  unsigned int v156; // r15d
  _DWORD *v157; // r9
  unsigned int *v158; // rax
  unsigned int v159; // ecx
  int v160; // eax
  char *v161; // r8
  _BYTE *v162; // r15
  int v163; // ecx
  unsigned int v164; // edx
  _BYTE *v165; // r10
  unsigned int v166; // edx
  __int64 v167; // rbx
  size_t v168; // r8
  _WORD *v169; // rdx
  __int64 v170; // r12
  unsigned __int64 v171; // rbx
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
  size_t v186; // rbp
  __int64 v187; // rax
  unsigned __int128 v188; // rax
  unsigned __int128 v189; // rax
  unsigned __int128 v190; // rax
  char *v192; // [rsp+20h] [rbp-98h]
  _WORD *v193; // [rsp+20h] [rbp-98h]
  char *v194; // [rsp+20h] [rbp-98h]
  _DWORD *v195; // [rsp+20h] [rbp-98h]
  char *v196; // [rsp+28h] [rbp-90h]
  char *v197; // [rsp+28h] [rbp-90h]
  char *v198; // [rsp+28h] [rbp-90h]
  char *v199; // [rsp+28h] [rbp-90h]
  char *v200; // [rsp+30h] [rbp-88h]
  unsigned __int64 v201; // [rsp+30h] [rbp-88h]
  unsigned int *v202; // [rsp+38h] [rbp-80h]
  unsigned int *v203; // [rsp+38h] [rbp-80h]
  int v204; // [rsp+40h] [rbp-78h]
  char *v205; // [rsp+40h] [rbp-78h]
  unsigned __int64 v206; // [rsp+48h] [rbp-70h]
  __int16 v207; // [rsp+48h] [rbp-70h]
  int v208; // [rsp+48h] [rbp-70h]
  char *v209; // [rsp+50h] [rbp-68h]
  _DWORD *v210; // [rsp+50h] [rbp-68h]
  __int64 v211; // [rsp+58h] [rbp-60h]
  __int64 v212; // [rsp+60h] [rbp-58h]
  unsigned int *v213; // [rsp+C0h] [rbp+8h]
  int v216; // [rsp+D8h] [rbp+20h]
  char v217; // [rsp+D8h] [rbp+20h]
  int v218; // [rsp+D8h] [rbp+20h]
  char v219; // [rsp+D8h] [rbp+20h]
  unsigned int v220; // [rsp+D8h] [rbp+20h]
  int v221; // [rsp+D8h] [rbp+20h]
  int v222; // [rsp+E0h] [rbp+28h]
  int v223; // [rsp+E0h] [rbp+28h]
  unsigned int v224; // [rsp+E0h] [rbp+28h]
  char v225; // [rsp+E0h] [rbp+28h]
  unsigned int v226; // [rsp+E0h] [rbp+28h]
  char v227; // [rsp+E0h] [rbp+28h]
  int v228; // [rsp+E8h] [rbp+30h]
  int v229; // [rsp+E8h] [rbp+30h]
  int v230; // [rsp+E8h] [rbp+30h]

  v5 = 0;
  v6 = a4;
  v7 = a3;
  v8 = (char *)a2;
  v9 = a1;
  if ( a1 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      memset_0(a1, 0, 0x4020uLL);
      v8 = (char *)a2;
      v5 = 0;
      v7 = a3;
    }
    v213 = v9;
  }
  else
  {
    v9 = 0LL;
    v213 = 0LL;
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
      v144 = v9[4100];
      v145 = (_DWORD)v8 - v144;
      v146 = v8;
      v61 = a3;
      v213[4102] += v6;
      v147 = &v8[v6];
      v213[4100] = v144 + v6;
      v148 = (unsigned __int64)&v8[v6 - 11];
      v213[4101] = 2;
      v149 = (unsigned __int64)&v8[v6 - 5];
      v205 = &v8[-v144];
      v150 = 0;
      v151 = (_QWORD *)((char *)a2 + 1);
      v213[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v144;
      v152 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)a2 + 1);
LABEL_181:
      v153 = 1;
      v208 = v150;
      v154 = v152 >> 52;
      v155 = 64;
      while ( 1 )
      {
        v156 = (_DWORD)v151 - v145;
        v157 = v151;
        v195 = v151;
        v158 = &v213[(unsigned int)v154];
        v159 = *v158;
        v203 = v158;
        v151 = (_QWORD *)((char *)v151 + v153);
        v226 = *v158;
        v160 = v155++;
        if ( (unsigned __int64)v151 > v148 )
          break;
        v161 = &v205[v159];
        v154 = (0xCF1BBCDCBB000000uLL * *v151) >> 52;
        v199 = v161;
        *v203 = v156;
        if ( v226 + 0xFFFF >= v156 && *(_DWORD *)v161 == *v157 )
        {
          if ( v161 > (char *)a2 && *((_BYTE *)v157 - 1) == *(v161 - 1) )
          {
            do
            {
              v157 = (_DWORD *)((char *)v157 - 1);
              --v161;
              v195 = v157;
              v199 = v161;
            }
            while ( v157 > (_DWORD *)v146 && v161 > (char *)a2 && *((_BYTE *)v157 - 1) == *(v161 - 1) );
          }
          v162 = v61 + 1;
          v163 = (_DWORD)v157 - (_DWORD)v146;
          v221 = (_DWORD)v157 - (_DWORD)v146;
          if ( (unsigned int)((_DWORD)v157 - (_DWORD)v146) < 0xF )
          {
            *v61 = 16 * v163;
          }
          else
          {
            v164 = v163 - 15;
            *v61 = -16;
            v227 = v163 - 15;
            v165 = v61 + 1;
            if ( v163 - 15 >= 255 )
            {
              v166 = v164 / 0xFF;
              v167 = v166;
              v168 = v166;
              LOBYTE(v166) = -1;
              memset_0(v61 + 1, v166, v168);
              v165 = &v162[v167];
              v161 = v199;
              v162 += v167;
              v163 = v221;
              v157 = v195;
              LOBYTE(v164) = v167 + v227;
            }
            *v162 = v164;
            v162 = v165 + 1;
          }
          v169 = &v162[v163];
          v170 = (char *)v146 - v162;
          do
          {
            *(_QWORD *)v162 = *(_QWORD *)&v162[v170];
            v162 += 8;
          }
          while ( v162 < (_BYTE *)v169 );
          v171 = v149 - 7;
          v150 = v208;
          v146 = v157;
          while ( 1 )
          {
            v172 = (_QWORD *)((char *)v146 + 4);
            v173 = v61;
            *v169 = (_WORD)v146 - (_WORD)v161;
            v61 = (char *)(v169 + 1);
            v174 = v161 + 4;
            v175 = (_QWORD *)((char *)v146 + 4);
            if ( (unsigned __int64)v146 + 4 >= v171 )
            {
              while ( (unsigned __int64)v175 < v149 - 7 )
              {
                if ( *v174 != *v175 )
                {
                  __asm { tzcnt   r8, r8 }
                  v178 = (_DWORD)v175 + ((unsigned int)_R8 >> 3) - (_DWORD)v172;
                  goto LABEL_202;
                }
                ++v175;
LABEL_198:
                ++v174;
              }
              if ( (unsigned __int64)v175 < v149 - 3 && *(_DWORD *)v174 == *(_DWORD *)v175 )
              {
                v175 = (_QWORD *)((char *)v175 + 4);
                v174 = (_QWORD *)((char *)v174 + 4);
              }
              if ( (unsigned __int64)v175 < v149 - 1 && *(_WORD *)v174 == *(_WORD *)v175 )
              {
                v175 = (_QWORD *)((char *)v175 + 2);
                v174 = (_QWORD *)((char *)v174 + 2);
              }
              if ( (unsigned __int64)v175 < v149 && *(_BYTE *)v174 == *(_BYTE *)v175 )
                LODWORD(v175) = (_DWORD)v175 + 1;
              v178 = (_DWORD)v175 - (_DWORD)v172;
            }
            else
            {
              if ( *v174 == *v172 )
              {
                v175 = (_QWORD *)((char *)v146 + 12);
                goto LABEL_198;
              }
              __asm { tzcnt   r8, r8 }
              v178 = (unsigned int)_R8 >> 3;
            }
LABEL_202:
            v146 = (_QWORD *)((char *)v146 + v178 + 4);
            v181 = *v173;
            if ( v178 >= 0xF )
            {
              v184 = v178 - 15;
              *v173 = v181 + 15;
              *(_DWORD *)v61 = -1;
              if ( v184 >= 0x3FC )
              {
                v187 = v184 / 0x3FC;
                do
                {
                  v61 += 4;
                  v184 -= 1020;
                  *(_DWORD *)v61 = -1;
                  --v187;
                }
                while ( v187 );
              }
              v185 = v184 / 0xFF;
              v61[v185] = v185 + v184;
              v61 += v185 + 1;
            }
            else
            {
              *v173 = v181 + v178;
            }
            if ( (unsigned __int64)v146 >= v148 )
              goto LABEL_220;
            v213[(0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v146 - 2)) >> 52] = (_DWORD)v146 - (_DWORD)v205 - 2;
            v182 = (0xCF1BBCDCBB000000uLL * *v146) >> 52;
            v183 = v213[v182];
            v213[v182] = (_DWORD)v146 - (_DWORD)v205;
            v161 = &v205[v183];
            if ( v183 + 0xFFFF < (int)v146 - (int)v205 || *(_DWORD *)v161 != *(_DWORD *)v146 )
            {
              v151 = (_QWORD *)((char *)v146 + 1);
              v145 = (int)v205;
              v152 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v146 + 1);
              goto LABEL_181;
            }
            v171 = v149 - 7;
            v169 = v61 + 1;
            *v61 = 0;
          }
        }
        v153 = v160 >> 6;
        v145 = (int)v205;
      }
LABEL_220:
      v96 = v147 - (char *)v146;
      if ( v96 < 0xF )
      {
        *v61 = 16 * v96;
      }
      else
      {
        *v61 = -16;
        v186 = v96 - 15;
        ++v61;
        if ( v96 - 15 >= 0xFF )
        {
          v189 = v186 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v189) = -1;
          memset_0(v61, SDWORD2(v189), v186 / 0xFF);
          v61 += v186 / 0xFF;
          v186 %= 0xFFuLL;
        }
        *v61 = v186;
      }
      v98 = (char *)v146;
    }
    else
    {
      if ( (unsigned int)v6 > 0x7E000000 )
        return v5;
      if ( !(_DWORD)v6 )
      {
LABEL_232:
        *v7 = 0;
        return 1;
      }
      v59 = v9[4100];
      v60 = v8;
      v61 = a3;
      v62 = &v8[v6];
      v63 = (unsigned __int64)&v8[v6 - 11];
      v197 = &v8[-v59];
      v213[4102] += v6;
      v213[4100] = v59 + v6;
      v213[4101] = 3;
      v64 = (unsigned __int64)&v8[v6 - 5];
      if ( (int)v6 >= 13 )
      {
        v65 = 0;
        *((_WORD *)v213 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v8) >> 19)) = v59;
LABEL_74:
        v66 = v8 + 1;
        v223 = v65;
        v67 = 1;
        v218 = 64;
        v68 = (unsigned int)(-1640531535 * *(_DWORD *)(v8 + 1)) >> 19;
        while ( 1 )
        {
          v209 = v66;
          v8 = v66;
          v207 = (_WORD)v66 - (_WORD)v197;
          v193 = (_WORD *)v213 + v68;
          v66 += v67;
          v229 = v218++ >> 6;
          if ( (unsigned __int64)v66 > v63 )
            break;
          v69 = -1640531535 * *(_DWORD *)v66;
          v70 = &v197[(unsigned __int16)*v193];
          *v193 = v207;
          v68 = v69 >> 19;
          v200 = v70;
          if ( *(_DWORD *)v70 == *(_DWORD *)v8 )
          {
            if ( v70 > (char *)a2 && *(v8 - 1) == *(v70 - 1) )
            {
              do
              {
                --v8;
                --v70;
                v209 = v8;
                v200 = v70;
              }
              while ( v8 > v60 && v70 > (char *)a2 && *(v8 - 1) == *(v70 - 1) );
            }
            v71 = v61 + 1;
            v72 = (_DWORD)v8 - (_DWORD)v60;
            v230 = (_DWORD)v8 - (_DWORD)v60;
            if ( (unsigned int)((_DWORD)v8 - (_DWORD)v60) < 0xF )
            {
              *v61 = 16 * v72;
            }
            else
            {
              v73 = v72 - 15;
              *v61 = -16;
              v219 = v72 - 15;
              v74 = v61 + 1;
              if ( v72 - 15 >= 255 )
              {
                v75 = v73 / 0xFF;
                v76 = v75;
                v77 = v75;
                LOBYTE(v75) = -1;
                memset_0(v61 + 1, v75, v77);
                v74 = &v71[v76];
                v72 = v230;
                v71 += v76;
                v70 = v200;
                v8 = v209;
                v78 = v76;
                v65 = v223;
                LOBYTE(v73) = v78 + v219;
              }
              *v71 = v73;
              v71 = v74 + 1;
            }
            v79 = &v71[v72];
            v80 = v60 - v71;
            do
            {
              *(_QWORD *)v71 = *(_QWORD *)&v71[v80];
              v71 += 8;
            }
            while ( v71 < (_BYTE *)v79 );
            v81 = v64 - 7;
            while ( 1 )
            {
              v82 = v8 + 4;
              v83 = v61;
              *v79 = (_WORD)v8 - (_WORD)v70;
              v61 = (char *)(v79 + 1);
              v84 = v70 + 4;
              v85 = v8 + 4;
              if ( (unsigned __int64)(v8 + 4) >= v81 )
              {
                while ( (unsigned __int64)v85 < v64 - 7 )
                {
                  if ( *v84 != *v85 )
                  {
                    __asm { tzcnt   r8, r8 }
                    v88 = (_DWORD)v85 + ((unsigned int)_R8 >> 3) - (_DWORD)v82;
                    goto LABEL_94;
                  }
                  ++v85;
LABEL_90:
                  ++v84;
                }
                if ( (unsigned __int64)v85 < v64 - 3 && *(_DWORD *)v84 == *(_DWORD *)v85 )
                {
                  v85 = (_QWORD *)((char *)v85 + 4);
                  v84 = (_QWORD *)((char *)v84 + 4);
                }
                if ( (unsigned __int64)v85 < v64 - 1 && *(_WORD *)v84 == *(_WORD *)v85 )
                {
                  v85 = (_QWORD *)((char *)v85 + 2);
                  v84 = (_QWORD *)((char *)v84 + 2);
                }
                if ( (unsigned __int64)v85 < v64 && *(_BYTE *)v84 == *(_BYTE *)v85 )
                  LODWORD(v85) = (_DWORD)v85 + 1;
                v88 = (_DWORD)v85 - (_DWORD)v82;
              }
              else
              {
                if ( *v84 == *v82 )
                {
                  v85 = v8 + 12;
                  goto LABEL_90;
                }
                __asm { tzcnt   r8, r8 }
                v88 = (unsigned int)_R8 >> 3;
              }
LABEL_94:
              v8 += v88 + 4;
              v91 = *v83;
              if ( v88 >= 0xF )
              {
                v94 = v88 - 15;
                *v83 = v91 + 15;
                *(_DWORD *)v61 = -1;
                if ( v94 >= 0x3FC )
                {
                  v99 = v94 / 0x3FC;
                  do
                  {
                    v61 += 4;
                    v94 -= 1020;
                    *(_DWORD *)v61 = -1;
                    --v99;
                  }
                  while ( v99 );
                }
                v95 = v94 / 0xFF;
                v61[v95] = v95 + v94;
                v61 += v95 + 1;
              }
              else
              {
                *v83 = v88 + v91;
              }
              v60 = v8;
              if ( (unsigned __int64)v8 >= v63 )
                goto LABEL_112;
              *((_WORD *)v213 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v8 - 2)) >> 19)) = (_WORD)v8 - (_WORD)v197 - 2;
              v92 = (_WORD *)v213 + ((unsigned int)(-1640531535 * *(_DWORD *)v8) >> 19);
              v93 = (unsigned __int16)*v92;
              *v92 = (_WORD)v8 - (_WORD)v197;
              v70 = &v197[v93];
              if ( *(_DWORD *)v70 != *(_DWORD *)v8 )
                goto LABEL_74;
              v81 = v64 - 7;
              v79 = v61 + 1;
              *v61 = 0;
            }
          }
          v67 = v229;
        }
      }
LABEL_112:
      v96 = v62 - v60;
      if ( v96 < 0xF )
      {
        *v61 = 16 * v96;
      }
      else
      {
        *v61 = -16;
        v97 = v96 - 15;
        ++v61;
        if ( v96 - 15 >= 0xFF )
        {
          v188 = v97 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v188) = -1;
          memset_0(v61, SDWORD2(v188), v97 / 0xFF);
          v61 += v97 / 0xFF;
          v97 %= 0xFFuLL;
        }
        *v61 = v97;
      }
      v98 = v60;
    }
LABEL_117:
    memmove(v61 + 1, v98, v96);
    v27 = (_DWORD)v61 + 1 + v96;
    return (unsigned int)(v27 - (_DWORD)a3);
  }
  if ( (int)v6 >= 65547 )
  {
    if ( (unsigned int)v6 > 0x7E000000 )
      return v5;
    v100 = v9[4100];
    v61 = a3;
    v101 = (_DWORD)v8 - v100;
    v213[4102] += v6;
    v102 = &v8[v6];
    v201 = (unsigned __int64)&a3[a5];
    v103 = (unsigned __int64)&v8[v6 - 11];
    v213[4101] = 2;
    v213[4100] = v100 + v6;
    v104 = (unsigned __int64)&v8[v6 - 5];
    v105 = v8;
    v198 = &v8[-v100];
    v106 = 0;
    v213[(0xCF1BBCDCBB000000uLL * *a2) >> 52] = v100;
    v107 = (_QWORD *)((char *)a2 + 1);
    v108 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)a2 + 1);
LABEL_126:
    v109 = 1;
    v110 = v108 >> 52;
    v204 = v106;
    v111 = 64;
    while ( 1 )
    {
      v210 = v107;
      v224 = (_DWORD)v107 - v101;
      v112 = &v213[(unsigned int)v110];
      v113 = *v112;
      v202 = v112;
      v107 = (_QWORD *)((char *)v107 + v109);
      v220 = *v112;
      v114 = v111++;
      if ( (unsigned __int64)v107 > v103 )
        break;
      v115 = &v198[v113];
      v116 = 0xCF1BBCDCBB000000uLL * *v107;
      *v202 = v224;
      v117 = v210;
      v110 = v116 >> 52;
      v194 = v115;
      if ( v220 + 0xFFFF >= v224 && *(_DWORD *)v115 == *v210 )
      {
        if ( v115 > (char *)a2 && *((_BYTE *)v210 - 1) == *(v115 - 1) )
        {
          do
          {
            v117 = (_DWORD *)((char *)v117 - 1);
            --v115;
            v210 = v117;
            v194 = v115;
          }
          while ( v117 > (_DWORD *)v105 && v115 > (char *)a2 && *((_BYTE *)v117 - 1) == *(v115 - 1) );
        }
        v118 = v61 + 1;
        v119 = (_DWORD)v117 - (_DWORD)v105;
        v120 = (unsigned int)((_DWORD)v117 - (_DWORD)v105);
        v212 = v120;
        if ( (unsigned __int64)&v61[v120 + 9 + ((int)v117 - (int)v105) / 0xFFu] <= v201 )
        {
          if ( v119 < 0xF )
          {
            *v61 = 16 * v119;
          }
          else
          {
            v121 = v119 - 15;
            *v61 = -16;
            v225 = v121;
            if ( v121 >= 255 )
            {
              v122 = v121 / 0xFFu;
              v123 = v121 / 0xFFu;
              LOBYTE(v122) = -1;
              memset_0(v61 + 1, v122, v123);
              v118 = (_QWORD *)((char *)v118 + v123);
              v115 = v194;
              v106 = v204;
              v117 = v210;
              v124 = v123;
              v120 = v212;
              LOBYTE(v121) = v124 + v225;
              v5 = 0;
            }
            *(_BYTE *)v118 = v121;
            v118 = (_QWORD *)((char *)v118 + 1);
          }
          v125 = (_WORD *)((char *)v118 + v120);
          v126 = (char *)v105 - (char *)v118;
          do
          {
            *v118 = *(_QWORD *)((char *)v118 + v126);
            ++v118;
          }
          while ( v118 < (_QWORD *)v125 );
          v127 = v104 - 7;
          v105 = v117;
          while ( 1 )
          {
            v128 = (_QWORD *)((char *)v105 + 4);
            v129 = v61;
            *v125 = (_WORD)v105 - (_WORD)v115;
            v61 = (char *)(v125 + 1);
            v130 = v115 + 4;
            v131 = (_QWORD *)((char *)v105 + 4);
            if ( (unsigned __int64)v105 + 4 >= v127 )
            {
              while ( (unsigned __int64)v131 < v104 - 7 )
              {
                if ( *v130 != *v131 )
                {
                  __asm { tzcnt   r8, r8 }
                  v134 = (_DWORD)v131 + ((unsigned int)_R8 >> 3) - (_DWORD)v128;
                  goto LABEL_148;
                }
                ++v131;
LABEL_144:
                ++v130;
              }
              if ( (unsigned __int64)v131 < v104 - 3 && *(_DWORD *)v130 == *(_DWORD *)v131 )
              {
                v131 = (_QWORD *)((char *)v131 + 4);
                v130 = (_QWORD *)((char *)v130 + 4);
              }
              if ( (unsigned __int64)v131 < v104 - 1 && *(_WORD *)v130 == *(_WORD *)v131 )
              {
                v131 = (_QWORD *)((char *)v131 + 2);
                v130 = (_QWORD *)((char *)v130 + 2);
              }
              if ( (unsigned __int64)v131 < v104 && *(_BYTE *)v130 == *(_BYTE *)v131 )
                LODWORD(v131) = (_DWORD)v131 + 1;
              v134 = (_DWORD)v131 - (_DWORD)v128;
            }
            else
            {
              if ( *v130 == *v128 )
              {
                v131 = (_QWORD *)((char *)v105 + 12);
                goto LABEL_144;
              }
              __asm { tzcnt   r8, r8 }
              v134 = (unsigned int)_R8 >> 3;
            }
LABEL_148:
            v105 = (_QWORD *)((char *)v105 + v134 + 4);
            if ( (unsigned __int64)&v61[(v134 + 240) / 0xFF + 6] > v201 )
              break;
            v137 = *v129;
            if ( v134 >= 0xF )
            {
              v140 = v134 - 15;
              *v129 = v137 + 15;
              *(_DWORD *)v61 = -1;
              if ( v140 >= 0x3FC )
              {
                v143 = v140 / 0x3FC;
                do
                {
                  v61 += 4;
                  v140 -= 1020;
                  *(_DWORD *)v61 = -1;
                  --v143;
                }
                while ( v143 );
              }
              v141 = &v61[v140 / 0xFF];
              v61 = v141 + 1;
              *v141 = v140 + v140 / 0xFF;
            }
            else
            {
              *v129 = v134 + v137;
            }
            if ( (unsigned __int64)v105 >= v103 )
              goto LABEL_167;
            v213[(0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v105 - 2)) >> 52] = (_DWORD)v105 - (_DWORD)v198 - 2;
            v138 = (0xCF1BBCDCBB000000uLL * *v105) >> 52;
            v139 = v213[v138];
            v213[v138] = (_DWORD)v105 - (_DWORD)v198;
            v115 = &v198[v139];
            if ( v139 + 0xFFFF < (int)v105 - (int)v198 || *(_DWORD *)v115 != *(_DWORD *)v105 )
            {
              v107 = (_QWORD *)((char *)v105 + 1);
              v101 = (int)v198;
              v108 = 0xCF1BBCDCBB000000uLL * *(_QWORD *)((char *)v105 + 1);
              goto LABEL_126;
            }
            v127 = v104 - 7;
            v125 = v61 + 1;
            *v61 = 0;
          }
        }
        return v5;
      }
      v109 = v114 >> 6;
      v101 = (int)v198;
    }
LABEL_167:
    v96 = v102 - (char *)v105;
    if ( (unsigned __int64)&v61[v96 + 1 + (v96 + 240) / 0xFF] > v201 )
      return v5;
    if ( v96 < 0xF )
    {
      *v61 = 16 * v96;
    }
    else
    {
      *v61 = -16;
      v142 = v96 - 15;
      ++v61;
      if ( v96 - 15 >= 0xFF )
      {
        v190 = v142 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v190) = -1;
        memset_0(v61, SDWORD2(v190), v142 / 0xFF);
        v61 += v142 / 0xFF;
        LOBYTE(v142) = v142 / 0xFF + v142;
      }
      *v61 = v142;
    }
    v98 = (char *)v105;
    goto LABEL_117;
  }
  if ( (unsigned int)v6 > 0x7E000000 )
    return v5;
  if ( !(_DWORD)v6 )
  {
    if ( a5 <= 0 )
      return v5;
    goto LABEL_232;
  }
  v11 = v9[4100];
  v9[4102] += v6;
  v12 = &v8[v6];
  v206 = (unsigned __int64)&v7[a5];
  v9[4101] = 3;
  v196 = &v8[-v11];
  v9[4100] = v11 + v6;
  v13 = (unsigned __int64)&v8[v6 - 11];
  v14 = (unsigned __int64)&v8[v6 - 5];
  v15 = v8;
  v16 = v7;
  v17 = 0;
  if ( (int)v6 < 13 )
  {
LABEL_15:
    v25 = v12 - v15;
    if ( (unsigned __int64)&v16[v25 + 1 + (v25 + 240) / 0xFF] > v206 )
      return v5;
    if ( v25 < 0xF )
    {
      *v16 = 16 * v25;
    }
    else
    {
      *v16 = -16;
      v26 = v25 - 15;
      ++v16;
      if ( v25 - 15 >= 0xFF )
      {
        v58 = v26 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v58) = -1;
        memset_0(v16, SDWORD2(v58), v26 / 0xFF);
        v16 += v26 / 0xFF;
        LOBYTE(v26) = v26 / 0xFF + v26;
      }
      *v16 = v26;
    }
    memmove(v16 + 1, v15, v25);
    v27 = (_DWORD)v16 + 1 + v25;
    return (unsigned int)(v27 - (_DWORD)a3);
  }
  v18 = v213;
  *((_WORD *)v213 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v8) >> 19)) = v11;
  v19 = v8 + 1;
LABEL_13:
  v20 = 1;
  v222 = v17;
  v216 = 64;
  v21 = (unsigned int)(-1640531535 * *(_DWORD *)v19) >> 19;
  while ( 1 )
  {
    v22 = (_WORD *)v18 + v21;
    v23 = (_WORD)v19 - (_WORD)v196;
    v24 = v19;
    v19 += v20;
    v228 = v216++ >> 6;
    if ( (unsigned __int64)v19 > v13 )
      goto LABEL_15;
    v28 = &v196[(unsigned __int16)*v22];
    v29 = -1640531535 * *(_DWORD *)v19;
    *v22 = v23;
    v18 = v213;
    v192 = v28;
    v21 = v29 >> 19;
    if ( *(_DWORD *)v28 == *(_DWORD *)v24 )
      break;
    v20 = v228;
  }
  if ( v28 > (char *)a2 && *(v24 - 1) == *(v28 - 1) )
  {
    do
    {
      --v24;
      v192 = --v28;
    }
    while ( v24 > v15 && v28 > (char *)a2 && *(v24 - 1) == *(v28 - 1) );
  }
  v30 = v16 + 1;
  v31 = (_DWORD)v24 - (_DWORD)v15;
  v32 = (unsigned int)((_DWORD)v24 - (_DWORD)v15);
  v211 = v32;
  if ( (unsigned __int64)&v16[((int)v24 - (int)v15) / 0xFFu + 9 + v32] <= v206 )
  {
    if ( v31 < 0xF )
    {
      *v16 = 16 * v31;
    }
    else
    {
      v33 = v31 - 15;
      *v16 = -16;
      v217 = v31 - 15;
      if ( (int)(v31 - 15) >= 255 )
      {
        v34 = v33 / 0xFF;
        v35 = v34;
        v36 = v34;
        LOBYTE(v34) = -1;
        memset_0(v30, v34, v36);
        v30 = &v16[v35 + 1];
        v28 = v192;
        v32 = v211;
        LOBYTE(v33) = v35 + v217;
        v5 = 0;
      }
      *(_BYTE *)v30 = v33;
      v30 = (_QWORD *)((char *)v30 + 1);
    }
    v37 = (_WORD *)((char *)v30 + v32);
    v38 = v15 - (char *)v30;
    do
    {
      *v30 = *(_QWORD *)((char *)v30 + v38);
      ++v30;
    }
    while ( v30 < (_QWORD *)v37 );
    v39 = v14 - 7;
    for ( i = v222; ; v222 = i )
    {
      v41 = v28 + 4;
      v42 = (_WORD)v24 - (_WORD)v28;
      v43 = v16;
      v44 = v24 + 4;
      *v37 = v42;
      v16 = v37 + 1;
      v45 = v24 + 4;
      if ( (unsigned __int64)(v24 + 4) < v39 )
      {
        if ( *v41 != *v44 )
        {
          __asm { tzcnt   rcx, rcx }
          v48 = (unsigned int)_RCX >> 3;
          goto LABEL_41;
        }
        v45 = v24 + 12;
        ++v41;
      }
      v49 = v222;
      while ( 1 )
      {
        v222 = v49;
        if ( (unsigned __int64)v45 >= v14 - 7 )
          break;
        if ( *v41 != *v45 )
        {
          __asm { tzcnt   rcx, rcx }
          i = v49;
          v48 = (_DWORD)v45 + ((unsigned int)_RCX >> 3) - (_DWORD)v44;
          goto LABEL_41;
        }
        ++v45;
        ++v41;
      }
      if ( (unsigned __int64)v45 < v14 - 3 && *(_DWORD *)v41 == *(_DWORD *)v45 )
      {
        v45 = (_QWORD *)((char *)v45 + 4);
        v41 = (_QWORD *)((char *)v41 + 4);
      }
      if ( (unsigned __int64)v45 < v14 - 1 && *(_WORD *)v41 == *(_WORD *)v45 )
      {
        v45 = (_QWORD *)((char *)v45 + 2);
        v41 = (_QWORD *)((char *)v41 + 2);
      }
      if ( (unsigned __int64)v45 < v14 && *(_BYTE *)v41 == *(_BYTE *)v45 )
        LODWORD(v45) = (_DWORD)v45 + 1;
      v222 = v49;
      v48 = (_DWORD)v45 - (_DWORD)v44;
      i = v49;
LABEL_41:
      v24 += v48 + 4;
      if ( (unsigned __int64)&v16[(v48 + 240) / 0xFF + 6] > v206 )
        return v5;
      v52 = *v43;
      if ( v48 >= 0xF )
      {
        v55 = v48 - 15;
        *v43 = v52 + 15;
        *(_DWORD *)v16 = -1;
        if ( v55 >= 0x3FC )
        {
          v57 = v55 / 0x3FC;
          do
          {
            v16 += 4;
            v55 -= 1020;
            *(_DWORD *)v16 = -1;
            --v57;
          }
          while ( v57 );
          i = v222;
        }
        v56 = v55 / 0xFF;
        v16[v56] = v56 + v55;
        v16 += v56 + 1;
      }
      else
      {
        *v43 = v48 + v52;
        i = v222;
      }
      v15 = v24;
      if ( (unsigned __int64)v24 >= v13 )
        goto LABEL_15;
      *((_WORD *)v213 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v24 - 2)) >> 19)) = (_WORD)v24 - (_WORD)v196 - 2;
      v53 = (unsigned int)(-1640531535 * *(_DWORD *)v24) >> 19;
      v54 = *((unsigned __int16 *)v213 + v53);
      *((_WORD *)v213 + v53) = (_WORD)v24 - (_WORD)v196;
      v28 = &v196[v54];
      if ( *(_DWORD *)v28 != *(_DWORD *)v24 )
      {
        v17 = v222;
        v19 = v24 + 1;
        v18 = v213;
        goto LABEL_13;
      }
      v39 = v14 - 7;
      v37 = v16 + 1;
      *v16 = 0;
    }
  }
  return v5;
}
