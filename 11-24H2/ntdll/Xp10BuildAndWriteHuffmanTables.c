/*
 * XREFs of Xp10BuildAndWriteHuffmanTables @ 0x18014BBE8
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x18014B818 (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     Xp10BuildHuffmanEncodings @ 0x18014C8E0 (Xp10BuildHuffmanEncodings.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanTables(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // r9d
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // dx
  unsigned int v14; // r8d
  __int64 v15; // r12
  unsigned int v16; // r14d
  _DWORD *v17; // r15
  unsigned int v18; // r10d
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  int v22; // eax
  _BYTE *v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned int v27; // r9d
  int v28; // esi
  _BYTE *v29; // r8
  unsigned int v30; // r11d
  __int64 v31; // rax
  char v32; // dl
  unsigned int v33; // eax
  unsigned int v34; // r10d
  __int64 v35; // rdx
  _BYTE *v36; // r8
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // edx
  int v40; // esi
  _BYTE *v41; // r8
  unsigned int v42; // r10d
  unsigned int v43; // r9d
  unsigned int v44; // r11d
  __int64 v45; // rax
  char v46; // dl
  unsigned int v47; // eax
  unsigned int v48; // r11d
  __int64 v49; // rdx
  _BYTE *v50; // r8
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  char v53; // dl
  unsigned int v54; // eax
  unsigned __int64 v55; // rax
  unsigned __int16 v56; // r15
  int v57; // r12d
  unsigned int v58; // r13d
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // eax
  __int64 v62; // rax
  unsigned int v63; // edx
  int v64; // ecx
  unsigned int v65; // r11d
  _BYTE *v66; // r8
  unsigned int v67; // r9d
  unsigned int v68; // r10d
  __int64 v69; // rax
  char v70; // dl
  unsigned int v71; // eax
  unsigned int v72; // r10d
  __int64 v73; // rdx
  _BYTE *v74; // r8
  unsigned __int64 v75; // rax
  unsigned __int16 v76; // r10
  int v77; // esi
  unsigned int v78; // r14d
  unsigned int v79; // edx
  int v80; // ecx
  _BYTE *v81; // r8
  unsigned int v82; // edi
  unsigned int v83; // r9d
  __int64 v84; // rax
  char v85; // dl
  int v86; // eax
  _BYTE *v87; // r8
  unsigned int v88; // r11d
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned int v91; // r9d
  int v92; // esi
  unsigned int v93; // r14d
  unsigned int v94; // edx
  int v95; // ecx
  _BYTE *v96; // r8
  unsigned int v97; // edi
  unsigned int v98; // r10d
  __int64 v99; // rax
  char v100; // dl
  int v101; // eax
  unsigned int v102; // r11d
  __int64 v103; // rdx
  _BYTE *v104; // r8
  unsigned __int64 v105; // rax
  unsigned int v107; // ecx
  unsigned int v108; // r10d
  _BYTE *v109; // r8
  int v110; // esi
  unsigned int v111; // r11d
  unsigned int v112; // edi
  __int64 v113; // rax
  char v114; // dl
  unsigned int v115; // eax
  unsigned int v116; // r11d
  __int64 v117; // rdx
  _BYTE *v118; // r8
  unsigned __int64 v119; // rax
  unsigned int v120; // edx
  int v121; // edi
  _BYTE *v122; // r8
  unsigned int v123; // r11d
  unsigned int v124; // r9d
  unsigned int v125; // eax
  unsigned int v126; // r10d
  __int64 v127; // rax
  char v128; // dl
  unsigned int v129; // eax
  unsigned int v130; // r9d
  __int64 v131; // rdx
  _BYTE *v132; // r8
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  char v135; // dl
  unsigned int v136; // eax
  unsigned int v137; // edi
  __int64 v138; // rdx
  _BYTE *v139; // r8
  unsigned __int64 v140; // rax
  unsigned int v141; // r9d
  unsigned int v142; // r11d
  __int64 v143; // r14
  unsigned int v144; // r10d
  _BYTE *v145; // r8
  int v146; // esi
  unsigned int v147; // edi
  unsigned int v148; // eax
  __int64 v149; // rax
  char v150; // dl
  unsigned int v151; // eax
  unsigned int v152; // r11d
  __int64 v153; // rdx
  _BYTE *v154; // r8
  unsigned __int64 v155; // rax
  _BYTE *v156; // r8
  int v157; // edi
  unsigned int v158; // r11d
  __int64 v159; // rax
  char v160; // dl
  unsigned int v161; // eax
  unsigned __int64 v162; // rax
  int v164; // [rsp+34h] [rbp-CCh]
  _DWORD v166[28]; // [rsp+40h] [rbp-C0h] BYREF
  int v167; // [rsp+B0h] [rbp-50h]
  int v168; // [rsp+B4h] [rbp-4Ch]
  _DWORD v169[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v170; // [rsp+140h] [rbp+40h]
  unsigned int v171; // [rsp+144h] [rbp+44h]

  memset_thunk_772440563353939046(v166, 0, 0x84uLL);
  memset_thunk_772440563353939046(v169, 0, 0x84uLL);
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
      ++v166[v11];
      ++v9;
    }
    else
    {
      v13 = v9;
      while ( v9 < a3 && (*(_BYTE *)(a2 + 4LL * v9) & 0x1F) == 0 )
        ++v9;
      while ( (unsigned __int16)(v13 ^ v9) >= 0x10u )
      {
        ++v167;
        v13 = (v13 & 0xFFF0) + 16;
      }
      v14 = v9 - v13;
      if ( v9 != v13 )
      {
        if ( v14 >= 5 )
          ++v168;
        else
          v166[0] += v14;
      }
    }
  }
  v15 = 33LL;
  Xp10BuildHuffmanEncodings(a1, (unsigned int)v166, 33, 8, (__int64)v169);
  v16 = 4;
  v17 = v169;
  do
  {
    v18 = *(_DWORD *)(a4 + 12);
    v19 = *v17 & 0x1F;
    v20 = *(unsigned int *)(a4 + 8);
    if ( v19 != v16 )
    {
      v27 = 1;
      v28 = *(_DWORD *)(a4 + 8) & 7;
      v29 = (_BYTE *)(*(_QWORD *)a4 + (v20 >> 3));
      v30 = 8 - v28;
      if ( (int)v20 + 1 <= v18 || (v27 = v18 - v20, v18 != (_DWORD)v20) )
      {
        v31 = v27;
        if ( v30 < v27 )
          v31 = v30;
        v32 = byte_1801847A8[4 * v31];
        v33 = v27;
        *v29 |= (v32 & 1) << v28;
        if ( v30 < v27 )
          v33 = 8 - v28;
        v34 = 1u >> v30;
        v35 = v27 - v33;
        v36 = v29 + 1;
        if ( (unsigned int)v35 >= 8 )
        {
          v37 = (unsigned __int64)(unsigned int)v35 >> 3;
          do
          {
            *v36 = v34;
            v35 = (unsigned int)(v35 - 8);
            v34 >>= 8;
            ++v36;
            --v37;
          }
          while ( v37 );
        }
        if ( (_DWORD)v35 )
          *v36 |= (unsigned __int8)v34 & byte_1801847A8[4 * v35];
        LODWORD(v20) = v27 + *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = v20;
      }
      v38 = *(_DWORD *)(a4 + 12);
      v39 = v20 + 3;
      v40 = v20 & 7;
      v41 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)(unsigned int)v20 >> 3));
      v42 = 8 - v40;
      v43 = 3;
      if ( v19 <= v16 )
      {
        if ( v39 <= v38 || (v43 = v38 - v20, v38 != (_DWORD)v20) )
        {
          v52 = v43;
          if ( v42 < v43 )
            v52 = v42;
          v53 = byte_1801847A8[4 * v52];
          v54 = v43;
          *v41 |= ((unsigned __int8)v19 & (unsigned __int8)v53) << v40;
          if ( v42 < v43 )
            v54 = 8 - v40;
          v48 = v19 >> v42;
          v49 = v43 - v54;
          v50 = v41 + 1;
          if ( (unsigned int)v49 >= 8 )
          {
            v55 = (unsigned __int64)(unsigned int)v49 >> 3;
            do
            {
              *v50 = v48;
              v49 = (unsigned int)(v49 - 8);
              v48 >>= 8;
              ++v50;
              --v55;
            }
            while ( v55 );
          }
          goto LABEL_68;
        }
      }
      else
      {
        v44 = v19 - 1;
        if ( v39 <= v38 || (v43 = v38 - v20, v38 != (_DWORD)v20) )
        {
          v45 = v43;
          if ( v42 < v43 )
            v45 = v42;
          v46 = byte_1801847A8[4 * v45];
          v47 = v43;
          *v41 |= ((unsigned __int8)v44 & (unsigned __int8)v46) << v40;
          if ( v42 < v43 )
            v47 = 8 - v40;
          v48 = v44 >> v42;
          v49 = v43 - v47;
          v50 = v41 + 1;
          if ( (unsigned int)v49 >= 8 )
          {
            v51 = (unsigned __int64)(unsigned int)v49 >> 3;
            do
            {
              *v50 = v48;
              v49 = (unsigned int)(v49 - 8);
              v48 >>= 8;
              ++v50;
              --v51;
            }
            while ( v51 );
          }
LABEL_68:
          if ( (_DWORD)v49 )
            *v50 |= (unsigned __int8)v48 & byte_1801847A8[4 * v49];
          *(_DWORD *)(a4 + 8) += v43;
        }
      }
      v16 = v19;
      goto LABEL_72;
    }
    v21 = 1;
    if ( (int)v20 + 1 <= v18 || (v21 = v18 - v20, v18 != (_DWORD)v20) )
    {
      v22 = v21;
      if ( 8 - (*(_DWORD *)(a4 + 8) & 7u) < v21 )
        v22 = 8 - (*(_DWORD *)(a4 + 8) & 7);
      v23 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)(unsigned int)v20 >> 3) + 1);
      v24 = v21 - v22;
      v25 = 0;
      if ( (unsigned int)v24 >= 8 )
      {
        v26 = (unsigned __int64)(unsigned int)v24 >> 3;
        do
        {
          *v23 = v25;
          v24 = (unsigned int)(v24 - 8);
          v25 >>= 8;
          ++v23;
          --v26;
        }
        while ( v26 );
      }
      if ( (_DWORD)v24 )
        *v23 |= (unsigned __int8)v25 & byte_1801847A8[4 * v24];
      *(_DWORD *)(a4 + 8) += v21;
    }
LABEL_72:
    ++v17;
    --v15;
  }
  while ( v15 );
  v56 = 0;
  v57 = 8;
  v58 = a3;
  v164 = 8;
  while ( v56 < v58 )
  {
    v59 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
    if ( v59 )
    {
      v60 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
      if ( v59 == v57 )
      {
        v60 = 30;
      }
      else
      {
        if ( v56 >= 0x10u )
        {
          v61 = *(_DWORD *)(a2 + 4LL * v56 - 64) & 0x1F;
          if ( v59 == v61 )
          {
            v60 = 31;
          }
          else if ( v59 == v61 + 1 )
          {
            v60 = 32;
          }
        }
        v57 = *(_DWORD *)(a2 + 4LL * v56) & 0x1F;
        v164 = v57;
      }
      v62 = v60;
      v63 = *(_DWORD *)(a4 + 8);
      v64 = v63 & 7;
      v65 = 8 - v64;
      v66 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v63 >> 3));
      v67 = v169[v62] & 0x1F;
      v68 = v169[v62] >> 5;
      if ( v63 + v67 <= *(_DWORD *)(a4 + 12) || (v67 = *(_DWORD *)(a4 + 12) - v63) != 0 )
      {
        v69 = v67;
        if ( v65 < v67 )
          v69 = v65;
        v70 = byte_1801847A8[4 * v69];
        v71 = v67;
        *v66 |= ((unsigned __int8)v68 & (unsigned __int8)v70) << v64;
        if ( v65 < v67 )
          v71 = 8 - v64;
        v72 = v68 >> v65;
        v73 = v67 - v71;
        v74 = v66 + 1;
        if ( (unsigned int)v73 >= 8 )
        {
          v75 = (unsigned __int64)(unsigned int)v73 >> 3;
          do
          {
            *v74 = v72;
            v73 = (unsigned int)(v73 - 8);
            v72 >>= 8;
            ++v74;
            --v75;
          }
          while ( v75 );
        }
        if ( (_DWORD)v73 )
          *v74 |= (unsigned __int8)v72 & byte_1801847A8[4 * v73];
        *(_DWORD *)(a4 + 8) += v67;
      }
      ++v56;
    }
    else
    {
      v76 = v56;
      while ( v56 < v58 && (*(_BYTE *)(a2 + 4LL * v56) & 0x1F) == 0 )
        ++v56;
      if ( (unsigned __int16)(v76 ^ v56) >= 0x10u )
      {
        v77 = v170 & 0x1F;
        v78 = v170 >> 5;
        do
        {
          v79 = *(_DWORD *)(a4 + 8);
          v80 = v79 & 7;
          v81 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v79 >> 3));
          v82 = 8 - v80;
          v83 = v77;
          if ( v79 + v77 <= *(_DWORD *)(a4 + 12) || (v83 = *(_DWORD *)(a4 + 12) - v79) != 0 )
          {
            v84 = v83;
            if ( v82 < v83 )
              v84 = v82;
            v85 = byte_1801847A8[4 * v84];
            v86 = v83;
            *v81 |= ((unsigned __int8)v78 & (unsigned __int8)v85) << v80;
            if ( v82 < v83 )
              v86 = 8 - v80;
            v87 = v81 + 1;
            v88 = v78 >> v82;
            v89 = v83 - v86;
            if ( (unsigned int)v89 >= 8 )
            {
              v90 = (unsigned __int64)(unsigned int)v89 >> 3;
              do
              {
                *v87 = v88;
                v89 = (unsigned int)(v89 - 8);
                v88 >>= 8;
                ++v87;
                --v90;
              }
              while ( v90 );
            }
            if ( (_DWORD)v89 )
              *v87 |= (unsigned __int8)v88 & byte_1801847A8[4 * v89];
            *(_DWORD *)(a4 + 8) += v83;
          }
          v76 = (v76 & 0xFFF0) + 16;
        }
        while ( (unsigned __int16)(v76 ^ v56) >= 0x10u );
        v57 = v164;
        v58 = a3;
      }
      v91 = v56 - v76;
      if ( v56 == v76 )
        continue;
      if ( v91 >= 5 )
      {
        v107 = *(_DWORD *)(a4 + 8);
        v108 = v171 & 0x1F;
        v109 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v107 >> 3));
        v110 = v107 & 7;
        v111 = v171 >> 5;
        v112 = 8 - v110;
        if ( v107 + v108 <= *(_DWORD *)(a4 + 12) || (v108 = *(_DWORD *)(a4 + 12) - v107) != 0 )
        {
          v113 = v108;
          if ( v112 < v108 )
            v113 = v112;
          v114 = byte_1801847A8[4 * v113];
          v115 = v108;
          *v109 |= ((unsigned __int8)v111 & (unsigned __int8)v114) << v110;
          if ( v112 < v108 )
            v115 = 8 - v110;
          v116 = v111 >> v112;
          v117 = v108 - v115;
          v118 = v109 + 1;
          if ( (unsigned int)v117 >= 8 )
          {
            v119 = (unsigned __int64)(unsigned int)v117 >> 3;
            do
            {
              *v118 = v116;
              v117 = (unsigned int)(v117 - 8);
              v116 >>= 8;
              ++v118;
              --v119;
            }
            while ( v119 );
          }
          if ( (_DWORD)v117 )
            *v118 |= (unsigned __int8)v116 & byte_1801847A8[4 * v117];
          v107 = v108 + *(_DWORD *)(a4 + 8);
          *(_DWORD *)(a4 + 8) = v107;
        }
        v120 = *(_DWORD *)(a4 + 12);
        v121 = v107 & 7;
        v122 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v107 >> 3));
        v123 = 8 - v121;
        v124 = v91 - 5;
        v125 = v107 + 2;
        v126 = 2;
        if ( v124 >= 3 )
        {
          if ( v125 <= v120 || (v126 = v120 - v107, v120 != v107) )
          {
            v134 = v126;
            if ( v123 < v126 )
              v134 = v123;
            v135 = byte_1801847A8[4 * v134];
            v136 = v126;
            *v122 |= (v135 & 3) << v121;
            if ( v123 < v126 )
              v136 = 8 - v121;
            v137 = 3u >> v123;
            v138 = v126 - v136;
            v139 = v122 + 1;
            if ( (unsigned int)v138 >= 8 )
            {
              v140 = (unsigned __int64)(unsigned int)v138 >> 3;
              do
              {
                *v139 = v137;
                v138 = (unsigned int)(v138 - 8);
                v137 >>= 8;
                ++v139;
                --v140;
              }
              while ( v140 );
            }
            if ( (_DWORD)v138 )
              *v139 |= (unsigned __int8)v137 & byte_1801847A8[4 * v138];
            v120 = *(_DWORD *)(a4 + 12);
            v107 = v126 + *(_DWORD *)(a4 + 8);
            *(_DWORD *)(a4 + 8) = v107;
          }
          v141 = v124 - 3;
          v142 = v120;
          if ( v141 >= 7 )
          {
            v143 = v141 / 7;
            do
            {
              v144 = 3;
              v145 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v107 >> 3));
              v146 = v107 & 7;
              v120 = v142;
              v147 = 8 - v146;
              if ( v107 + 3 <= v142 || (v148 = v107, v144 = v142 - v107, v142 != v107) )
              {
                v149 = v144;
                if ( v147 < v144 )
                  v149 = v147;
                v150 = byte_1801847A8[4 * v149];
                v151 = v144;
                *v145 |= (v150 & 7) << v146;
                if ( v147 < v144 )
                  v151 = 8 - v146;
                v152 = 7u >> v147;
                v153 = v144 - v151;
                v154 = v145 + 1;
                if ( (unsigned int)v153 >= 8 )
                {
                  v155 = (unsigned __int64)(unsigned int)v153 >> 3;
                  do
                  {
                    *v154 = v152;
                    v153 = (unsigned int)(v153 - 8);
                    v152 >>= 8;
                    ++v154;
                    --v155;
                  }
                  while ( v155 );
                }
                if ( (_DWORD)v153 )
                  *v154 |= (unsigned __int8)v152 & byte_1801847A8[4 * v153];
                *(_DWORD *)(a4 + 8) += v144;
                v120 = *(_DWORD *)(a4 + 12);
                v142 = v120;
                v148 = *(_DWORD *)(a4 + 8);
              }
              v141 -= 7;
              v107 = v148;
              --v143;
            }
            while ( v143 );
            v58 = a3;
          }
          v126 = 3;
          v156 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v107 >> 3));
          v157 = v107 & 7;
          v158 = 8 - v157;
          if ( v107 + 3 > v120 )
          {
            v126 = v120 - v107;
            if ( v120 == v107 )
              continue;
          }
          v159 = v126;
          if ( v158 < v126 )
            v159 = v158;
          v160 = byte_1801847A8[4 * v159];
          v161 = v126;
          *v156 |= ((unsigned __int8)v141 & (unsigned __int8)v160) << v157;
          if ( v158 < v126 )
            v161 = 8 - v157;
          v130 = v141 >> v158;
          v131 = v126 - v161;
          v132 = v156 + 1;
          if ( (unsigned int)v131 >= 8 )
          {
            v162 = (unsigned __int64)(unsigned int)v131 >> 3;
            do
            {
              *v132 = v130;
              v131 = (unsigned int)(v131 - 8);
              v130 >>= 8;
              ++v132;
              --v162;
            }
            while ( v162 );
          }
          goto LABEL_157;
        }
        if ( v125 <= v120 || (v126 = v120 - v107, v120 != v107) )
        {
          v127 = v126;
          if ( v123 < v126 )
            v127 = v123;
          v128 = byte_1801847A8[4 * v127];
          v129 = v126;
          *v122 |= ((unsigned __int8)v124 & (unsigned __int8)v128) << v121;
          if ( v123 < v126 )
            v129 = 8 - v121;
          v130 = v124 >> v123;
          v131 = v126 - v129;
          v132 = v122 + 1;
          if ( (unsigned int)v131 >= 8 )
          {
            v133 = (unsigned __int64)(unsigned int)v131 >> 3;
            do
            {
              *v132 = v130;
              v131 = (unsigned int)(v131 - 8);
              v130 >>= 8;
              ++v132;
              --v133;
            }
            while ( v133 );
          }
LABEL_157:
          if ( (_DWORD)v131 )
            *v132 |= (unsigned __int8)v130 & byte_1801847A8[4 * v131];
          *(_DWORD *)(a4 + 8) += v126;
        }
      }
      else
      {
        v92 = v169[0] & 0x1F;
        v93 = v169[0] >> 5;
        do
        {
          v94 = *(_DWORD *)(a4 + 8);
          v95 = v94 & 7;
          v96 = (_BYTE *)(*(_QWORD *)a4 + ((unsigned __int64)v94 >> 3));
          v97 = 8 - v95;
          v98 = v92;
          if ( v94 + v92 <= *(_DWORD *)(a4 + 12) || (v98 = *(_DWORD *)(a4 + 12) - v94) != 0 )
          {
            v99 = v98;
            if ( v97 < v98 )
              v99 = v97;
            v100 = byte_1801847A8[4 * v99];
            v101 = v98;
            *v96 |= ((unsigned __int8)v93 & (unsigned __int8)v100) << v95;
            if ( v97 < v98 )
              v101 = 8 - v95;
            v102 = v93 >> v97;
            v103 = v98 - v101;
            v104 = v96 + 1;
            if ( (unsigned int)v103 >= 8 )
            {
              v105 = (unsigned __int64)(unsigned int)v103 >> 3;
              do
              {
                *v104 = v102;
                v103 = (unsigned int)(v103 - 8);
                v102 >>= 8;
                ++v104;
                --v105;
              }
              while ( v105 );
            }
            if ( (_DWORD)v103 )
              *v104 |= (unsigned __int8)v102 & byte_1801847A8[4 * v103];
            *(_DWORD *)(a4 + 8) += v98;
          }
          --v91;
        }
        while ( v91 );
        v58 = a3;
      }
    }
  }
  return 0LL;
}
