/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x14078885C
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x140788490 (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     Xp10BuildHuffmanEncodings @ 0x140789584 (Xp10BuildHuffmanEncodings.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // r9d
  unsigned __int16 v9; // dx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // r12
  unsigned int v16; // r14d
  _DWORD *v17; // r15
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned int v21; // r10d
  unsigned int v22; // r8d
  __int64 v23; // rdx
  int v24; // eax
  _BYTE *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned __int64 v28; // rax
  unsigned int v29; // r9d
  int v30; // esi
  _BYTE *v31; // r8
  unsigned int v32; // r11d
  __int64 v33; // rax
  char v34; // dl
  unsigned int v35; // eax
  unsigned int v36; // r10d
  __int64 v37; // rdx
  _BYTE *v38; // r8
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // esi
  _BYTE *v43; // r8
  unsigned int v44; // r10d
  unsigned int v45; // r9d
  unsigned int v46; // r11d
  __int64 v47; // rax
  char v48; // dl
  unsigned int v49; // eax
  unsigned int v50; // r11d
  __int64 v51; // rdx
  _BYTE *v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  char v55; // dl
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  unsigned __int16 v58; // r15
  int v59; // r12d
  unsigned int v60; // r13d
  int v61; // ecx
  unsigned int v62; // edx
  int v63; // eax
  unsigned int v64; // edi
  __int64 v65; // rax
  unsigned int v66; // edx
  int v67; // ecx
  unsigned int v68; // r11d
  _BYTE *v69; // r8
  unsigned int v70; // r9d
  unsigned int v71; // r10d
  __int64 v72; // rax
  char v73; // dl
  unsigned int v74; // eax
  unsigned int v75; // r10d
  __int64 v76; // rdx
  _BYTE *v77; // r8
  unsigned __int64 v78; // rax
  unsigned __int16 v79; // r10
  int v80; // esi
  unsigned int v81; // r14d
  unsigned int v82; // edx
  unsigned int v83; // r11d
  _BYTE *v84; // r8
  int v85; // ecx
  unsigned int v86; // edi
  unsigned int v87; // r9d
  __int64 v88; // rax
  char v89; // dl
  int v90; // eax
  _BYTE *v91; // r8
  unsigned int v92; // r11d
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned int v95; // r9d
  int v96; // esi
  unsigned int v97; // r14d
  unsigned int v98; // edx
  unsigned int v99; // r11d
  _BYTE *v100; // r8
  int v101; // ecx
  unsigned int v102; // edi
  unsigned int v103; // r10d
  __int64 v104; // rax
  char v105; // dl
  int v106; // eax
  _BYTE *v107; // r8
  unsigned int v108; // r11d
  __int64 v109; // rdx
  unsigned __int64 v110; // rax
  unsigned int v111; // ecx
  unsigned int v112; // r10d
  unsigned int v113; // edx
  int v114; // esi
  _BYTE *v115; // r8
  unsigned int v116; // edi
  unsigned int v117; // r11d
  __int64 v118; // rax
  char v119; // dl
  unsigned int v120; // eax
  unsigned int v121; // r11d
  __int64 v122; // rdx
  _BYTE *v123; // r8
  unsigned __int64 v124; // rax
  unsigned int v125; // edx
  int v126; // edi
  _BYTE *v127; // r8
  unsigned int v128; // r11d
  unsigned int v129; // r9d
  unsigned int v130; // eax
  unsigned int v131; // r10d
  __int64 v132; // rax
  char v133; // dl
  unsigned int v134; // eax
  unsigned int v135; // r9d
  __int64 v136; // rdx
  _BYTE *v137; // r8
  unsigned __int64 v138; // rax
  __int64 v139; // rax
  char v140; // dl
  unsigned int v141; // eax
  unsigned int v142; // edi
  __int64 v143; // rdx
  _BYTE *v144; // r8
  unsigned __int64 v145; // rax
  unsigned int v146; // r9d
  unsigned int v147; // r11d
  __int64 v148; // r14
  unsigned int v149; // r10d
  _BYTE *v150; // r8
  int v151; // esi
  unsigned int v152; // edi
  unsigned int v153; // eax
  __int64 v154; // rax
  char v155; // dl
  unsigned int v156; // eax
  unsigned int v157; // r11d
  __int64 v158; // rdx
  _BYTE *v159; // r8
  unsigned __int64 v160; // rax
  _BYTE *v161; // r8
  int v162; // edi
  unsigned int v163; // r11d
  __int64 v164; // rax
  char v165; // dl
  unsigned int v166; // eax
  unsigned __int64 v167; // rax
  int v170; // [rsp+34h] [rbp-CCh]
  _DWORD v172[28]; // [rsp+40h] [rbp-C0h] BYREF
  int v173; // [rsp+B0h] [rbp-50h]
  int v174; // [rsp+B4h] [rbp-4Ch]
  _DWORD v175[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v176; // [rsp+140h] [rbp+40h]
  unsigned int v177; // [rsp+144h] [rbp+44h]

  memset_0(v172, 0, 0x84uLL);
  memset_0(v175, 0, 0x84uLL);
  v8 = 8;
  v9 = 0;
  while ( v9 < a3 )
  {
    v10 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
    if ( v10 )
    {
      v11 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      if ( v10 == v8 )
      {
        v11 = 30;
      }
      else
      {
        if ( v9 >= 0x10u )
        {
          v12 = *(_DWORD *)(a2 + 4LL * v9 - 64) & 0x1F;
          if ( v10 == v12 )
          {
            v11 = 31;
          }
          else if ( v10 == v12 + 1 )
          {
            v11 = 32;
          }
        }
        v8 = *(_DWORD *)(a2 + 4LL * v9) & 0x1F;
      }
      ++v172[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_DWORD *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      for ( ; (unsigned __int16)(v13 ^ v9) >= 0x10u; v13 = (v13 & 0xFFF0) + 16 )
        ++v173;
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v174;
        else
          v172[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v172, 33, 8, (__int64)v175);
  v16 = 4;
  v17 = v175;
  do
  {
    v18 = *a4;
    v19 = *v17 & 0x1F;
    v20 = *((unsigned int *)a4 + 2);
    v21 = *((_DWORD *)a4 + 3);
    if ( v19 != v16 )
    {
      v29 = 1;
      v30 = a4[1] & 7;
      v31 = (_BYTE *)(v18 + (v20 >> 3));
      v32 = 8 - v30;
      if ( (int)v20 + 1 <= v21 || (v29 = v21 - v20, v21 != (_DWORD)v20) )
      {
        v33 = v29;
        if ( v32 < v29 )
          v33 = v32;
        v34 = byte_140033A40[4 * v33];
        v35 = v29;
        *v31 |= (v34 & 1) << v30;
        if ( v32 < v29 )
          v35 = 8 - v30;
        v36 = 1u >> v32;
        v37 = v29 - v35;
        v38 = v31 + 1;
        if ( (unsigned int)v37 >= 8 )
        {
          v39 = (unsigned __int64)(unsigned int)v37 >> 3;
          do
          {
            *v38 = v36;
            v37 = (unsigned int)(v37 - 8);
            v36 >>= 8;
            ++v38;
            --v39;
          }
          while ( v39 );
        }
        if ( (_DWORD)v37 )
          *v38 |= (unsigned __int8)v36 & byte_140033A40[4 * v37];
        LODWORD(v20) = v29 + *((_DWORD *)a4 + 2);
        *((_DWORD *)a4 + 2) = v20;
      }
      v40 = *((_DWORD *)a4 + 3);
      v41 = v20 + 3;
      v42 = v20 & 7;
      v43 = (_BYTE *)(*a4 + ((unsigned __int64)(unsigned int)v20 >> 3));
      v44 = 8 - v42;
      v45 = 3;
      if ( v19 <= v16 )
      {
        if ( v41 <= v40 || (v45 = v40 - v20, v40 != (_DWORD)v20) )
        {
          v54 = v45;
          if ( v44 < v45 )
            v54 = v44;
          v55 = byte_140033A40[4 * v54];
          v56 = v45;
          *v43 |= ((unsigned __int8)v19 & (unsigned __int8)v55) << v42;
          if ( v44 < v45 )
            v56 = 8 - v42;
          v50 = v19 >> v44;
          v51 = v45 - v56;
          v52 = v43 + 1;
          if ( (unsigned int)v51 >= 8 )
          {
            v57 = (unsigned __int64)(unsigned int)v51 >> 3;
            do
            {
              *v52 = v50;
              v51 = (unsigned int)(v51 - 8);
              v50 >>= 8;
              ++v52;
              --v57;
            }
            while ( v57 );
          }
          goto LABEL_67;
        }
      }
      else
      {
        v46 = v19 - 1;
        if ( v41 <= v40 || (v45 = v40 - v20, v40 != (_DWORD)v20) )
        {
          v47 = v45;
          if ( v44 < v45 )
            v47 = v44;
          v48 = byte_140033A40[4 * v47];
          v49 = v45;
          *v43 |= ((unsigned __int8)v46 & (unsigned __int8)v48) << v42;
          if ( v44 < v45 )
            v49 = 8 - v42;
          v50 = v46 >> v44;
          v51 = v45 - v49;
          v52 = v43 + 1;
          if ( (unsigned int)v51 >= 8 )
          {
            v53 = (unsigned __int64)(unsigned int)v51 >> 3;
            do
            {
              *v52 = v50;
              v51 = (unsigned int)(v51 - 8);
              v50 >>= 8;
              ++v52;
              --v53;
            }
            while ( v53 );
          }
LABEL_67:
          if ( (_DWORD)v51 )
            *v52 |= (unsigned __int8)v50 & byte_140033A40[4 * v51];
          *((_DWORD *)a4 + 2) += v45;
        }
      }
      v16 = v19;
      goto LABEL_71;
    }
    v22 = 1;
    v23 = v18 + ((unsigned __int64)(unsigned int)v20 >> 3);
    if ( (int)v20 + 1 <= v21 || (v22 = v21 - v20, v21 != (_DWORD)v20) )
    {
      v24 = v22;
      if ( 8 - ((_DWORD)a4[1] & 7u) < v22 )
        v24 = 8 - (a4[1] & 7);
      v25 = (_BYTE *)(v23 + 1);
      v26 = v22 - v24;
      v27 = 0;
      if ( (unsigned int)v26 >= 8 )
      {
        v28 = (unsigned __int64)(unsigned int)v26 >> 3;
        do
        {
          *v25 = v27;
          v26 = (unsigned int)(v26 - 8);
          v27 >>= 8;
          ++v25;
          --v28;
        }
        while ( v28 );
      }
      if ( (_DWORD)v26 )
        *v25 |= (unsigned __int8)v27 & byte_140033A40[4 * v26];
      *((_DWORD *)a4 + 2) += v22;
    }
LABEL_71:
    ++v17;
    --v15;
  }
  while ( v15 );
  v58 = 0;
  v59 = 8;
  v60 = a3;
  v170 = 8;
  while ( v58 < v60 )
  {
    v61 = *(_DWORD *)(a2 + 4LL * v58) & 0x1F;
    if ( v61 )
    {
      v62 = *(_DWORD *)(a2 + 4LL * v58) & 0x1F;
      if ( v61 == v59 )
      {
        v62 = 30;
      }
      else
      {
        if ( v58 >= 0x10u )
        {
          v63 = *(_DWORD *)(a2 + 4LL * v58 - 64) & 0x1F;
          if ( v61 == v63 )
          {
            v62 = 31;
          }
          else if ( v61 == v63 + 1 )
          {
            v62 = 32;
          }
        }
        v59 = *(_DWORD *)(a2 + 4LL * v58) & 0x1F;
        v170 = v59;
      }
      v64 = *((_DWORD *)a4 + 3);
      v65 = v62;
      v66 = *((_DWORD *)a4 + 2);
      v67 = v66 & 7;
      v68 = 8 - v67;
      v69 = (_BYTE *)(*a4 + ((unsigned __int64)v66 >> 3));
      v70 = v175[v65] & 0x1F;
      v71 = v175[v65] >> 5;
      if ( v66 + v70 <= v64 || (v70 = v64 - v66, v64 != v66) )
      {
        v72 = v70;
        if ( v68 < v70 )
          v72 = v68;
        v73 = byte_140033A40[4 * v72];
        v74 = v70;
        *v69 |= ((unsigned __int8)v71 & (unsigned __int8)v73) << v67;
        if ( v68 < v70 )
          v74 = 8 - v67;
        v75 = v71 >> v68;
        v76 = v70 - v74;
        v77 = v69 + 1;
        if ( (unsigned int)v76 >= 8 )
        {
          v78 = (unsigned __int64)(unsigned int)v76 >> 3;
          do
          {
            *v77 = v75;
            v76 = (unsigned int)(v76 - 8);
            v75 >>= 8;
            ++v77;
            --v78;
          }
          while ( v78 );
        }
        if ( (_DWORD)v76 )
          *v77 |= (unsigned __int8)v75 & byte_140033A40[4 * v76];
        *((_DWORD *)a4 + 2) += v70;
      }
      ++v58;
    }
    else
    {
      v79 = v58;
      while ( v58 < v60 && (*(_DWORD *)(a2 + 4LL * v58) & 0x1F) == 0 )
        ++v58;
      if ( (unsigned __int16)(v79 ^ v58) >= 0x10u )
      {
        v80 = v176 & 0x1F;
        v81 = v176 >> 5;
        do
        {
          v82 = *((_DWORD *)a4 + 2);
          v83 = *((_DWORD *)a4 + 3);
          v84 = (_BYTE *)(*a4 + ((unsigned __int64)v82 >> 3));
          v85 = v82 & 7;
          v86 = 8 - v85;
          v87 = v80;
          if ( v82 + v80 <= v83 || (v87 = v83 - v82, v83 != v82) )
          {
            v88 = v87;
            if ( v86 < v87 )
              v88 = v86;
            v89 = byte_140033A40[4 * v88];
            v90 = v87;
            *v84 |= ((unsigned __int8)v81 & (unsigned __int8)v89) << v85;
            if ( v86 < v87 )
              v90 = 8 - v85;
            v91 = v84 + 1;
            v92 = v81 >> v86;
            v93 = v87 - v90;
            if ( (unsigned int)v93 >= 8 )
            {
              v94 = (unsigned __int64)(unsigned int)v93 >> 3;
              do
              {
                *v91 = v92;
                v93 = (unsigned int)(v93 - 8);
                v92 >>= 8;
                ++v91;
                --v94;
              }
              while ( v94 );
            }
            if ( (_DWORD)v93 )
              *v91 |= (unsigned __int8)v92 & byte_140033A40[4 * v93];
            *((_DWORD *)a4 + 2) += v87;
          }
          v79 = (v79 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v79 ^ v58) >= 0x10u );
        v59 = v170;
        v60 = a3;
      }
      v95 = v58 - v79;
      if ( v58 == v79 )
        continue;
      if ( v95 >= 5 )
      {
        v111 = *((_DWORD *)a4 + 2);
        v112 = v177 & 0x1F;
        v113 = *((_DWORD *)a4 + 3);
        v114 = v111 & 7;
        v115 = (_BYTE *)(*a4 + ((unsigned __int64)v111 >> 3));
        v116 = 8 - v114;
        v117 = v177 >> 5;
        if ( v111 + v112 <= v113 || (v112 = v113 - v111, v113 != v111) )
        {
          v118 = v112;
          if ( v116 < v112 )
            v118 = v116;
          v119 = byte_140033A40[4 * v118];
          v120 = v112;
          *v115 |= ((unsigned __int8)v117 & (unsigned __int8)v119) << v114;
          if ( v116 < v112 )
            v120 = 8 - v114;
          v121 = v117 >> v116;
          v122 = v112 - v120;
          v123 = v115 + 1;
          if ( (unsigned int)v122 >= 8 )
          {
            v124 = (unsigned __int64)(unsigned int)v122 >> 3;
            do
            {
              *v123 = v121;
              v122 = (unsigned int)(v122 - 8);
              v121 >>= 8;
              ++v123;
              --v124;
            }
            while ( v124 );
          }
          if ( (_DWORD)v122 )
            *v123 |= (unsigned __int8)v121 & byte_140033A40[4 * v122];
          v111 = v112 + *((_DWORD *)a4 + 2);
          *((_DWORD *)a4 + 2) = v111;
        }
        v125 = *((_DWORD *)a4 + 3);
        v126 = v111 & 7;
        v127 = (_BYTE *)(*a4 + ((unsigned __int64)v111 >> 3));
        v128 = 8 - v126;
        v129 = v95 - 5;
        v130 = v111 + 2;
        v131 = 2;
        if ( v129 >= 3 )
        {
          if ( v130 <= v125 || (v131 = v125 - v111, v125 != v111) )
          {
            v139 = v131;
            if ( v128 < v131 )
              v139 = v128;
            v140 = byte_140033A40[4 * v139];
            v141 = v131;
            *v127 |= (v140 & 3) << v126;
            if ( v128 < v131 )
              v141 = 8 - v126;
            v142 = 3u >> v128;
            v143 = v131 - v141;
            v144 = v127 + 1;
            if ( (unsigned int)v143 >= 8 )
            {
              v145 = (unsigned __int64)(unsigned int)v143 >> 3;
              do
              {
                *v144 = v142;
                v143 = (unsigned int)(v143 - 8);
                v142 >>= 8;
                ++v144;
                --v145;
              }
              while ( v145 );
            }
            if ( (_DWORD)v143 )
              *v144 |= (unsigned __int8)v142 & byte_140033A40[4 * v143];
            v125 = *((_DWORD *)a4 + 3);
            v111 = v131 + *((_DWORD *)a4 + 2);
            *((_DWORD *)a4 + 2) = v111;
          }
          v146 = v129 - 3;
          v147 = v125;
          if ( v146 >= 7 )
          {
            v148 = v146 / 7;
            do
            {
              v149 = 3;
              v150 = (_BYTE *)(*a4 + ((unsigned __int64)v111 >> 3));
              v151 = v111 & 7;
              v125 = v147;
              v152 = 8 - v151;
              if ( v111 + 3 <= v147 || (v153 = v111, v149 = v147 - v111, v147 != v111) )
              {
                v154 = v149;
                if ( v152 < v149 )
                  v154 = v152;
                v155 = byte_140033A40[4 * v154];
                v156 = v149;
                *v150 |= (v155 & 7) << v151;
                if ( v152 < v149 )
                  v156 = 8 - v151;
                v157 = 7u >> v152;
                v158 = v149 - v156;
                v159 = v150 + 1;
                if ( (unsigned int)v158 >= 8 )
                {
                  v160 = (unsigned __int64)(unsigned int)v158 >> 3;
                  do
                  {
                    *v159 = v157;
                    v158 = (unsigned int)(v158 - 8);
                    v157 >>= 8;
                    ++v159;
                    --v160;
                  }
                  while ( v160 );
                }
                if ( (_DWORD)v158 )
                  *v159 |= (unsigned __int8)v157 & byte_140033A40[4 * v158];
                *((_DWORD *)a4 + 2) += v149;
                v125 = *((_DWORD *)a4 + 3);
                v147 = v125;
                v153 = *((_DWORD *)a4 + 2);
              }
              v146 -= 7;
              v111 = v153;
              --v148;
            }
            while ( v148 );
            v60 = a3;
          }
          v131 = 3;
          v161 = (_BYTE *)(*a4 + ((unsigned __int64)v111 >> 3));
          v162 = v111 & 7;
          v163 = 8 - v162;
          if ( v111 + 3 > v125 )
          {
            v131 = v125 - v111;
            if ( v125 == v111 )
              continue;
          }
          v164 = v131;
          if ( v163 < v131 )
            v164 = v163;
          v165 = byte_140033A40[4 * v164];
          v166 = v131;
          *v161 |= ((unsigned __int8)v146 & (unsigned __int8)v165) << v162;
          if ( v163 < v131 )
            v166 = 8 - v162;
          v135 = v146 >> v163;
          v136 = v131 - v166;
          v137 = v161 + 1;
          if ( (unsigned int)v136 >= 8 )
          {
            v167 = (unsigned __int64)(unsigned int)v136 >> 3;
            do
            {
              *v137 = v135;
              v136 = (unsigned int)(v136 - 8);
              v135 >>= 8;
              ++v137;
              --v167;
            }
            while ( v167 );
          }
          goto LABEL_154;
        }
        if ( v130 <= v125 || (v131 = v125 - v111, v125 != v111) )
        {
          v132 = v131;
          if ( v128 < v131 )
            v132 = v128;
          v133 = byte_140033A40[4 * v132];
          v134 = v131;
          *v127 |= ((unsigned __int8)v129 & (unsigned __int8)v133) << v126;
          if ( v128 < v131 )
            v134 = 8 - v126;
          v135 = v129 >> v128;
          v136 = v131 - v134;
          v137 = v127 + 1;
          if ( (unsigned int)v136 >= 8 )
          {
            v138 = (unsigned __int64)(unsigned int)v136 >> 3;
            do
            {
              *v137 = v135;
              v136 = (unsigned int)(v136 - 8);
              v135 >>= 8;
              ++v137;
              --v138;
            }
            while ( v138 );
          }
LABEL_154:
          if ( (_DWORD)v136 )
            *v137 |= (unsigned __int8)v135 & byte_140033A40[4 * v136];
          *((_DWORD *)a4 + 2) += v131;
        }
      }
      else
      {
        v96 = v175[0] & 0x1F;
        v97 = v175[0] >> 5;
        do
        {
          v98 = *((_DWORD *)a4 + 2);
          v99 = *((_DWORD *)a4 + 3);
          v100 = (_BYTE *)(*a4 + ((unsigned __int64)v98 >> 3));
          v101 = v98 & 7;
          v102 = 8 - v101;
          v103 = v96;
          if ( v98 + v96 <= v99 || (v103 = v99 - v98, v99 != v98) )
          {
            v104 = v103;
            if ( v102 < v103 )
              v104 = v102;
            v105 = byte_140033A40[4 * v104];
            v106 = v103;
            *v100 |= ((unsigned __int8)v97 & (unsigned __int8)v105) << v101;
            if ( v102 < v103 )
              v106 = 8 - v101;
            v107 = v100 + 1;
            v108 = v97 >> v102;
            v109 = v103 - v106;
            if ( (unsigned int)v109 >= 8 )
            {
              v110 = (unsigned __int64)(unsigned int)v109 >> 3;
              do
              {
                *v107 = v108;
                v109 = (unsigned int)(v109 - 8);
                v108 >>= 8;
                ++v107;
                --v110;
              }
              while ( v110 );
            }
            if ( (_DWORD)v109 )
              *v107 |= (unsigned __int8)v108 & byte_140033A40[4 * v109];
            *((_DWORD *)a4 + 2) += v103;
          }
          --v95;
        }
        while ( v95 );
        v60 = a3;
      }
    }
  }
  return 0LL;
}
