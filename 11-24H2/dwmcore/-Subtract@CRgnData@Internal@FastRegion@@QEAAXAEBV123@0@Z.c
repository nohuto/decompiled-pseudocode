/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002DB30
 * Callers:
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C0A0 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x18002C4D0 (-AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x18002D120 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1801B34C0 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1801C3660 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // r10
  int *v6; // rcx
  __int64 v7; // rdx
  int *v8; // rbp
  int *v9; // r12
  const struct FastRegion::Internal::CStripe *v10; // r13
  int *v11; // rbx
  int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  const struct FastRegion::Internal::CStripe *v15; // rsi
  _DWORD *v16; // rdx
  int *v17; // rdi
  int *v18; // rcx
  char *v19; // rax
  char *v20; // r11
  int *v21; // r8
  int v22; // eax
  int v23; // edx
  const struct FastRegion::Internal::CStripe *v24; // r8
  __int64 v25; // rdx
  _DWORD *v26; // rdx
  int *v27; // rcx
  int *v28; // r9
  int *v29; // r8
  int *v30; // r11
  int v31; // eax
  __int64 v32; // r11
  _DWORD *v33; // r11
  char *v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  _DWORD *v37; // rcx
  __int64 v38; // r8
  int *v39; // r8
  int v40; // eax
  int *v41; // rdx
  int v42; // ecx
  __int64 v43; // r11
  _DWORD *v44; // rdx
  int *v45; // r8
  int *v46; // rax
  int *v47; // rcx
  int v48; // eax
  int *v49; // rax
  int v50; // r9d
  int v51; // edx
  int v52; // eax
  const struct FastRegion::Internal::CStripe *v53; // r11
  int v54; // ecx
  int *v55; // rdx
  int *v56; // r10
  const struct FastRegion::Internal::CStripe *v57; // r8
  __int64 v58; // rax
  int *v59; // rbx
  _DWORD *v60; // rax
  int *kk; // rbx
  _DWORD *v62; // rdx
  int v63; // ecx
  __int64 v64; // r9
  _DWORD *v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r10
  _DWORD *v68; // r8
  char *v69; // rdx
  int *v70; // rdx
  int v71; // r8d
  int *v72; // rdi
  __int64 v73; // r15
  _BYTE *v74; // r15
  __int64 v75; // rax
  _BYTE *v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rcx
  int v79; // ecx
  _DWORD *v80; // rdx
  __int64 v81; // r10
  __int64 ii; // rcx
  char *v83; // r9
  char *v84; // rsi
  __int64 v85; // r11
  __int64 v86; // rdx
  _DWORD *v87; // rcx
  __int64 v88; // r9
  int v89; // ecx
  _DWORD *v90; // rdx
  __int64 v91; // r11
  __int64 i; // rcx
  __int64 v93; // rcx
  int v94; // r10d
  __int64 v95; // r11
  _DWORD *v96; // rdx
  int *v97; // rcx
  int *v98; // r8
  int *v99; // r9
  int v100; // eax
  int v101; // r9d
  int v102; // r10d
  int v103; // r9d
  int v104; // r10d
  int *v105; // r8
  int v106; // eax
  int *v107; // rcx
  int v108; // eax
  _DWORD *v109; // r9
  __int64 v110; // r11
  __int64 n; // rcx
  __int64 v112; // r10
  _DWORD *v113; // r10
  char *v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  _DWORD *v117; // rcx
  __int64 v118; // r8
  int *v119; // r9
  int v120; // edx
  _DWORD *v121; // r8
  __int64 v122; // r11
  __int64 j; // rcx
  __int64 v124; // r10
  _DWORD *v125; // r10
  char *v126; // r8
  __int64 v127; // rcx
  __int64 v128; // r9
  _DWORD *v129; // rdx
  __int64 v130; // r8
  _DWORD *v131; // r9
  __int64 v132; // r10
  __int64 jj; // rcx
  int *v134; // r8
  int v135; // eax
  _DWORD *v136; // r8
  __int64 v137; // r11
  __int64 m; // rcx
  int v139; // r10d
  int v140; // eax
  int v141; // r10d
  int v142; // eax
  int v143; // r10d
  int v144; // r9d
  int v145; // r10d
  int v146; // r9d
  int v147; // r10d
  int *v148; // rax
  int v149; // r9d
  int v150; // r10d
  __int64 v151; // r8
  char *v152; // r8
  __int64 v153; // rax
  char *v154; // r9
  __int64 v155; // rdx
  __int64 v156; // rcx
  int v157; // r10d
  int v158; // eax
  int v159; // r10d
  int v160; // eax
  int v161; // r10d
  __int64 v162; // r11
  _DWORD *v163; // rdx
  int *v164; // r8
  int *v165; // rax
  int *v166; // rcx
  int v167; // eax
  signed __int64 v168; // rdx
  _DWORD *v169; // rcx
  __int64 v170; // r8
  _DWORD *v171; // r8
  __int64 v172; // r11
  __int64 k; // rcx
  int v174; // r9d
  int v175; // r10d
  int v176; // r9d
  int v177; // r10d
  int *v178; // rax
  int v179; // r9d
  int v180; // r10d
  const struct FastRegion::Internal::CStripe *v181; // r9
  int *v182; // r11
  int *v183; // r10

  v3 = *(int *)a2;
  v4 = (int *)((char *)a3 + 12);
  v6 = (int *)((char *)a2 + 12);
  v7 = *(int *)a3;
  v8 = (int *)((char *)this + 12);
  v9 = &v6[2 * v3];
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v7 + 12);
  v11 = (int *)((char *)this + 12);
  v12 = 8 * (v7 + v3);
  *((_DWORD *)this + 4) = v12;
  v13 = v12;
  v14 = *v6;
  if ( *v6 >= *((_DWORD *)a3 + 3) )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( v14 <= *v4 )
    {
      *v8 = v14;
      v16 = (int *)((char *)v8 + v13);
      v17 = v6 + 2;
      v18 = (int *)((char *)v6 + v6[1]);
      v19 = (char *)a3 + *((int *)a3 + 4) + 12;
      v20 = (char *)a3 + *((int *)a3 + 6) + 20;
      v21 = (int *)((char *)v17 + v17[1]);
      if ( v18 == v21 )
        goto LABEL_30;
      if ( v19 == v20 )
        goto LABEL_5;
LABEL_92:
      while ( 1 )
      {
        v101 = *v18;
        v102 = *(_DWORD *)v19;
        if ( *v18 < *(_DWORD *)v19 )
          break;
        v49 = (int *)(v19 + 4);
        if ( v102 >= v101 )
        {
          v50 = *v49;
          goto LABEL_26;
        }
        while ( 1 )
        {
          v94 = *v18;
          v50 = *v49;
          if ( *v18 >= *v49 )
          {
            v19 = (char *)(v49 + 1);
            if ( v50 < v94 )
            {
              if ( v19 != v20 )
                goto LABEL_92;
              goto LABEL_86;
            }
            *v16 = v94;
            ++v18;
            ++v16;
            if ( v19 == v20 )
              goto LABEL_86;
LABEL_94:
            v103 = *v18;
            v104 = *(_DWORD *)v19;
            if ( *v18 >= *(_DWORD *)v19 )
            {
              v49 = (int *)(v19 + 4);
              if ( v104 < v103 )
              {
                *v16++ = v104;
                v50 = *v49;
                goto LABEL_27;
              }
              *v16++ = v103;
              goto LABEL_82;
            }
            *v16 = v103;
            ++v18;
            ++v16;
            if ( v18 != v21 )
              goto LABEL_92;
LABEL_86:
            if ( v18 != v21 )
              goto LABEL_5;
LABEL_30:
            v51 = (_DWORD)v16 - ((_DWORD)this + 20);
            *((_DWORD *)this + 6) = v51;
            if ( v51 - *((_DWORD *)this + 4) != -8 )
              v11 = (int *)((char *)this + 20);
            goto LABEL_32;
          }
LABEL_26:
          ++v18;
LABEL_27:
          if ( *v18 >= v50 )
            break;
LABEL_82:
          if ( ++v18 == v21 )
            goto LABEL_30;
        }
        v19 = (char *)(v49 + 1);
        if ( v50 < *v18 )
        {
          *v16++ = v50;
          if ( v19 == v20 )
            goto LABEL_86;
          goto LABEL_94;
        }
        if ( ++v18 == v21 )
          goto LABEL_30;
        if ( v19 == v20 )
        {
          do
          {
LABEL_5:
            v22 = *v18++;
            *v16++ = v22;
          }
          while ( v18 != v21 );
          goto LABEL_30;
        }
      }
      ++v18;
      *v16++ = v101;
      goto LABEL_94;
    }
    while ( 1 )
    {
      v23 = *(_DWORD *)v15;
      v24 = v15;
      if ( v14 < *(_DWORD *)v15 )
      {
        v25 = *((int *)this + 4);
        v17 = v6 + 2;
        *v8 = v14;
        v26 = (int *)((char *)v11 + v25);
        v27 = (int *)((char *)v6 + v6[1]);
        v28 = (int *)((char *)v17 + v17[1]);
        v29 = (int *)((char *)v15 + *((int *)v15 - 1) - 8);
        v30 = (int *)((char *)v15 + *((int *)v15 + 1));
        if ( v27 == v28 )
          goto LABEL_103;
        if ( v29 == v30 )
          goto LABEL_10;
        while ( 1 )
        {
LABEL_159:
          v140 = *v27;
          v141 = *v29;
          if ( *v27 < *v29 )
          {
            ++v27;
            *v26++ = v140;
            goto LABEL_161;
          }
          v105 = v29 + 1;
          if ( v141 >= v140 )
          {
            v106 = *v105;
            goto LABEL_99;
          }
          while ( 1 )
          {
            v139 = *v27;
            v106 = *v105;
            if ( *v27 >= *v105 )
            {
              v29 = v105 + 1;
              if ( v106 < v139 )
              {
                if ( v29 != v30 )
                  goto LABEL_159;
LABEL_157:
                if ( v27 == v28 )
                  goto LABEL_103;
                goto LABEL_10;
              }
              *v26 = v139;
              ++v27;
              ++v26;
              if ( v29 == v30 )
                goto LABEL_157;
LABEL_161:
              v142 = *v27;
              v143 = *v29;
              if ( *v27 >= *v29 )
              {
                v105 = v29 + 1;
                if ( v143 < v142 )
                {
                  *v26++ = v143;
                  v106 = *v105;
                  goto LABEL_100;
                }
                *v26++ = v142;
                goto LABEL_153;
              }
              *v26 = v142;
              ++v27;
              ++v26;
              if ( v27 != v28 )
                goto LABEL_159;
LABEL_103:
              *((_DWORD *)this + 6) = (_DWORD)v26 - ((_DWORD)this + 20);
              v107 = (int *)((char *)this + 20);
              v108 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
              goto LABEL_104;
            }
LABEL_99:
            ++v27;
LABEL_100:
            if ( *v27 >= v106 )
              break;
LABEL_153:
            if ( ++v27 == v28 )
              goto LABEL_103;
          }
          v29 = v105 + 1;
          if ( v106 < *v27 )
          {
            *v26++ = v106;
            if ( v29 == v30 )
              goto LABEL_157;
            goto LABEL_161;
          }
          if ( ++v27 == v28 )
            goto LABEL_103;
          if ( v29 == v30 )
          {
            do
            {
LABEL_10:
              v31 = *v27++;
              *v26++ = v31;
            }
            while ( v27 != v28 );
            goto LABEL_103;
          }
        }
      }
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v14 <= v23 )
        break;
      if ( v15 == v10 )
      {
        v151 = *((int *)this + 4);
        v17 = v6 + 2;
        *v8 = v14;
        v152 = (char *)v11 + v151;
        v153 = v6[1];
        v154 = (char *)v6 + v153;
        v155 = (v6[3] - (v153 - 8)) >> 2;
        if ( (int)v155 > 0 )
        {
          v156 = 0LL;
          do
          {
            *(_DWORD *)&v152[4 * v156] = *(_DWORD *)&v154[4 * v156];
            ++v156;
          }
          while ( v156 < (int)v155 );
        }
        *((_DWORD *)this + 6) = (_DWORD)v152 + 4 * v155 - ((_DWORD)this + 20);
        if ( v11 == v8 )
        {
          if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 4) != -8 )
            v11 = (int *)((char *)this + 20);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CRgnData *)((char *)this + 12)) )
        {
          v11 = v183;
        }
        goto LABEL_56;
      }
    }
    v17 = v6 + 2;
    if ( v15 != v10 )
    {
      FastRegion::Internal::CStripe::Subtract(
        (FastRegion::Internal::CRgnData *)((char *)this + 12),
        (const struct FastRegion::Internal::CStripe *)v6,
        v24,
        (const struct FastRegion::Internal::CStripe *)v6);
      if ( v11 != v8 )
        goto LABEL_270;
      v107 = (int *)((char *)this + 20);
      v108 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
      goto LABEL_104;
    }
    v112 = *((int *)this + 4);
    *v8 = v14;
    v113 = (int *)((char *)v11 + v112);
    v114 = (char *)v6 + v6[1];
    v115 = (v6[3] - (__int64)v6[1] + 8) >> 2;
    v116 = (int)v115;
    if ( (int)v115 > 0 )
    {
      v117 = v113;
      v118 = v114 - (char *)v113;
      do
      {
        *v117 = *(_DWORD *)((char *)v117 + v118);
        ++v117;
        --v116;
      }
      while ( v116 );
    }
    *((_DWORD *)this + 6) = (_DWORD)v113 + 4 * v115 - ((_DWORD)this + 20);
    if ( v11 == v8 )
    {
      if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 4) != -8 )
        v11 = (int *)((char *)this + 20);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CRgnData *)((char *)this + 12)) )
    {
      v11 = v182;
    }
    goto LABEL_56;
  }
  v32 = *((int *)this + 4);
  v17 = v6 + 2;
  *v8 = v14;
  v33 = (int *)((char *)v11 + v32);
  v34 = (char *)v6 + v6[1];
  v35 = (v6[3] - (__int64)v6[1] + 8) >> 2;
  v36 = (int)v35;
  if ( (int)v35 > 0 )
  {
    v37 = v33;
    v38 = v34 - (char *)v33;
    do
    {
      *v37 = *(_DWORD *)((char *)v37 + v38);
      ++v37;
      --v36;
    }
    while ( v36 );
  }
  *((_DWORD *)this + 6) = (_DWORD)v33 + 4 * v35 - ((_DWORD)this + 20);
  if ( (_DWORD)v33 + 4 * (_DWORD)v35 - (_DWORD)v11 != *((_DWORD *)this + 4) )
    v11 = (int *)((char *)this + 20);
  v39 = v11 + 2;
  while ( 1 )
  {
    v40 = *v17;
    v41 = v17;
    v42 = *v4;
    if ( *v17 >= *v4 )
      break;
    v17 += 2;
    *v11 = v40;
    if ( v17 == v9 )
      goto LABEL_79;
    v83 = (char *)v41 + v41[1];
    v84 = (char *)v11 + v11[1];
    v85 = ((__int64)v17 + v17[1] - (_QWORD)v83) >> 2;
    v86 = (int)v85;
    if ( (int)v85 > 0 )
    {
      v87 = (int *)((char *)v11 + v11[1]);
      v88 = v83 - v84;
      do
      {
        *v87 = *(_DWORD *)((char *)v87 + v88);
        ++v87;
        --v86;
      }
      while ( v86 );
    }
    v89 = (_DWORD)v84 + 4 * v85 - (_DWORD)v39;
    v39[1] = v89;
    if ( v11 == v8 )
    {
      if ( (_DWORD)v84 + 4 * (_DWORD)v85 - (_DWORD)v11 != v11[1] )
      {
LABEL_129:
        v11 += 2;
        v39 += 2;
      }
    }
    else
    {
      v90 = (int *)((char *)v11 + v11[1]);
      v91 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
      if ( v91 != (v89 - (__int64)v11[1] + 8) >> 2 )
        goto LABEL_129;
      for ( i = 0LL; i < v91; ++i )
      {
        if ( *v90 != *(_DWORD *)((char *)v90 + *(v11 - 1) - 8LL - v11[1]) )
          goto LABEL_129;
        ++v90;
      }
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  if ( v40 > v42 )
  {
    *v11 = v42;
    v43 = (__int64)v4 + v4[3] + 8;
    v44 = (int *)((char *)v11 + v11[1]);
    v45 = (int *)((char *)v17 + v17[1]);
    v46 = (int *)((char *)v4 + v4[1]);
    v47 = (int *)((char *)v17 + *(v17 - 1) - 8);
    if ( v47 == v45 )
    {
LABEL_119:
      if ( v47 != v45 )
        goto LABEL_22;
LABEL_120:
      v119 = v11 + 2;
      v120 = (_DWORD)v44 - ((_DWORD)v11 + 8);
      v11[3] = v120;
      if ( v11 == (int *)((char *)this + 12) )
        goto LABEL_126;
      v121 = (int *)((char *)v11 + *(v11 - 1) - 8);
      v122 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
      if ( v122 != (v120 - (__int64)v11[1] + 8) >> 2 )
        goto LABEL_127;
      for ( j = 0LL; j < v122; ++j )
      {
        if ( *(_DWORD *)((char *)v121 + v11[1] - (*(v11 - 1) - 8LL)) != *v121 )
          goto LABEL_127;
        ++v121;
      }
      goto LABEL_32;
    }
    if ( v46 == (int *)v43 )
    {
      do
      {
LABEL_22:
        v48 = *v47++;
        *v44++ = v48;
      }
      while ( v47 != v45 );
      goto LABEL_120;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_170:
        v144 = *v47;
        v145 = *v46;
        if ( *v47 < *v46 )
        {
          ++v47;
          *v44++ = v144;
          goto LABEL_172;
        }
        v148 = v46 + 1;
        if ( v145 >= v144 )
        {
          v149 = *v148;
          break;
        }
LABEL_185:
        v150 = *v47;
        v149 = *v148;
        if ( *v47 < *v148 )
          break;
        v46 = v148 + 1;
        if ( v149 >= v150 )
        {
          *v44 = v150;
          ++v47;
          ++v44;
          if ( v46 == (int *)v43 )
            goto LABEL_119;
          goto LABEL_172;
        }
        if ( v46 == (int *)v43 )
          goto LABEL_119;
      }
      ++v47;
      while ( 2 )
      {
        if ( *v47 < v149 )
        {
LABEL_184:
          if ( ++v47 == v45 )
            goto LABEL_120;
          goto LABEL_185;
        }
        v46 = v148 + 1;
        if ( v149 >= *v47 )
        {
          if ( ++v47 == v45 )
            goto LABEL_120;
          if ( v46 == (int *)v43 )
            goto LABEL_22;
          goto LABEL_170;
        }
        *v44++ = v149;
        if ( v46 == (int *)v43 )
          goto LABEL_119;
LABEL_172:
        v146 = *v47;
        v147 = *v46;
        if ( *v47 >= *v46 )
        {
          v148 = v46 + 1;
          if ( v147 < v146 )
          {
            *v44++ = v147;
            v149 = *v148;
            continue;
          }
          *v44++ = v146;
          goto LABEL_184;
        }
        break;
      }
      *v44 = v146;
      ++v47;
      ++v44;
      if ( v47 == v45 )
        goto LABEL_119;
    }
  }
  v17 += 2;
  if ( v17 != v9 )
  {
    *v11 = v42;
    v162 = (__int64)v4 + v4[3] + 8;
    v163 = (int *)((char *)v11 + v11[1]);
    v164 = (int *)((char *)v17 + v17[1]);
    v165 = (int *)((char *)v4 + v4[1]);
    v166 = (int *)((char *)v17 + *(v17 - 1) - 8);
    if ( v166 == v164 )
    {
LABEL_226:
      if ( v166 == v164 )
      {
LABEL_227:
        v119 = v11 + 2;
        v120 = (_DWORD)v163 - ((_DWORD)v11 + 8);
        v11[3] = v120;
        if ( v11 == (int *)((char *)this + 12) )
          goto LABEL_126;
        v171 = (int *)((char *)v11 + *(v11 - 1) - 8);
        v172 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
        if ( v172 != (v120 - (__int64)v11[1] + 8) >> 2 )
          goto LABEL_127;
        for ( k = 0LL; k < v172; ++k )
        {
          if ( *(_DWORD *)((char *)v171 + v11[1] - (*(v11 - 1) - 8LL)) != *v171 )
            goto LABEL_127;
          ++v171;
        }
        while ( 1 )
        {
LABEL_32:
          v52 = *v17;
          v53 = v15;
          v54 = *(_DWORD *)v15;
          v55 = v17;
          v56 = v17;
          v57 = v15;
          if ( *v17 < *(_DWORD *)v15 )
          {
            v17 += 2;
            *v11 = v52;
            if ( v17 != v9 )
            {
              v95 = (__int64)v55 + v55[3] + 8;
              v96 = (int *)((char *)v11 + v11[1]);
              v97 = (int *)((char *)v56 + v56[1]);
              v98 = (int *)((char *)v15 + *((int *)v15 - 1) - 8);
              v99 = (int *)((char *)v15 + *((int *)v15 + 1));
              if ( v97 == (int *)v95 )
                goto LABEL_146;
              if ( v98 == v99 )
                goto LABEL_90;
LABEL_205:
              while ( 2 )
              {
                while ( 1 )
                {
                  v158 = *v97;
                  v159 = *v98;
                  if ( *v97 >= *v98 )
                    break;
                  ++v97;
                  *v96++ = v158;
LABEL_207:
                  v160 = *v97;
                  v161 = *v98;
                  if ( *v97 >= *v98 )
                  {
                    v134 = v98 + 1;
                    if ( v161 < v160 )
                    {
                      *v96++ = v161;
                      v135 = *v134;
                      goto LABEL_143;
                    }
                    *v96++ = v160;
                    goto LABEL_199;
                  }
                  *v96 = v160;
                  ++v97;
                  ++v96;
                  if ( v97 == (int *)v95 )
                    goto LABEL_146;
                }
                v134 = v98 + 1;
                if ( v159 >= v158 )
                {
                  v135 = *v134;
                  goto LABEL_142;
                }
                while ( 1 )
                {
                  v157 = *v97;
                  v135 = *v134;
                  if ( *v97 >= *v134 )
                    break;
LABEL_142:
                  ++v97;
LABEL_143:
                  if ( *v97 >= v135 )
                  {
                    v98 = v134 + 1;
                    if ( v135 >= *v97 )
                    {
                      if ( ++v97 == (int *)v95 )
                        goto LABEL_146;
                      if ( v98 != v99 )
                        goto LABEL_205;
                      do
                      {
LABEL_90:
                        v100 = *v97++;
                        *v96++ = v100;
                      }
                      while ( v97 != (int *)v95 );
LABEL_146:
                      v119 = v11 + 2;
                      v120 = (_DWORD)v96 - ((_DWORD)v11 + 8);
                      v11[3] = v120;
                      if ( v11 == (int *)((char *)this + 12) )
                      {
LABEL_126:
                        if ( !((_DWORD)v119 + v120 - v11[1] - (_DWORD)v11) )
                          goto LABEL_32;
                      }
                      else
                      {
                        v136 = (int *)((char *)v11 + *(v11 - 1) - 8);
                        v137 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
                        if ( v137 == (v120 - (__int64)v11[1] + 8) >> 2 )
                        {
                          for ( m = 0LL; m < v137; ++m )
                          {
                            if ( *(_DWORD *)((char *)v136 + v11[1] - (*(v11 - 1) - 8LL)) != *v136 )
                              goto LABEL_127;
                            ++v136;
                          }
                          goto LABEL_32;
                        }
                      }
LABEL_127:
                      v11 = v119;
                      goto LABEL_32;
                    }
                    *v96++ = v135;
                    if ( v98 != v99 )
                      goto LABEL_207;
LABEL_203:
                    if ( v97 != (int *)v95 )
                      goto LABEL_90;
                    goto LABEL_146;
                  }
LABEL_199:
                  if ( ++v97 == (int *)v95 )
                    goto LABEL_146;
                }
                v98 = v134 + 1;
                if ( v135 >= v157 )
                {
                  *v96 = v157;
                  ++v97;
                  ++v96;
                  if ( v98 != v99 )
                    goto LABEL_207;
                }
                else if ( v98 != v99 )
                {
                  continue;
                }
                goto LABEL_203;
              }
            }
LABEL_39:
            if ( v11 == (int *)((char *)this + 12) )
              goto LABEL_40;
            v93 = (__int64)v11 + *(v11 - 1) - 8;
            goto LABEL_289;
          }
          v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
          if ( v52 > v54 )
          {
            if ( v15 == v10 )
            {
              v64 = v11[1];
              *v11 = v54;
              v65 = (int *)((char *)v11 + v64);
              v66 = (v17[1] - (*(v17 - 1) - 8LL)) >> 2;
              v67 = (int)v66;
              if ( (int)v66 > 0 )
              {
                v68 = v65;
                v69 = (char *)((char *)v17 + *(v17 - 1) - 8 - (char *)v65);
                do
                {
                  *v68 = *(_DWORD *)((char *)v68 + (_QWORD)v69);
                  ++v68;
                  --v67;
                }
                while ( v67 );
              }
              v70 = v11 + 2;
              v71 = (_DWORD)v65 + 4 * v66 - ((_DWORD)v11 + 8);
              v11[3] = v71;
              if ( v11 == (int *)((char *)this + 12) )
                goto LABEL_54;
              v109 = (int *)((char *)v11 + *(v11 - 1) - 8);
              v110 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
              if ( v110 != (v71 - (__int64)v11[1] + 8) >> 2 )
                goto LABEL_55;
              for ( n = 0LL; n < v110; ++n )
              {
                if ( *(_DWORD *)((char *)v109 + v11[1] - (*(v11 - 1) - 8LL)) != *v109 )
                  goto LABEL_55;
                ++v109;
              }
LABEL_56:
              v72 = v17 + 2;
              if ( v72 != v9 )
              {
                while ( 2 )
                {
                  v73 = v11[1];
                  *v11 = *(v72 - 2);
                  v74 = (char *)v11 + v73;
                  v75 = *(v72 - 1);
                  v76 = (char *)v72 + v75 - 8;
                  v77 = (v72[1] - (v75 - 8)) >> 2;
                  if ( (int)v77 < 4 || (v78 = (int)v77 - 1, v74 <= &v76[4 * v78]) && &v74[4 * v78] >= v76 )
                  {
                    if ( (int)v77 > 0LL )
                    {
                      v168 = v76 - v74;
                      v169 = v74;
                      v170 = (int)v77;
                      do
                      {
                        *v169 = *(_DWORD *)((char *)v169 + v168);
                        ++v169;
                        --v170;
                      }
                      while ( v170 );
                    }
                  }
                  else
                  {
                    memcpy_0(v74, v76, 4LL * (int)v77);
                  }
                  v79 = (_DWORD)v74 + 4 * v77 - ((_DWORD)v11 + 8);
                  v11[3] = v79;
                  if ( v11 == (int *)((char *)this + 12) )
                  {
                    if ( (_DWORD)v74 + 4 * (_DWORD)v77 - (_DWORD)v11 == v11[1] )
                      goto LABEL_166;
                  }
                  else
                  {
                    v80 = (int *)((char *)v11 + v11[1]);
                    v81 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
                    if ( v81 == (v79 - (__int64)v11[1] + 8) >> 2 )
                    {
                      for ( ii = 0LL; ii < v81; ++ii )
                      {
                        if ( *v80 != *(_DWORD *)((char *)v80 + *(v11 - 1) - 8LL - v11[1]) )
                          goto LABEL_165;
                        ++v80;
                      }
LABEL_166:
                      v72 += 2;
                      if ( v72 == v9 )
                        goto LABEL_167;
                      continue;
                    }
                  }
                  break;
                }
LABEL_165:
                v11 += 2;
                goto LABEL_166;
              }
LABEL_167:
              *v11 = *(v72 - 2);
              goto LABEL_39;
            }
            v181 = v53;
            v55 = v17 - 2;
          }
          else
          {
            v17 += 2;
            if ( v17 == v9 )
            {
              *v11 = v52;
              if ( v11 == (int *)((char *)this + 12) || (char *)v11 + v11[1] == (char *)v11 + *(v11 - 1) - 8 )
                goto LABEL_40;
              goto LABEL_37;
            }
            if ( v15 == v10 )
            {
              v124 = v11[1];
              *v11 = v54;
              v125 = (int *)((char *)v11 + v124);
              v126 = (char *)v55 + v55[1];
              v127 = ((__int64)v17 + v17[1] - (_QWORD)v126) >> 2;
              v128 = (int)v127;
              if ( (int)v127 > 0 )
              {
                v129 = v125;
                v130 = v126 - (char *)v125;
                do
                {
                  *v129 = *(_DWORD *)((char *)v129 + v130);
                  ++v129;
                  --v128;
                }
                while ( v128 );
              }
              v70 = v11 + 2;
              v71 = (_DWORD)v125 + 4 * v127 - ((_DWORD)v11 + 8);
              v11[3] = v71;
              if ( v11 != (int *)((char *)this + 12) )
              {
                v131 = (int *)((char *)v11 + *(v11 - 1) - 8);
                v132 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
                if ( v132 == (v71 - (__int64)v11[1] + 8) >> 2 )
                {
                  for ( jj = 0LL; jj < v132; ++jj )
                  {
                    if ( *(_DWORD *)((char *)v131 + v11[1] - (*(v11 - 1) - 8LL)) != *v131 )
                      goto LABEL_55;
                    ++v131;
                  }
                  goto LABEL_56;
                }
LABEL_55:
                v11 = v70;
                goto LABEL_56;
              }
LABEL_54:
              if ( !((_DWORD)v70 + v71 - (_DWORD)v11 - v11[1]) )
                goto LABEL_56;
              goto LABEL_55;
            }
            v181 = (const struct FastRegion::Internal::CStripe *)v55;
          }
          FastRegion::Internal::CStripe::Subtract(
            (FastRegion::Internal::CStripe *)v11,
            (const struct FastRegion::Internal::CStripe *)v55,
            v57,
            v181);
          if ( v11 == (int *)((char *)this + 12) )
          {
            v107 = v11 + 2;
            v108 = v11[3] - v11[1];
LABEL_104:
            if ( (_DWORD)v107 + v108 - (_DWORD)v11 )
              v11 = v107;
          }
          else
          {
LABEL_270:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
              v11 += 2;
          }
        }
      }
      do
      {
LABEL_212:
        v167 = *v166++;
        *v163++ = v167;
      }
      while ( v166 != v164 );
      goto LABEL_227;
    }
    if ( v165 == (int *)v162 )
      goto LABEL_212;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_241:
        v174 = *v166;
        v175 = *v165;
        if ( *v166 < *v165 )
        {
          ++v166;
          *v163++ = v174;
          goto LABEL_243;
        }
        v178 = v165 + 1;
        if ( v175 >= v174 )
        {
          v179 = *v178;
          break;
        }
LABEL_256:
        v180 = *v166;
        v179 = *v178;
        if ( *v166 < *v178 )
          break;
        v165 = v178 + 1;
        if ( v179 >= v180 )
        {
          *v163 = v180;
          ++v166;
          ++v163;
          if ( v165 == (int *)v162 )
            goto LABEL_226;
          goto LABEL_243;
        }
        if ( v165 == (int *)v162 )
          goto LABEL_226;
      }
      ++v166;
      while ( 2 )
      {
        if ( *v166 < v179 )
        {
LABEL_255:
          if ( ++v166 == v164 )
            goto LABEL_227;
          goto LABEL_256;
        }
        v165 = v178 + 1;
        if ( v179 >= *v166 )
        {
          if ( ++v166 == v164 )
            goto LABEL_227;
          if ( v165 == (int *)v162 )
            goto LABEL_212;
          goto LABEL_241;
        }
        *v163++ = v179;
        if ( v165 == (int *)v162 )
          goto LABEL_226;
LABEL_243:
        v176 = *v166;
        v177 = *v165;
        if ( *v166 >= *v165 )
        {
          v178 = v165 + 1;
          if ( v177 < v176 )
          {
            *v163++ = v177;
            v179 = *v178;
            continue;
          }
          *v163++ = v176;
          goto LABEL_255;
        }
        break;
      }
      *v163 = v176;
      ++v166;
      ++v163;
      if ( v166 == v164 )
        goto LABEL_226;
    }
  }
  *v11 = v40;
LABEL_79:
  if ( v11 != v8 )
  {
    v93 = (__int64)v11 + *(v11 - 1) - 8;
LABEL_289:
    if ( (int *)((char *)v11 + v11[1]) != (int *)v93 )
LABEL_37:
      v11 += 2;
  }
LABEL_40:
  v58 = ((char *)v11 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v58;
  if ( (_DWORD)v58 )
  {
    v59 = v11 - 2;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v60 = (int *)((char *)v59 + v59[1]);
    for ( kk = v59 - 2; kk >= (int *)this + 3; kk -= 2 )
    {
      v62 = v60;
      v60 = (int *)((char *)kk + kk[1]);
      if ( v60 != v62 )
      {
        if ( *((_DWORD *)this + 1) > *v60 )
          *((_DWORD *)this + 1) = *v60;
        v63 = *(v62 - 1);
        if ( *((_DWORD *)this + 2) < v63 )
          *((_DWORD *)this + 2) = v63;
      }
    }
  }
}
