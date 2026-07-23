/*
 * XREFs of LZ4_compress_fast_extState @ 0x180109D3C
 * Callers:
 *     RtlCompressBufferLz4 @ 0x18014E960 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_compressBound @ 0x18011C570 (LZ4_compressBound.c)
 *     LZ4_initStream @ 0x18011CDD4 (LZ4_initStream.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4_compress_fast_extState(__int64 a1, char *a2, _BYTE *a3, int a4, int a5)
{
  __int64 v5; // rbx
  _BYTE *v6; // r13
  __int64 v8; // rdx
  unsigned int *v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  char *v12; // rbp
  char *v13; // r12
  char *v14; // r15
  _BYTE *v15; // rsi
  int v16; // ebx
  char *v17; // rdx
  int v18; // r8d
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // r14
  char *v22; // r10
  __int16 v23; // r9
  __int64 v24; // rcx
  char *v25; // r13
  unsigned int v26; // ecx
  _BYTE *v27; // r14
  int v28; // r12d
  unsigned int v29; // ecx
  _BYTE *v30; // rdx
  unsigned int v31; // edx
  size_t v32; // rbx
  char v33; // al
  _WORD *v34; // rdx
  __int64 v35; // r15
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r14
  _QWORD *v38; // r8
  char *v39; // r9
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  unsigned int v44; // r8d
  char v47; // al
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r13
  size_t v53; // rbp
  size_t v54; // rdi
  unsigned __int128 v55; // rax
  __int64 v56; // rcx
  char *v57; // r12
  char *v58; // rdx
  char *v59; // rsi
  char *v60; // rbp
  char *v61; // r15
  int v62; // r11d
  int v63; // r10d
  unsigned __int64 v64; // rcx
  int v65; // r14d
  __int64 v66; // rax
  __int64 v67; // r11
  unsigned int v68; // r9d
  __int64 v69; // rbx
  char *v70; // r8
  char *v71; // rbp
  _BYTE *v72; // r14
  int v73; // r13d
  unsigned int v74; // ecx
  _BYTE *v75; // rdx
  unsigned int v76; // edx
  size_t v77; // rbx
  _WORD *v78; // rdx
  __int64 v79; // r15
  unsigned __int64 v80; // rbx
  _QWORD *v81; // r8
  char *v82; // r9
  _QWORD *v83; // rdx
  char *v84; // rcx
  unsigned int v87; // r8d
  char v90; // al
  unsigned int v91; // r8d
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  size_t v96; // r12
  size_t v97; // rdi
  unsigned __int128 v98; // rax
  int v99; // edi
  __int64 v100; // rdx
  char *v101; // rbp
  __int16 v102; // r11
  _BYTE *v103; // r14
  char *v104; // rdx
  int v105; // r8d
  int v106; // r10d
  __int64 v107; // rcx
  __int16 v108; // r9
  __int64 v109; // r11
  char *v110; // rbx
  unsigned int v111; // ecx
  __int64 v112; // r13
  unsigned int v113; // ecx
  char *v114; // r13
  _QWORD *v115; // r14
  unsigned int v116; // ecx
  __int64 v117; // r8
  int v118; // ecx
  unsigned int v119; // edx
  size_t v120; // rbx
  char v121; // al
  _WORD *v122; // rdx
  signed __int64 v123; // r15
  unsigned __int64 v124; // r15
  unsigned __int64 v125; // r11
  _QWORD *v126; // r8
  char *v127; // r9
  _QWORD *v128; // rdx
  _QWORD *v129; // rcx
  unsigned int v132; // r8d
  char v135; // al
  unsigned int v136; // r8d
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // r13
  __int64 v141; // rcx
  char *v142; // r15
  char *v143; // rdx
  char *v144; // rbp
  _BYTE *v145; // rsi
  char *v146; // r10
  int v147; // r14d
  int v148; // r12d
  unsigned __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // r11
  unsigned int v152; // r9d
  __int64 v153; // rbx
  char *v154; // r8
  char *v155; // rbp
  unsigned __int64 v156; // r12
  _QWORD *v157; // r14
  unsigned int v158; // ecx
  __int64 v159; // r9
  unsigned int v160; // r12d
  unsigned int v161; // edx
  size_t v162; // rbx
  _WORD *v163; // rdx
  signed __int64 v164; // r10
  unsigned __int64 v165; // rbx
  _QWORD *v166; // r8
  char *v167; // r9
  _QWORD *v168; // rdx
  char *v169; // rcx
  unsigned int v172; // r8d
  char v175; // al
  unsigned int v176; // r8d
  __int64 v177; // rax
  __int64 v178; // rdx
  unsigned __int64 v179; // rcx
  __int64 v180; // rax
  size_t v181; // r15
  size_t v182; // rdi
  unsigned __int128 v183; // rax
  __int64 inited; // [rsp+20h] [rbp-68h]
  char *v186; // [rsp+28h] [rbp-60h]
  char *v187; // [rsp+28h] [rbp-60h]
  char *v188; // [rsp+28h] [rbp-60h]
  unsigned __int64 v189; // [rsp+30h] [rbp-58h]
  char *v190; // [rsp+38h] [rbp-50h]
  char *v191; // [rsp+38h] [rbp-50h]
  char *v192; // [rsp+38h] [rbp-50h]
  char *v193; // [rsp+38h] [rbp-50h]
  char *v194; // [rsp+40h] [rbp-48h]
  __int64 v195; // [rsp+40h] [rbp-48h]
  char *v196; // [rsp+40h] [rbp-48h]
  __int64 v197; // [rsp+48h] [rbp-40h]
  int v200; // [rsp+B0h] [rbp+28h]
  char v201; // [rsp+B0h] [rbp+28h]
  int v202; // [rsp+B8h] [rbp+30h]

  v5 = a4;
  v6 = a3;
  inited = LZ4_initStream();
  v10 = 0;
  if ( a5 < (int)LZ4_compressBound((unsigned int)v5, v8, inited) )
  {
    if ( (int)v5 >= 65547 )
    {
      if ( (unsigned int)v5 <= 0x7E000000 )
      {
        v141 = v9[4100];
        v9[4102] += v5;
        v142 = &a2[v5];
        v143 = a2 + 1;
        v9[4101] = 2;
        v193 = a2;
        v9[4100] = v141 + v5;
        v144 = &a2[-v141];
        v145 = v6;
        v188 = &a2[-v141];
        v146 = a2;
        v9[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v141;
LABEL_178:
        v147 = 1;
        v148 = 64;
        v149 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v143) >> 52;
        while ( 1 )
        {
          v150 = v147;
          v151 = (unsigned int)v149;
          v196 = v143;
          v152 = (_DWORD)v143 - (_DWORD)v144;
          v147 = v148++ >> 6;
          v153 = v9[(unsigned int)v149];
          v154 = v143;
          v143 += v150;
          if ( v143 > v142 - 11 )
            break;
          v155 = &v144[v153];
          v149 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v143) >> 52;
          *(_DWORD *)(inited + 4 * v151) = v152;
          if ( (int)v153 + 0xFFFF >= v152 && *(_DWORD *)v155 == *(_DWORD *)v154 )
          {
            if ( v155 > a2 && *(v154 - 1) == *(v155 - 1) )
            {
              do
              {
                --v154;
                --v155;
              }
              while ( v154 > v146 && v155 > a2 && *(v154 - 1) == *(v155 - 1) );
              v196 = v154;
            }
            v156 = (unsigned __int64)&v6[a5];
            v157 = v145 + 1;
            v158 = (_DWORD)v154 - (_DWORD)v146;
            v159 = (unsigned int)((_DWORD)v154 - (_DWORD)v146);
            v197 = v159;
            if ( (unsigned __int64)&v145[v159 + 9 + ((int)v154 - (int)v146) / 0xFFu] <= v156 )
            {
              if ( v158 < 0xF )
              {
                *v145 = 16 * v158;
              }
              else
              {
                v160 = v158 - 15;
                *v145 = -16;
                if ( (int)(v158 - 15) >= 255 )
                {
                  v161 = v160 / 0xFF;
                  v162 = v160 / 0xFF;
                  LOBYTE(v161) = -1;
                  memset_thunk_772440563353939046(v145 + 1, v161, v162);
                  v154 = v196;
                  v157 = (_QWORD *)((char *)v157 + v162);
                  v146 = v193;
                  v159 = v197;
                  LOBYTE(v160) = v162 + v160;
                }
                *(_BYTE *)v157 = v160;
                v157 = (_QWORD *)((char *)v157 + 1);
                v156 = (unsigned __int64)&v6[a5];
              }
              v163 = (_WORD *)((char *)v157 + v159);
              v164 = v146 - (char *)v157;
              do
              {
                *v157 = *(_QWORD *)((char *)v157 + v164);
                ++v157;
              }
              while ( v157 < (_QWORD *)v163 );
              v165 = (unsigned __int64)(v142 - 12);
              v146 = v154;
              while ( 1 )
              {
                v166 = v146 + 4;
                v167 = v145;
                *v163 = (_WORD)v146 - (_WORD)v155;
                v145 = v163 + 1;
                v168 = v155 + 4;
                v169 = v146 + 4;
                if ( (unsigned __int64)(v146 + 4) >= v165 )
                {
                  while ( (unsigned __int64)v169 < v165 )
                  {
                    if ( *v168 != *(_QWORD *)v169 )
                    {
                      __asm { tzcnt   rax, rax }
                      v172 = (_DWORD)v169 + ((unsigned int)_RAX >> 3) - (_DWORD)v166;
                      goto LABEL_216;
                    }
                    v169 += 8;
LABEL_204:
                    ++v168;
                  }
                  if ( v169 < v142 - 8 && *(_DWORD *)v168 == *(_DWORD *)v169 )
                  {
                    v169 += 4;
                    v168 = (_QWORD *)((char *)v168 + 4);
                  }
                  if ( v169 < v142 - 6 && *(_WORD *)v168 == *(_WORD *)v169 )
                  {
                    v169 += 2;
                    v168 = (_QWORD *)((char *)v168 + 2);
                  }
                  if ( v169 < v142 - 5 && *(_BYTE *)v168 == *v169 )
                    LODWORD(v169) = (_DWORD)v169 + 1;
                  v172 = (_DWORD)v169 - (_DWORD)v166;
                }
                else
                {
                  if ( *v168 == *v166 )
                  {
                    v169 = v146 + 12;
                    goto LABEL_204;
                  }
                  __asm { tzcnt   r8, rax }
                  v172 = (unsigned int)_R8 >> 3;
                }
LABEL_216:
                v146 += v172 + 4;
                v193 = v146;
                if ( (unsigned __int64)&v145[(v172 + 240) / 0xFF + 6] > v156 )
                  break;
                v175 = *v167;
                if ( v172 < 0xF )
                {
                  *v167 = v172 + v175;
                }
                else
                {
                  v176 = v172 - 15;
                  *v167 = v175 + 15;
                  *(_DWORD *)v145 = -1;
                  if ( v176 >= 0x3FC )
                  {
                    v177 = v176 / 0x3FC;
                    do
                    {
                      v145 += 4;
                      v176 -= 1020;
                      *(_DWORD *)v145 = -1;
                      --v177;
                    }
                    while ( v177 );
                  }
                  v178 = v176 / 0xFF;
                  v145[v178] = v178 + v176;
                  v145 += v178 + 1;
                }
                if ( v146 >= v142 - 11 )
                  goto LABEL_229;
                *(_DWORD *)(inited + 4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)(v146 - 2)) >> 52)) = (_DWORD)v146 - (_DWORD)v188 - 2;
                v179 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v146) >> 52;
                v180 = *(unsigned int *)(inited + 4 * v179);
                *(_DWORD *)(inited + 4 * v179) = (_DWORD)v146 - (_DWORD)v188;
                v155 = &v188[v180];
                if ( (int)v180 + 0xFFFF < (unsigned int)((_DWORD)v146 - (_DWORD)v188)
                  || *(_DWORD *)v155 != *(_DWORD *)v146 )
                {
                  v144 = v188;
                  v143 = v146 + 1;
                  v9 = (unsigned int *)inited;
                  goto LABEL_178;
                }
                v163 = v145 + 1;
                *v145 = 0;
              }
            }
            return v10;
          }
          v144 = v188;
          v9 = (unsigned int *)inited;
        }
        v156 = (unsigned __int64)&v6[a5];
LABEL_229:
        v181 = v142 - v146;
        if ( (unsigned __int64)&v145[v181 + 1 + (v181 + 240) / 0xFF] <= v156 )
        {
          if ( v181 < 0xF )
          {
            *v145 = 16 * v181;
          }
          else
          {
            *v145 = -16;
            v182 = v181 - 15;
            ++v145;
            if ( v181 - 15 >= 0xFF )
            {
              v183 = v182 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v183) = -1;
              memset_thunk_772440563353939046(v145, SDWORD2(v183), v182 / 0xFF);
              v146 = v193;
              v145 += v182 / 0xFF;
              LOBYTE(v182) = v182 / 0xFF + v182;
            }
            *v145 = v182;
          }
          memmove(v145 + 1, v146, v181);
          v99 = v181 + (_DWORD)v145 + 1;
          return (unsigned int)(v99 - (_DWORD)a3);
        }
      }
    }
    else
    {
      if ( (unsigned int)v5 > 0x7E000000 )
        return v10;
      if ( !(_DWORD)v5 )
      {
        if ( a5 <= 0 )
          return v10;
        goto LABEL_5;
      }
      v100 = v9[4100];
      v101 = &a2[v5];
      v9[4102] += v5;
      v102 = (_WORD)a2 - v100;
      v9[4101] = 3;
      v187 = &a2[-v100];
      v14 = a2;
      v15 = v6;
      v9[4100] = v100 + v5;
      v103 = &v6[a5];
      v189 = (unsigned __int64)v103;
      if ( (int)v5 < 13 )
      {
LABEL_172:
        v53 = v101 - v14;
        if ( &v15[v53 + 1 + (v53 + 240) / 0xFF] > v103 )
          return v10;
        if ( v53 >= 0xF )
        {
          *v15 = -16;
          v54 = v53 - 15;
          ++v15;
          if ( v53 - 15 < 0xFF )
            goto LABEL_57;
          goto LABEL_56;
        }
LABEL_58:
        *v15 = 16 * v53;
        goto LABEL_59;
      }
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v100;
      v104 = a2 + 1;
LABEL_123:
      v105 = 1;
      v106 = 64;
      v107 = (unsigned int)(-1640531535 * *(_DWORD *)v104) >> 19;
      while ( 1 )
      {
        v108 = (_WORD)v104 - v102;
        v192 = v104;
        v109 = (unsigned int)v107;
        v110 = v104;
        v111 = *(unsigned __int16 *)(inited + 2 * v107);
        v104 += v105;
        v105 = v106++ >> 6;
        if ( v104 > v101 - 11 )
        {
LABEL_171:
          LODWORD(v6) = (_DWORD)a3;
          goto LABEL_172;
        }
        v112 = v111;
        v113 = -1640531535 * *(_DWORD *)v104;
        v114 = &v187[v112];
        *(_WORD *)(inited + 2 * v109) = v108;
        v107 = v113 >> 19;
        if ( *(_DWORD *)v114 == *(_DWORD *)v110 )
          break;
        v102 = (__int16)v187;
      }
      if ( v114 > a2 && *(v110 - 1) == *(v114 - 1) )
      {
        do
        {
          --v110;
          --v114;
        }
        while ( v114 > a2 && v110 > v14 && *(v110 - 1) == *(v114 - 1) );
        v192 = v110;
      }
      v115 = v15 + 1;
      v116 = (_DWORD)v110 - (_DWORD)v14;
      v117 = (unsigned int)((_DWORD)v110 - (_DWORD)v14);
      v195 = v117;
      if ( (unsigned __int64)&v15[v116 + 9 + v116 / 0xFF] <= v189 )
      {
        if ( v116 < 0xF )
        {
          *v15 = 16 * v116;
        }
        else
        {
          v118 = v116 - 15;
          *v15 = -16;
          v201 = v118;
          if ( v118 >= 255 )
          {
            v119 = v118 / 0xFFu;
            v120 = v118 / 0xFFu;
            LOBYTE(v119) = -1;
            memset_thunk_772440563353939046(v15 + 1, v119, v120);
            v115 = (_QWORD *)((char *)v115 + v120);
            v117 = v195;
            v121 = v120;
            v110 = v192;
            LOBYTE(v118) = v121 + v201;
          }
          *(_BYTE *)v115 = v118;
          v115 = (_QWORD *)((char *)v115 + 1);
        }
        v122 = (_WORD *)((char *)v115 + v117);
        v123 = v14 - (char *)v115;
        do
        {
          *v115 = *(_QWORD *)((char *)v115 + v123);
          ++v115;
        }
        while ( v115 < (_QWORD *)v122 );
        v124 = (unsigned __int64)(v101 - 5);
        v125 = (unsigned __int64)(v101 - 12);
        v103 = (_BYTE *)v189;
        while ( 1 )
        {
          v126 = v110 + 4;
          v127 = v15;
          *v122 = (_WORD)v110 - (_WORD)v114;
          v15 = v122 + 1;
          v128 = v114 + 4;
          v129 = v110 + 4;
          if ( (unsigned __int64)(v110 + 4) >= v125 )
          {
            while ( (unsigned __int64)v129 < v125 )
            {
              if ( *v128 != *v129 )
              {
                __asm { tzcnt   rax, rax }
                v132 = (_DWORD)v129 + ((unsigned int)_RAX >> 3) - (_DWORD)v126;
                goto LABEL_160;
              }
              ++v129;
LABEL_148:
              ++v128;
            }
            if ( (unsigned __int64)v129 < v124 - 3 && *(_DWORD *)v128 == *(_DWORD *)v129 )
            {
              v129 = (_QWORD *)((char *)v129 + 4);
              v128 = (_QWORD *)((char *)v128 + 4);
            }
            if ( (unsigned __int64)v129 < v124 - 1 && *(_WORD *)v128 == *(_WORD *)v129 )
            {
              v129 = (_QWORD *)((char *)v129 + 2);
              v128 = (_QWORD *)((char *)v128 + 2);
            }
            if ( (unsigned __int64)v129 < v124 && *(_BYTE *)v128 == *(_BYTE *)v129 )
              LODWORD(v129) = (_DWORD)v129 + 1;
            v132 = (_DWORD)v129 - (_DWORD)v126;
          }
          else
          {
            if ( *v128 == *v126 )
            {
              v129 = v110 + 12;
              goto LABEL_148;
            }
            __asm { tzcnt   r8, rax }
            v132 = (unsigned int)_R8 >> 3;
          }
LABEL_160:
          v110 += v132 + 4;
          if ( (unsigned __int64)&v15[(v132 + 240) / 0xFF + 6] > v189 )
            break;
          v135 = *v127;
          if ( v132 < 0xF )
          {
            *v127 = v135 + v132;
          }
          else
          {
            v136 = v132 - 15;
            *v127 = v135 + 15;
            *(_DWORD *)v15 = -1;
            if ( v136 >= 0x3FC )
            {
              v137 = v136 / 0x3FC;
              do
              {
                v15 += 4;
                v136 -= 1020;
                *(_DWORD *)v15 = -1;
                --v137;
              }
              while ( v137 );
            }
            v138 = v136 / 0xFF;
            v15[v138] = v138 + v136;
            v15 += v138 + 1;
          }
          v14 = v110;
          if ( v110 >= v101 - 11 )
            goto LABEL_171;
          *(_WORD *)(inited + 2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v110 - 2)) >> 19)) = (_WORD)v110 - (_WORD)v187 - 2;
          v139 = (unsigned int)(-1640531535 * *(_DWORD *)v110) >> 19;
          v140 = *(unsigned __int16 *)(inited + 2 * v139);
          *(_WORD *)(inited + 2 * v139) = (_WORD)v110 - (_WORD)v187;
          v114 = &v187[v140];
          if ( *(_DWORD *)v114 != *(_DWORD *)v110 )
          {
            v102 = (__int16)v187;
            v104 = v110 + 1;
            goto LABEL_123;
          }
          v122 = v15 + 1;
          *v15 = 0;
          v124 = (unsigned __int64)(v101 - 5);
        }
      }
    }
  }
  else if ( (int)v5 >= 65547 )
  {
    if ( (unsigned int)v5 <= 0x7E000000 )
    {
      v56 = v9[4100];
      v57 = &a2[v5];
      v9[4102] += v5;
      v58 = a2 + 1;
      v59 = a3;
      v9[4101] = 2;
      v60 = &a2[-v56];
      v9[4100] = v56 + v5;
      v61 = a2;
      v62 = 0;
      v186 = &a2[-v56];
      v9[(0xCF1BBCDCBB000000uLL * *(_QWORD *)a2) >> 52] = v56;
LABEL_62:
      v63 = 1;
      v202 = v62;
      v64 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v58) >> 52;
      v65 = 64;
      while ( 1 )
      {
        v66 = v63;
        v67 = (unsigned int)v64;
        v191 = v58;
        v68 = (_DWORD)v58 - (_DWORD)v60;
        v63 = v65++ >> 6;
        v69 = v9[(unsigned int)v64];
        v70 = v58;
        v58 += v66;
        if ( v58 > v57 - 11 )
          break;
        v71 = &v60[v69];
        v64 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v58) >> 52;
        *(_DWORD *)(inited + 4 * v67) = v68;
        if ( (int)v69 + 0xFFFF >= v68 && *(_DWORD *)v71 == *(_DWORD *)v70 )
        {
          if ( v71 > a2 && *(v70 - 1) == *(v71 - 1) )
          {
            do
            {
              --v70;
              --v71;
            }
            while ( v70 > v61 && v71 > a2 && *(v70 - 1) == *(v71 - 1) );
            v191 = v70;
          }
          v72 = v59 + 1;
          v73 = (_DWORD)v70 - (_DWORD)v61;
          if ( (unsigned int)((_DWORD)v70 - (_DWORD)v61) < 0xF )
          {
            *v59 = 16 * v73;
          }
          else
          {
            v74 = v73 - 15;
            *v59 = -16;
            v75 = v59 + 1;
            if ( v73 - 15 >= 255 )
            {
              v76 = v74 / 0xFF;
              v77 = v74 / 0xFF;
              LOBYTE(v76) = -1;
              memset_thunk_772440563353939046(v59 + 1, v76, v77);
              v75 = &v72[v77];
              v70 = v191;
              v72 += v77;
              LOBYTE(v74) = v77 + v73 - 15;
            }
            *v72 = v74;
            v72 = v75 + 1;
          }
          v78 = &v72[v73];
          v79 = v61 - v72;
          do
          {
            *(_QWORD *)v72 = *(_QWORD *)&v72[v79];
            v72 += 8;
          }
          while ( v72 < (_BYTE *)v78 );
          v80 = (unsigned __int64)(v57 - 12);
          v62 = v202;
          v61 = v70;
          while ( 1 )
          {
            v81 = v61 + 4;
            v82 = v59;
            *v78 = (_WORD)v61 - (_WORD)v71;
            v59 = (char *)(v78 + 1);
            v83 = v71 + 4;
            v84 = v61 + 4;
            if ( (unsigned __int64)(v61 + 4) >= v80 )
            {
              while ( (unsigned __int64)v84 < v80 )
              {
                if ( *v83 != *(_QWORD *)v84 )
                {
                  __asm { tzcnt   rax, rax }
                  v87 = (_DWORD)v84 + ((unsigned int)_RAX >> 3) - (_DWORD)v81;
                  goto LABEL_99;
                }
                v84 += 8;
LABEL_87:
                ++v83;
              }
              if ( v84 < v57 - 8 && *(_DWORD *)v83 == *(_DWORD *)v84 )
              {
                v84 += 4;
                v83 = (_QWORD *)((char *)v83 + 4);
              }
              if ( v84 < v57 - 6 && *(_WORD *)v83 == *(_WORD *)v84 )
              {
                v84 += 2;
                v83 = (_QWORD *)((char *)v83 + 2);
              }
              if ( v84 < v57 - 5 && *(_BYTE *)v83 == *v84 )
                LODWORD(v84) = (_DWORD)v84 + 1;
              v87 = (_DWORD)v84 - (_DWORD)v81;
            }
            else
            {
              if ( *v83 == *v81 )
              {
                v84 = v61 + 12;
                goto LABEL_87;
              }
              __asm { tzcnt   r8, rax }
              v87 = (unsigned int)_R8 >> 3;
            }
LABEL_99:
            v61 += v87 + 4;
            v90 = *v82;
            if ( v87 < 0xF )
            {
              *v82 = v87 + v90;
            }
            else
            {
              v91 = v87 - 15;
              *v82 = v90 + 15;
              *(_DWORD *)v59 = -1;
              if ( v91 >= 0x3FC )
              {
                v92 = v91 / 0x3FC;
                do
                {
                  v59 += 4;
                  v91 -= 1020;
                  *(_DWORD *)v59 = -1;
                  --v92;
                }
                while ( v92 );
              }
              v93 = v91 / 0xFF;
              v59[v93] = v93 + v91;
              v59 += v93 + 1;
            }
            if ( v61 >= v57 - 11 )
              goto LABEL_110;
            *(_DWORD *)(inited + 4 * ((0xCF1BBCDCBB000000uLL * *(_QWORD *)(v61 - 2)) >> 52)) = (_DWORD)v61
                                                                                             - (_DWORD)v186
                                                                                             - 2;
            v94 = (0xCF1BBCDCBB000000uLL * *(_QWORD *)v61) >> 52;
            v95 = *(unsigned int *)(inited + 4 * v94);
            *(_DWORD *)(inited + 4 * v94) = (_DWORD)v61 - (_DWORD)v186;
            v71 = &v186[v95];
            if ( (int)v95 + 0xFFFF < (unsigned int)((_DWORD)v61 - (_DWORD)v186) || *(_DWORD *)v71 != *(_DWORD *)v61 )
            {
              v60 = v186;
              v58 = v61 + 1;
              v9 = (unsigned int *)inited;
              goto LABEL_62;
            }
            v78 = v59 + 1;
            *v59 = 0;
          }
        }
        v60 = v186;
        v9 = (unsigned int *)inited;
      }
LABEL_110:
      v96 = v57 - v61;
      if ( v96 < 0xF )
      {
        *v59 = 16 * v96;
      }
      else
      {
        *v59 = -16;
        v97 = v96 - 15;
        ++v59;
        if ( v96 - 15 >= 0xFF )
        {
          v98 = v97 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v98) = -1;
          memset_thunk_772440563353939046(v59, SDWORD2(v98), v97 / 0xFF);
          v59 += v97 / 0xFF;
          v97 %= 0xFFuLL;
        }
        *v59 = v97;
      }
      memmove(v59 + 1, v61, v96);
      v99 = v96 + (_DWORD)v59 + 1;
      return (unsigned int)(v99 - (_DWORD)a3);
    }
  }
  else if ( (unsigned int)v5 <= 0x7E000000 )
  {
    if ( !(_DWORD)v5 )
    {
LABEL_5:
      *v6 = 0;
      return 1;
    }
    v11 = v9[4100];
    v12 = &a2[v5];
    v9[4102] += v5;
    v13 = &a2[-v11];
    v9[4101] = 3;
    v194 = &a2[-v11];
    v14 = a2;
    v15 = v6;
    v9[4100] = v11 + v5;
    if ( (int)v5 >= 13 )
    {
      v16 = 0;
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)a2) >> 19)) = v11;
      v17 = a2 + 1;
LABEL_8:
      v18 = 1;
      v200 = v16;
      v19 = 64;
      v20 = (unsigned int)(-1640531535 * *(_DWORD *)v17) >> 19;
      while ( 1 )
      {
        v21 = (unsigned int)v20;
        v22 = v17;
        v190 = v17;
        v23 = (_WORD)v17 - (_WORD)v13;
        v24 = *(unsigned __int16 *)(inited + 2 * v20);
        v17 += v18;
        v18 = v19++ >> 6;
        if ( v17 > v12 - 11 )
          break;
        v25 = &v13[v24];
        v26 = -1640531535 * *(_DWORD *)v17;
        *(_WORD *)(inited + 2 * v21) = v23;
        v20 = v26 >> 19;
        if ( *(_DWORD *)v25 == *(_DWORD *)v22 )
        {
          if ( v25 > a2 && *(v22 - 1) == *(v25 - 1) )
          {
            do
            {
              --v22;
              --v25;
            }
            while ( v22 > v14 && v25 > a2 && *(v22 - 1) == *(v25 - 1) );
            v190 = v22;
          }
          v27 = v15 + 1;
          v28 = (_DWORD)v22 - (_DWORD)v14;
          if ( (unsigned int)((_DWORD)v22 - (_DWORD)v14) < 0xF )
          {
            *v15 = 16 * v28;
          }
          else
          {
            v29 = v28 - 15;
            *v15 = -16;
            v30 = v15 + 1;
            if ( v28 - 15 >= 255 )
            {
              v31 = v29 / 0xFF;
              v32 = v29 / 0xFF;
              LOBYTE(v31) = -1;
              memset_thunk_772440563353939046(v15 + 1, v31, v32);
              v30 = &v27[v32];
              v22 = v190;
              v27 += v32;
              v33 = v32;
              v16 = v200;
              LOBYTE(v29) = v33 + v28 - 15;
            }
            *v27 = v29;
            v27 = v30 + 1;
          }
          v34 = &v27[v28];
          v35 = v14 - v27;
          do
          {
            *(_QWORD *)v27 = *(_QWORD *)&v27[v35];
            v27 += 8;
          }
          while ( v27 < (_BYTE *)v34 );
          v36 = (unsigned __int64)(v12 - 5);
          v37 = (unsigned __int64)(v12 - 12);
          v13 = v194;
          while ( 1 )
          {
            v38 = v22 + 4;
            v39 = v15;
            *v34 = (_WORD)v22 - (_WORD)v25;
            v15 = v34 + 1;
            v40 = v25 + 4;
            v41 = v22 + 4;
            if ( (unsigned __int64)(v22 + 4) >= v37 )
            {
              while ( (unsigned __int64)v41 < v37 )
              {
                if ( *v40 != *v41 )
                {
                  __asm { tzcnt   rax, rax }
                  v44 = (_DWORD)v41 + ((unsigned int)_RAX >> 3) - (_DWORD)v38;
                  goto LABEL_43;
                }
                ++v41;
LABEL_31:
                ++v40;
              }
              if ( (unsigned __int64)v41 < v36 - 3 && *(_DWORD *)v40 == *(_DWORD *)v41 )
              {
                v41 = (_QWORD *)((char *)v41 + 4);
                v40 = (_QWORD *)((char *)v40 + 4);
              }
              if ( (unsigned __int64)v41 < v36 - 1 && *(_WORD *)v40 == *(_WORD *)v41 )
              {
                v41 = (_QWORD *)((char *)v41 + 2);
                v40 = (_QWORD *)((char *)v40 + 2);
              }
              if ( (unsigned __int64)v41 < v36 && *(_BYTE *)v40 == *(_BYTE *)v41 )
                LODWORD(v41) = (_DWORD)v41 + 1;
              v44 = (_DWORD)v41 - (_DWORD)v38;
            }
            else
            {
              if ( *v40 == *v38 )
              {
                v41 = v22 + 12;
                goto LABEL_31;
              }
              __asm { tzcnt   r8, rax }
              v44 = (unsigned int)_R8 >> 3;
            }
LABEL_43:
            v22 += v44 + 4;
            v47 = *v39;
            if ( v44 < 0xF )
            {
              *v39 = v47 + v44;
            }
            else
            {
              v48 = v44 - 15;
              *v39 = v47 + 15;
              *(_DWORD *)v15 = -1;
              if ( v48 >= 0x3FC )
              {
                v49 = v48 / 0x3FC;
                do
                {
                  v15 += 4;
                  v48 -= 1020;
                  *(_DWORD *)v15 = -1;
                  --v49;
                }
                while ( v49 );
              }
              v50 = v48 / 0xFF;
              v15[v50] = v50 + v48;
              v15 += v50 + 1;
            }
            v14 = v22;
            if ( v22 >= v12 - 11 )
              goto LABEL_53;
            *(_WORD *)(inited + 2 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v22 - 2)) >> 19)) = (_WORD)v22 - (_WORD)v194 - 2;
            v51 = (unsigned int)(-1640531535 * *(_DWORD *)v22) >> 19;
            v52 = *(unsigned __int16 *)(inited + 2 * v51);
            *(_WORD *)(inited + 2 * v51) = (_WORD)v22 - (_WORD)v194;
            v25 = &v194[v52];
            if ( *(_DWORD *)v25 != *(_DWORD *)v22 )
            {
              v17 = v22 + 1;
              goto LABEL_8;
            }
            v34 = v15 + 1;
            *v15 = 0;
            v36 = (unsigned __int64)(v12 - 5);
          }
        }
      }
LABEL_53:
      LODWORD(v6) = (_DWORD)a3;
    }
    v53 = v12 - v14;
    if ( v53 >= 0xF )
    {
      *v15 = -16;
      v54 = v53 - 15;
      ++v15;
      if ( v53 - 15 < 0xFF )
      {
LABEL_57:
        *v15 = v54;
LABEL_59:
        memmove(v15 + 1, v14, v53);
        return (unsigned int)((_DWORD)v15 + 1 + v53 - (_DWORD)v6);
      }
LABEL_56:
      v55 = v54 * (unsigned __int128)0x8080808080808081uLL;
      BYTE8(v55) = -1;
      memset_thunk_772440563353939046(v15, SDWORD2(v55), v54 / 0xFF);
      v15 += v54 / 0xFF;
      LOBYTE(v54) = v54 / 0xFF + v54;
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  return v10;
}
