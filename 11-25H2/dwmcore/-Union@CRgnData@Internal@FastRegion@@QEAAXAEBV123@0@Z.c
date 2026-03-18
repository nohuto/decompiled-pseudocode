/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064640
 * Callers:
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800630A0 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180063BE0 (-AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180063EB0 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180065B10 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180068160 (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180099E60 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1801CC1AC (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1801D66E0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1801D7750 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // rdi
  int *v5; // rbp
  int *v7; // r10
  int *v9; // r13
  __int64 v10; // r8
  const struct FastRegion::Internal::CRgnData *v11; // r12
  const struct FastRegion::Internal::CStripe *v12; // rdx
  int *v13; // rsi
  int *v14; // rbx
  int v15; // eax
  int v16; // ecx
  int *v17; // rdi
  int *v18; // rsi
  int *v19; // r13
  int v20; // eax
  int *v21; // r9
  int v22; // ecx
  int *v23; // rdx
  int *v24; // r10
  int v25; // ecx
  int v26; // ecx
  char *v27; // r8
  char *v28; // r10
  __int64 v29; // r9
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  __int64 v32; // r8
  int v33; // ecx
  int *v34; // r11
  int v35; // eax
  int *v36; // rdx
  int v37; // ecx
  char *v38; // r8
  char *v39; // r10
  __int64 v40; // r9
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  __int64 v43; // r8
  int v44; // ecx
  _DWORD *v45; // rdx
  __int64 v46; // r9
  __int64 k; // rcx
  __int64 v48; // r10
  _DWORD *v49; // r10
  char *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  _DWORD *v53; // rcx
  char *v54; // r8
  int *v55; // r11
  int *v56; // rdi
  __int64 v57; // r13
  _BYTE *v58; // r13
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rcx
  int v63; // ecx
  _DWORD *v64; // rdx
  __int64 v65; // r10
  __int64 j; // rcx
  __int64 v67; // r10
  _DWORD *v68; // r10
  char *v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  _DWORD *v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  _DWORD *v75; // rdx
  __int64 v76; // r11
  __int64 kk; // rcx
  int *v78; // rsi
  __int64 v79; // r13
  _BYTE *v80; // r13
  __int64 v81; // rax
  _BYTE *v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rcx
  int *v85; // r10
  int v86; // ecx
  _DWORD *v87; // r8
  __int64 v88; // r10
  __int64 m; // rcx
  const struct FastRegion::Internal::CStripe *v90; // rdx
  const struct FastRegion::Internal::CStripe *v91; // r8
  __int64 v92; // rdx
  char *v93; // rdx
  char *v94; // r9
  __int64 v95; // r8
  __int64 v96; // rcx
  int *v97; // r13
  int v98; // ecx
  int v99; // eax
  int v100; // ecx
  int v101; // eax
  _DWORD *v102; // rcx
  __int64 v103; // r10
  __int64 ii; // r8
  __int64 v105; // r9
  _DWORD *v106; // r9
  __int64 v107; // rcx
  __int64 v108; // r10
  _DWORD *v109; // r8
  char *v110; // rdx
  int v111; // r8d
  _DWORD *v112; // r9
  __int64 v113; // r10
  __int64 jj; // rcx
  int v115; // r8d
  __int64 v116; // rax
  _DWORD *v117; // rdx
  __int64 v118; // r11
  __int64 i; // rcx
  __int64 v120; // r9
  _DWORD *v121; // r9
  char *v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r10
  _DWORD *v125; // r8
  char *v126; // rdx
  int v127; // ecx
  int v128; // r9d
  __int64 v129; // rax
  _DWORD *v130; // rcx
  __int64 v131; // r11
  __int64 n; // r9
  char *v133; // r8
  char *v134; // r10
  __int64 v135; // r9
  __int64 v136; // rdx
  _DWORD *v137; // rcx
  __int64 v138; // r8
  int v139; // ecx
  const struct FastRegion::Internal::CStripe *v140; // r8
  char *v141; // r8
  char *v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r10
  _DWORD *v145; // r9
  __int64 v146; // r8
  int *v147; // r10
  int v148; // ecx
  signed __int64 v149; // rdx
  _DWORD *v150; // rcx
  __int64 v151; // r8
  signed __int64 v152; // rdx
  _DWORD *v153; // rcx
  __int64 v154; // r8
  char *v155; // r8
  __int64 v156; // rdx
  _DWORD *v157; // rcx
  __int64 v158; // r8
  int *v159; // r11
  char *v160; // r9
  char *v161; // r8
  __int64 v162; // r10
  __int64 v163; // rdx
  _DWORD *v164; // rcx
  __int64 v165; // r9
  int v166; // ecx
  int *v167; // r10
  __int64 v168; // rcx
  char *v169; // r9
  char *v170; // rdx
  __int64 v171; // r8
  int *v172; // r11
  int *v173; // r11
  struct FastRegion::Internal::CStripe *v174; // [rsp+20h] [rbp-58h]
  int *v176; // [rsp+90h] [rbp+18h]
  int *v177; // [rsp+98h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (int *)((char *)a3 + 12);
  v174 = (struct FastRegion::Internal::CStripe *)v4;
  v5 = (int *)((char *)this + 12);
  v7 = (int *)((char *)a2 + 12);
  v9 = (int *)((char *)a2 + 8 * v3 + 12);
  v10 = *(int *)a3;
  v11 = a2;
  v12 = (const struct FastRegion::Internal::CStripe *)v4;
  v177 = v9;
  v13 = v7;
  v14 = (int *)((char *)this + 12);
  v176 = &v4[2 * v10];
  *((_DWORD *)this + 4) = 8 * (v10 + v3);
  v15 = *v7;
  v16 = *v4;
  if ( *v7 < *v4 )
  {
    v18 = v7 + 2;
    *v5 = v15;
    v27 = (char *)v7 + v7[1];
    v28 = (char *)v14 + v5[1];
    v29 = ((__int64)v18 + v18[1] - (_QWORD)v27) >> 2;
    v30 = (int)v29;
    if ( (int)v29 > 0 )
    {
      v31 = (int *)((char *)v14 + v5[1]);
      v32 = v27 - v28;
      do
      {
        *v31 = *(_DWORD *)((char *)v31 + v32);
        ++v31;
        --v30;
      }
      while ( v30 );
    }
    v33 = (_DWORD)v28 + 4 * v29 - ((_DWORD)v5 + 8);
    v5[3] = v33;
    if ( v14 == v5 )
    {
      if ( (_DWORD)v28 + 4 * (_DWORD)v29 - (_DWORD)v14 == v5[1] )
      {
LABEL_23:
        v34 = v14 + 2;
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = *v18;
            v36 = v18;
            v37 = *v4;
            if ( *v18 >= *v4 )
            {
              v17 = v4 + 2;
              if ( v35 > v37 )
              {
                v90 = v174;
                v91 = (const struct FastRegion::Internal::CStripe *)(v18 - 2);
              }
              else
              {
                v18 += 2;
                if ( v18 == v9 )
                {
                  v48 = v14[1];
                  *v14 = v37;
                  v49 = (int *)((char *)v14 + v48);
                  v50 = (char *)a3 + *((int *)a3 + 4) + 12;
                  v51 = ((__int64)v17 + v17[1] - (_QWORD)v50) >> 2;
                  v52 = (int)v51;
                  if ( (int)v51 > 0 )
                  {
                    v53 = v49;
                    v54 = (char *)(v50 - (char *)v49);
                    do
                    {
                      *v53 = *(_DWORD *)((char *)v53 + (_QWORD)v54);
                      ++v53;
                      --v52;
                    }
                    while ( v52 );
                  }
                  v14[3] = (_DWORD)v49 + 4 * v51 - ((_DWORD)v14 + 8);
                  if ( v14 == v5 )
                  {
                    if ( (_DWORD)v49 + 4 * (_DWORD)v51 - (_DWORD)v14 != v14[1] )
                      v14 += 2;
                  }
                  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
                  {
                    v14 = v173;
                  }
                  goto LABEL_43;
                }
                v91 = (const struct FastRegion::Internal::CStripe *)v36;
                v90 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
              }
LABEL_85:
              FastRegion::Internal::CStripe::Union((FastRegion::Internal::CStripe *)v14, v90, v91);
              if ( v14 == v5 )
              {
                if ( v14[3] - v14[1] != -8 )
                  v14 += 2;
              }
              else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
              {
                v14 += 2;
              }
              goto LABEL_6;
            }
            v18 += 2;
            *v14 = v35;
            if ( v18 == v9 )
            {
              v115 = v14[1] - 8;
              v14[3] = v115;
              v116 = v14[1];
              if ( v14 == v5 )
              {
                if ( v115 - (_DWORD)v116 == -8 )
                  goto LABEL_124;
              }
              else
              {
                v117 = (int *)((char *)v14 + v116);
                v118 = (int)((v116 - (*(v14 - 1) - 8LL)) >> 2);
                if ( v118 == (v115 - v116 + 8) >> 2 )
                {
                  for ( i = 0LL; i < v118; ++i )
                  {
                    if ( *v117 != *(_DWORD *)((char *)v117 + *(v14 - 1) - 8LL - v116) )
                      goto LABEL_123;
                    ++v117;
                  }
LABEL_124:
                  v120 = v14[1];
                  v17 = v4 + 2;
                  *v14 = *((_DWORD *)a3 + 3);
                  v121 = (int *)((char *)v14 + v120);
                  v122 = (char *)a3 + *((int *)a3 + 4) + 12;
                  v123 = ((__int64)v17 + v17[1] - (_QWORD)v122) >> 2;
                  v124 = (int)v123;
                  if ( (int)v123 > 0 )
                  {
                    v125 = v121;
                    v126 = (char *)(v122 - (char *)v121);
                    do
                    {
                      *v125 = *(_DWORD *)((char *)v125 + (_QWORD)v126);
                      ++v125;
                      --v124;
                    }
                    while ( v124 );
                  }
                  v127 = (_DWORD)v121 + 4 * v123 - ((_DWORD)v14 + 8);
                  v14[3] = v127;
                  if ( v14 == v5 )
                  {
                    if ( v127 + 8 - v14[1] )
                      v14 += 2;
                  }
                  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
                  {
                    v14 = v167;
                  }
LABEL_43:
                  v55 = v176;
                  v56 = v17 + 2;
                  if ( v56 == v176 )
                  {
LABEL_146:
                    *v14 = *(v56 - 2);
                    if ( v14 != v5 && (char *)v14 + v14[1] != (char *)v14 + *(v14 - 1) - 8 )
                      goto LABEL_148;
                    goto LABEL_12;
                  }
                  while ( 2 )
                  {
                    v57 = v14[1];
                    *v14 = *(v56 - 2);
                    v58 = (char *)v14 + v57;
                    v59 = *(v56 - 1);
                    v60 = (char *)v56 + v59 - 8;
                    v61 = (v56[1] - (v59 - 8)) >> 2;
                    if ( (int)v61 < 4 || (v62 = (int)v61 - 1, v58 <= &v60[4 * v62]) && &v58[4 * v62] >= v60 )
                    {
                      if ( (int)v61 > 0LL )
                      {
                        v149 = v60 - v58;
                        v150 = v58;
                        v151 = (int)v61;
                        do
                        {
                          *v150 = *(_DWORD *)((char *)v150 + v149);
                          ++v150;
                          --v151;
                        }
                        while ( v151 );
                      }
                    }
                    else
                    {
                      memcpy_0(v58, v60, 4LL * (int)v61);
                      v55 = v176;
                    }
                    v63 = (_DWORD)v58 + 4 * v61 - ((_DWORD)v14 + 8);
                    v14[3] = v63;
                    if ( v14 == v5 )
                    {
                      if ( (_DWORD)v58 + 4 * (_DWORD)v61 - (_DWORD)v14 == v14[1] )
                        goto LABEL_151;
                    }
                    else
                    {
                      v64 = (int *)((char *)v14 + v14[1]);
                      v65 = (int)((v14[1] - (*(v14 - 1) - 8LL)) >> 2);
                      if ( v65 == (v63 - (__int64)v14[1] + 8) >> 2 )
                      {
                        for ( j = 0LL; j < v65; ++j )
                        {
                          if ( *v64 != *(_DWORD *)((char *)v64 + *(v14 - 1) - 8LL - v14[1]) )
                            goto LABEL_150;
                          ++v64;
                        }
LABEL_151:
                        v56 += 2;
                        if ( v56 == v55 )
                          goto LABEL_146;
                        continue;
                      }
                    }
                    break;
                  }
LABEL_150:
                  v14 += 2;
                  goto LABEL_151;
                }
              }
LABEL_123:
              v14 += 2;
              goto LABEL_124;
            }
            v38 = (char *)v36 + v36[1];
            v39 = (char *)v14 + v14[1];
            v40 = ((__int64)v18 + v18[1] - (_QWORD)v38) >> 2;
            v41 = (int)v40;
            if ( (int)v40 > 0 )
            {
              v42 = (int *)((char *)v14 + v14[1]);
              v43 = v38 - v39;
              do
              {
                *v42 = *(_DWORD *)((char *)v42 + v43);
                ++v42;
                --v41;
              }
              while ( v41 );
            }
            v44 = (_DWORD)v39 + 4 * v40 - (_DWORD)v34;
            v34[1] = v44;
            if ( v14 == v5 )
              break;
            v45 = (int *)((char *)v14 + v14[1]);
            v46 = (int)((v14[1] - (*(v14 - 1) - 8LL)) >> 2);
            if ( v46 != (v44 - (__int64)v14[1] + 8) >> 2 )
              goto LABEL_55;
            for ( k = 0LL; k < v46; ++k )
            {
              if ( *v45 != *(_DWORD *)((char *)v45 + *(v14 - 1) - 8LL - v14[1]) )
                goto LABEL_55;
              ++v45;
            }
          }
          if ( (_DWORD)v39 + 4 * (_DWORD)v40 - (_DWORD)v14 != v14[1] )
          {
LABEL_55:
            v14 += 2;
            v34 += 2;
          }
        }
      }
    }
    else
    {
      v87 = (int *)((char *)v14 + v5[1]);
      v88 = (int)((v5[1] - (*(v5 - 1) - 8LL)) >> 2);
      if ( v88 == (v33 - (__int64)v5[1] + 8) >> 2 )
      {
        for ( m = 0LL; m < v88; ++m )
        {
          if ( *v87 != *(_DWORD *)((char *)v87 + *(v5 - 1) - 8LL - v5[1]) )
            goto LABEL_22;
          ++v87;
        }
        goto LABEL_23;
      }
    }
LABEL_22:
    v14 = v5 + 2;
    goto LABEL_23;
  }
  v17 = v4 + 2;
  if ( v15 > v16 )
  {
    v92 = v5[1];
    *v5 = v16;
    v93 = (char *)v14 + v92;
    v94 = (char *)v17 + *(v17 - 1) - 8;
    v95 = (v17[1] - (*(v17 - 1) - 8LL)) >> 2;
    if ( (int)v95 > 0 )
    {
      v96 = 0LL;
      do
      {
        *(_DWORD *)&v93[4 * v96] = *(_DWORD *)&v94[4 * v96];
        ++v96;
      }
      while ( v96 < (int)v95 );
    }
    v97 = v5 + 2;
    v98 = (_DWORD)v93 + 4 * v95 - ((_DWORD)v5 + 8);
    v5[3] = v98;
    if ( v14 != v5 )
      goto LABEL_154;
    v99 = (_DWORD)v97 - (_DWORD)v14 - v5[1];
LABEL_93:
    if ( !(v98 + v99) )
      goto LABEL_95;
LABEL_94:
    v14 = v97;
    while ( 1 )
    {
LABEL_95:
      v100 = *v7;
      v91 = (const struct FastRegion::Internal::CStripe *)v17;
      v101 = *v17;
      if ( *v7 < *v17 )
      {
        v18 = v13 + 2;
        v91 = (const struct FastRegion::Internal::CStripe *)(v17 - 2);
        goto LABEL_97;
      }
      v17 += 2;
      if ( v100 <= v101 )
        break;
      *v14 = v101;
      if ( v17 == v176 )
      {
        v128 = v14[1] - 8;
        v14[3] = v128;
        v129 = v14[1];
        if ( v14 == v5 )
        {
          if ( v128 - (_DWORD)v129 == -8 )
            goto LABEL_140;
        }
        else
        {
          v130 = (int *)((char *)v14 + v129);
          v131 = (int)((v129 - (*(v14 - 1) - 8LL)) >> 2);
          if ( v131 == (v128 - v129 + 8) >> 2 )
          {
            for ( n = 0LL; n < v131; ++n )
            {
              if ( *v130 != *(_DWORD *)((char *)v130 + *(v14 - 1) - 8LL - v129) )
                goto LABEL_139;
              ++v130;
            }
LABEL_140:
            v18 = v13 + 2;
            *v14 = *v7;
            v133 = (char *)v7 + v7[1];
            v134 = (char *)v14 + v14[1];
            v135 = ((__int64)v18 + v18[1] - (_QWORD)v133) >> 2;
            v136 = (int)v135;
            if ( (int)v135 > 0 )
            {
              v137 = (int *)((char *)v14 + v14[1]);
              v138 = v133 - v134;
              do
              {
                *v137 = *(_DWORD *)((char *)v137 + v138);
                ++v137;
                --v136;
              }
              while ( v136 );
            }
LABEL_143:
            v139 = (_DWORD)v134 + 4 * v135 - ((_DWORD)v14 + 8);
            v14[3] = v139;
            if ( v14 == v5 )
            {
              if ( v139 - v14[1] != -8 )
                v14 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
            {
              v14 = v159;
            }
            goto LABEL_68;
          }
        }
LABEL_139:
        v14 += 2;
        goto LABEL_140;
      }
      v168 = 0LL;
      v169 = (char *)v17 + *(v17 - 1) - 8;
      v170 = (char *)v14 + v14[1];
      v171 = (v17[1] - (*(v17 - 1) - 8LL)) >> 2;
      if ( (int)v171 > 0 )
      {
        do
        {
          *(_DWORD *)&v170[4 * v168] = *(_DWORD *)&v169[4 * v168];
          ++v168;
        }
        while ( v168 < (int)v171 );
      }
      v97 = v14 + 2;
      v98 = (_DWORD)v170 + 4 * v171 - ((_DWORD)v14 + 8);
      v14[3] = v98;
      if ( v14 == v5 )
      {
        v99 = 8 - v14[1];
        goto LABEL_93;
      }
LABEL_154:
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
        goto LABEL_94;
    }
    v18 = v13 + 2;
    if ( v17 == v176 )
    {
      *v14 = v100;
      v155 = (char *)v7 + v7[1];
      v134 = (char *)v14 + v14[1];
      v135 = ((__int64)v18 + v18[1] - (_QWORD)v155) >> 2;
      v156 = (int)v135;
      if ( (int)v135 > 0 )
      {
        v157 = (int *)((char *)v14 + v14[1]);
        v158 = v155 - v134;
        do
        {
          *v157 = *(_DWORD *)((char *)v157 + v158);
          ++v157;
          --v156;
        }
        while ( v156 );
      }
      goto LABEL_143;
    }
LABEL_97:
    v90 = (const struct FastRegion::Internal::CStripe *)v7;
    goto LABEL_85;
  }
  v18 = v7 + 2;
  FastRegion::Internal::CStripe::Union(
    (FastRegion::Internal::CStripe *)v14,
    (const struct FastRegion::Internal::CStripe *)v7,
    v12);
  if ( v14 == v5 )
  {
    if ( (_DWORD)v5 + 8 + v5[3] - v5[1] - (_DWORD)v14 )
      v14 = v5 + 2;
  }
  else
  {
    v102 = (int *)((char *)v14 + v5[1]);
    v103 = (int)((v5[1] - (*(v5 - 1) - 8LL)) >> 2);
    if ( v103 == ((__int64)v5 + v5[3] - (_QWORD)v102 + 8) >> 2 )
    {
      for ( ii = 0LL; ii < v103; ++ii )
      {
        if ( *v102 != *(_DWORD *)((char *)v102 + *(v5 - 1) - 8LL - v5[1]) )
          goto LABEL_103;
        ++v102;
      }
    }
    else
    {
LABEL_103:
      v14 = v5 + 2;
    }
  }
LABEL_6:
  v19 = v18 - 2;
  while ( 1 )
  {
    v20 = *v18;
    v21 = v17;
    v22 = *v17;
    v23 = v18;
    v24 = v17;
    if ( *v18 >= *v17 )
      break;
    v18 += 2;
    v19 += 2;
    if ( v18 == v177 )
    {
      v105 = v14[1];
      *v14 = v20;
      v106 = (int *)((char *)v14 + v105);
      v107 = (v17[1] - (*(v17 - 1) - 8LL)) >> 2;
      v108 = (int)v107;
      if ( (int)v107 > 0 )
      {
        v109 = v106;
        v110 = (char *)((char *)v17 + *(v17 - 1) - 8 - (char *)v106);
        do
        {
          *v109 = *(_DWORD *)((char *)v109 + (_QWORD)v110);
          ++v109;
          --v108;
        }
        while ( v108 );
      }
      v111 = (_DWORD)v106 + 4 * v107 - ((_DWORD)v14 + 8);
      v14[3] = v111;
      if ( v14 == v5 )
      {
        if ( v111 - v14[1] == -8 )
          goto LABEL_43;
      }
      else
      {
        v112 = (int *)((char *)v14 + *(v14 - 1) - 8);
        v113 = (int)((v14[1] - (*(v14 - 1) - 8LL)) >> 2);
        if ( v113 == (v111 - (__int64)v14[1] + 8) >> 2 )
        {
          for ( jj = 0LL; jj < v113; ++jj )
          {
            if ( *(_DWORD *)((char *)v112 + v14[1] - (*(v14 - 1) - 8LL)) != *v112 )
              goto LABEL_115;
            ++v112;
          }
          goto LABEL_43;
        }
      }
LABEL_115:
      v14 += 2;
      goto LABEL_43;
    }
    v140 = (const struct FastRegion::Internal::CStripe *)(v17 - 2);
LABEL_157:
    FastRegion::Internal::CStripe::Union(
      (FastRegion::Internal::CStripe *)v14,
      (const struct FastRegion::Internal::CStripe *)v23,
      v140);
    if ( v14 == v5 )
    {
      if ( v14[3] - v14[1] != -8 )
        v14 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
    {
      v14 += 2;
    }
  }
  v17 += 2;
  if ( v20 > v22 )
  {
    if ( v17 == v176 )
    {
      v67 = v14[1];
      *v14 = v22;
      v68 = (int *)((char *)v14 + v67);
      v69 = (char *)v19 + v19[1];
      v70 = ((__int64)v18 + v18[1] - (_QWORD)v69) >> 2;
      v71 = (int)v70;
      if ( (int)v70 > 0 )
      {
        v72 = v68;
        v73 = v69 - (char *)v68;
        do
        {
          *v72 = *(_DWORD *)((char *)v72 + v73);
          ++v72;
          --v71;
        }
        while ( v71 );
      }
      v74 = (_DWORD)v68 + 4 * v70 - ((_DWORD)v14 + 8);
      v14[3] = v74;
      if ( v14 == v5 )
      {
        if ( v74 - v14[1] == -8 )
          goto LABEL_68;
      }
      else
      {
        v75 = (int *)((char *)v14 + *(v14 - 1) - 8);
        v76 = (int)((v14[1] - (*(v14 - 1) - 8LL)) >> 2);
        if ( v76 == (v74 - (__int64)v14[1] + 8) >> 2 )
        {
          for ( kk = 0LL; kk < v76; ++kk )
          {
            if ( *(_DWORD *)((char *)v75 + v14[1] - (*(v14 - 1) - 8LL)) != *v75 )
              goto LABEL_67;
            ++v75;
          }
          goto LABEL_68;
        }
      }
LABEL_67:
      v14 += 2;
      goto LABEL_68;
    }
    v140 = (const struct FastRegion::Internal::CStripe *)v19;
    v23 = v21;
    goto LABEL_157;
  }
  v18 += 2;
  v19 += 2;
  if ( v18 == v177 )
  {
    *v14 = v20;
    if ( v17 == v176 )
      goto LABEL_11;
    v160 = (char *)v24 + v24[1];
    v161 = (char *)v14 + v14[1];
    v162 = ((__int64)v17 + v17[1] - (_QWORD)v160) >> 2;
    v163 = (int)v162;
    if ( (int)v162 > 0 )
    {
      v164 = (int *)((char *)v14 + v14[1]);
      v165 = v160 - v161;
      do
      {
        *v164 = *(_DWORD *)((char *)v164 + v165);
        ++v164;
        --v163;
      }
      while ( v163 );
    }
    v166 = (_DWORD)v161 + 4 * v162 - ((_DWORD)v14 + 8);
    v14[3] = v166;
    if ( v14 == v5 )
    {
      if ( v166 - v14[1] != -8 )
        v14 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
    {
      v14 = v172;
    }
    goto LABEL_43;
  }
  if ( v17 != v176 )
  {
    v140 = (const struct FastRegion::Internal::CStripe *)v21;
    goto LABEL_157;
  }
  *v14 = v22;
  v141 = (char *)v23 + v23[1];
  v142 = (char *)v14 + v14[1];
  v143 = ((__int64)v18 + v18[1] - (_QWORD)v141) >> 2;
  v144 = (int)v143;
  if ( (int)v143 > 0 )
  {
    v145 = (int *)((char *)v14 + v14[1]);
    v146 = v141 - v142;
    do
    {
      *v145 = *(_DWORD *)((char *)v145 + v146);
      ++v145;
      --v144;
    }
    while ( v144 );
  }
  v147 = v14 + 2;
  v148 = (_DWORD)v142 + 4 * v143 - ((_DWORD)v14 + 8);
  v14[3] = v148;
  if ( v14 == v5 )
  {
    if ( v148 - v14[1] != -8 )
LABEL_166:
      v14 = v147;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
  {
    goto LABEL_166;
  }
LABEL_68:
  v78 = v18 + 2;
  if ( v78 == v177 )
    goto LABEL_78;
  while ( 2 )
  {
    v79 = v14[1];
    *v14 = *(v78 - 2);
    v80 = (char *)v14 + v79;
    v81 = *(v78 - 1);
    v82 = (char *)v78 + v81 - 8;
    v83 = (v78[1] - (v81 - 8)) >> 2;
    if ( (int)v83 < 4 || (v84 = (int)v83 - 1, v80 <= &v82[4 * v84]) && &v80[4 * v84] >= v82 )
    {
      if ( (int)v83 > 0LL )
      {
        v152 = v82 - v80;
        v153 = v80;
        v154 = (int)v83;
        do
        {
          *v153 = *(_DWORD *)((char *)v153 + v152);
          ++v153;
          --v154;
        }
        while ( v154 );
      }
    }
    else
    {
      memcpy_0(v80, v82, 4LL * (int)v83);
    }
    v85 = v14 + 2;
    v86 = (_DWORD)v80 + 4 * v83 - ((_DWORD)v14 + 8);
    v14[3] = v86;
    if ( v14 == v5 )
    {
      if ( v86 - v14[1] != -8 )
LABEL_75:
        v14 = v85;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
    {
      goto LABEL_75;
    }
    v78 += 2;
    if ( v78 != v177 )
      continue;
    break;
  }
  v11 = a2;
LABEL_78:
  *v14 = *(v78 - 2);
LABEL_11:
  if ( v14 != v5 && (char *)v14 + v14[1] != (char *)v14 + *(v14 - 1) - 8 )
LABEL_148:
    v14 += 2;
LABEL_12:
  *(_DWORD *)this = ((char *)v14 - (char *)this - 12) >> 3;
  v25 = *((_DWORD *)v11 + 1);
  if ( v25 >= *((_DWORD *)a3 + 1) )
    v25 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v25;
  v26 = *((_DWORD *)v11 + 2);
  if ( v26 <= *((_DWORD *)a3 + 2) )
    v26 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v26;
}
