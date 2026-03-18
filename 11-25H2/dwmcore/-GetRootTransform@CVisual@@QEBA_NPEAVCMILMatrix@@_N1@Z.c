/*
 * XREFs of ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x18010ABE0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18011F238 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028BF94 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029A220 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x1802B27D0 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800577E0 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18011F6A0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1801212A0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::GetRootTransform(CVisual *this, struct CMILMatrix *a2, char a3, char a4)
{
  char v5; // r14
  char v8; // cl
  float v9; // xmm2_4
  __m128 *v10; // rdi
  const struct D2D_SIZE_F *v11; // rdx
  char v12; // cl
  struct CMILMatrix *v13; // r8
  void (__fastcall *v14)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  __int32 v15; // r10d
  __m128 v16; // xmm11
  __m128 v17; // xmm15
  __m128 v18; // xmm14
  __m128 v19; // xmm7
  char v20; // r11
  int v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  __m128 v24; // xmm5
  __m128 v25; // xmm4
  __m128 v26; // xmm1
  __m128 v27; // xmm3
  __m128 v28; // xmm13
  __m128 v29; // xmm4
  __m128 v30; // xmm2
  float v31; // xmm12_4
  float v32; // xmm13_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  char v35; // cl
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  __m128 v39; // xmm6
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  __m128 v42; // xmm3
  int v43; // eax
  _DWORD *v45; // r8
  _QWORD *v46; // rdi
  unsigned int v47; // edx
  _BYTE *v48; // rcx
  unsigned int i; // eax
  __int64 v50; // rcx
  _QWORD **v51; // r15
  _QWORD *v52; // r15
  __int64 (__fastcall *v53)(); // rax
  __int64 (__fastcall *v54)(); // rax
  __int64 v55; // rax
  int v56; // r12d
  int Count; // r15d
  bool v58; // r13
  struct CTreeEffect *(__fastcall *v59)(CLayerVisual *); // rax
  struct CTreeEffect *v60; // rax
  char v61; // al
  const struct D2D_SIZE_F *v62; // rdx
  char v63; // cl
  struct CMILMatrix *v64; // r8
  void (__fastcall *v65)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  __m128 v66; // xmm0
  __m128 v67; // xmm1
  __m128 v68; // xmm0
  __int128 v69; // xmm1
  __m128 v70; // xmm1
  int v71; // eax
  __m128 v72; // xmm0
  __int128 v73; // xmm1
  float v74; // xmm12_4
  float v75; // xmm3_4
  float v76; // xmm4_4
  int v77; // xmm0_4
  float v78; // xmm5_4
  float v79; // xmm7_4
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  __m128 v84; // xmm7
  float v85; // xmm2_4
  float v86; // xmm7_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm14_4
  float v90; // xmm12_4
  float v91; // xmm5_4
  float v92; // xmm15_4
  float v93; // xmm13_4
  float v94; // xmm11_4
  float v95; // xmm4_4
  char v96; // dl
  char v97; // cl
  float v98; // xmm7_4
  float v99; // xmm0_4
  float v100; // xmm9_4
  float v101; // xmm8_4
  __m128 v102; // xmm15
  float v103; // xmm3_4
  float v104; // xmm12_4
  __m128 v105; // xmm7
  float v106; // xmm1_4
  __m128 v107; // xmm15
  __m128 v108; // xmm14
  __m128 v109; // xmm11
  __m128 v110; // xmm11
  __m128 v111; // xmm7
  __m128 v112; // xmm7
  __m128 v113; // xmm14
  __m128 v114; // xmm15
  __m128 v115; // xmm15
  __m128 v116; // xmm15
  __m128 v117; // xmm14
  float v118; // xmm0_4
  __m128 v119; // xmm14
  float v120; // xmm0_4
  __m128 v121; // xmm11
  __m128 v122; // xmm11
  float v123; // xmm13_4
  __m128 v124; // xmm11
  char IsTranslateAndScaleIgnore; // al
  float v126; // xmm6_4
  float v127; // xmm8_4
  float v128; // xmm2_4
  float v129; // xmm4_4
  float v130; // xmm5_4
  float v131; // xmm3_4
  __m128 v132; // xmm1
  char v133; // al
  struct CEffect *EffectInternal; // rax
  __m128 v135; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v136; // [rsp+30h] [rbp-D0h]
  __m128 v137; // [rsp+40h] [rbp-C0h]
  _BYTE v138[20]; // [rsp+50h] [rbp-B0h]
  __m128 v139; // [rsp+70h] [rbp-90h]
  __m128 v140; // [rsp+80h] [rbp-80h]
  __m128 v141; // [rsp+90h] [rbp-70h]
  __m128 v142; // [rsp+A0h] [rbp-60h]
  __m128 v143; // [rsp+B0h] [rbp-50h]
  float v144; // [rsp+C0h] [rbp-40h]
  __m128 v145; // [rsp+D0h] [rbp-30h]
  __m128 v146; // [rsp+E0h] [rbp-20h]
  __m128 v147; // [rsp+F0h] [rbp-10h]
  __m128 v148; // [rsp+100h] [rbp+0h]
  __m128 v149; // [rsp+110h] [rbp+10h]
  __m128 v150; // [rsp+120h] [rbp+20h]
  __m128 v151; // [rsp+130h] [rbp+30h]

  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  v5 = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  v8 = *((_BYTE *)a2 + 65) & 0xC0 | 0x29;
  *((_BYTE *)a2 + 65) = v8;
  *((_BYTE *)a2 + 64) = -86;
  if ( !a4 )
  {
    v9 = *((float *)this + 32);
    if ( v9 != 0.0 || *((float *)this + 33) != 0.0 || *((float *)this + 31) != 0.0 )
    {
      v33 = *((_DWORD *)this + 33);
      v34 = *((_DWORD *)this + 31);
      *((float *)a2 + 12) = v9;
      v5 = 1;
      *((_DWORD *)a2 + 13) = v33;
      *((_DWORD *)a2 + 14) = v34;
      *((_BYTE *)a2 + 64) = -88;
      *((_BYTE *)a2 + 65) = v8;
    }
    v10 = (__m128 *)*((_QWORD *)this + 30);
    if ( v10 )
    {
      v11 = (const struct D2D_SIZE_F *)((char *)this + 144);
      v12 = v10[2].m128_i8[8] & 1;
      if ( this != (CVisual *)-144LL )
      {
        if ( (v10[2].m128_i8[8] & 1) == 0
          && v10[9].m128_i8[12]
          && (v10[9].m128_f32[1] != v11->width || v10[9].m128_f32[2] != *((float *)this + 37)) )
        {
          v12 = 1;
        }
        *(struct D2D_SIZE_F *)&v10[9].m128_i16[2] = *v11;
      }
      if ( v12 )
      {
        v13 = (struct CMILMatrix *)&v10[5];
        v14 = *(void (__fastcall **)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))(v10->m128_u64[0] + 200);
        if ( v14 == CComponentTransform3D::GetRealization )
        {
          CComponentTransform3D::GetRealization((CComponentTransform3D *)v10, v11, v13);
        }
        else if ( v14 == CMatrixTransform::GetRealization )
        {
          CMatrixTransform::GetRealization((CMatrixTransform *)v10, v11, v13);
        }
        else
        {
          v14((CComponentTransform3D *)v10, v11, v13);
        }
        v10[2].m128_i32[2] &= ~1u;
      }
      v15 = v10[9].m128_i32[0];
      v16 = v10[5];
      v17 = v10[6];
      v135 = v16;
      v136 = v17;
      *(_DWORD *)&v138[16] = v15;
      v18 = v10[7];
      v19 = v10[8];
      v137 = v18;
      *(__m128 *)v138 = v19;
      if ( (char)((_BYTE)v15 << 6) >> 6 == 1 )
      {
        v20 = v138[17];
        v21 = _xmm;
        v22 = FLOAT_0_000081380211;
        v23 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v150.m128_i32[0] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
        v146.m128_i32[0] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v149.m128_i32[0] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        v148.m128_i32[0] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v139.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
        v142.m128_i32[0] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
        v143.m128_i32[0] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v145.m128_i32[0] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
        v140.m128_i32[0] = v19.m128_i32[0];
        v151.m128_i32[0] = v18.m128_i32[0];
        v147.m128_i32[0] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
        v141.m128_i32[0] = v16.m128_i32[0];
        LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        goto LABEL_30;
      }
      if ( (char)((_BYTE)v15 << 6) >> 6 < 0 )
      {
LABEL_52:
        v16 = *(__m128 *)a2;
        *(_DWORD *)&v138[16] = *((_DWORD *)a2 + 16);
        v17 = *((__m128 *)a2 + 1);
        v18 = *((__m128 *)a2 + 2);
        v19 = *((__m128 *)a2 + 3);
LABEL_53:
        v43 = *(_DWORD *)&v138[16];
        v5 = 1;
        *(__m128 *)a2 = v16;
        *((__m128 *)a2 + 1) = v17;
        *((__m128 *)a2 + 2) = v18;
        *((__m128 *)a2 + 3) = v19;
        *((_DWORD *)a2 + 16) = v43;
        goto LABEL_54;
      }
      v20 = v138[17];
      v21 = _xmm;
      v22 = FLOAT_0_000081380211;
      v23 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( (char)(16 * v138[17]) >> 6 == 1 )
      {
        v151 = v18;
        v150.m128_i32[0] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
        LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        v139 = _mm_shuffle_ps(v19, v19, 170);
        v140 = v19;
        v146.m128_i32[0] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v149 = _mm_shuffle_ps(v18, v18, 85);
        v143 = _mm_shuffle_ps(v17, v17, 170);
        v148.m128_i32[0] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v147.m128_i32[0] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
LABEL_103:
        v142 = _mm_shuffle_ps(v17, v17, 85);
        v145 = _mm_shuffle_ps(v16, v16, 170);
        LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        goto LABEL_104;
      }
      v24 = _mm_shuffle_ps(v19, v19, 255);
      v25 = _mm_shuffle_ps(v18, v18, 255);
      v26 = _mm_shuffle_ps(v18, v18, 85);
      v27 = _mm_shuffle_ps(v17, v17, 255);
      v28 = _mm_shuffle_ps(v16, v16, 255);
      v150 = v24;
      v146 = v25;
      v149 = v26;
      v148 = v27;
      v147 = v28;
      v151 = v18;
      if ( (char)(16 * v138[17]) >> 6 < 0 )
        goto LABEL_20;
      if ( (char)(4 * v138[17]) >> 6 != 1 )
      {
        if ( (char)(4 * v138[17]) >> 6 < 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v25.m128_i32[0] & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            goto LABEL_160;
          goto LABEL_179;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v27.m128_i32[0] & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(v28.m128_i32[0] & _xmm) * 61440.0))
                                  + COERCE_FLOAT(v24.m128_i32[0] & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          v20 = v138[17] & 0xCF | 0x10;
          goto LABEL_160;
        }
        v20 = v138[17] | 0x30;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v25.m128_i32[0] & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
        {
          v26.m128_i32[0] = v149.m128_i32[0];
LABEL_179:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v26.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
          {
            v20 |= 0xCu;
            v138[17] = v20;
LABEL_20:
            if ( (char)(16 * v15) >> 6 != 1 )
            {
              v29 = _mm_shuffle_ps(v16, v16, 170);
              v30 = _mm_shuffle_ps(v17, v17, 170);
              v145 = v29;
              v143 = v30;
              if ( (char)(16 * v15) >> 6 < 0 )
              {
LABEL_22:
                if ( (char)(4 * v15) >> 6 != 1 )
                {
                  if ( (char)(4 * v15) >> 6 >= 0 )
                  {
                    IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)&v135);
                    v142 = (__m128)v136.m128_u32[1];
                    v141 = (__m128)v135.m128_u32[0];
                    if ( !IsTranslateAndScaleIgnore
                      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v135.m128_f32[0] - 1.0) & _xmm) >= 0.000081380211
                      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v136.m128_f32[1] - 1.0) & _xmm) >= 0.000081380211 )
                    {
                      v20 = v138[17];
                      v32 = *(float *)&v138[4];
                      v19 = *(__m128 *)v138;
                      LOBYTE(v15) = v138[16] & 0xCC | 0x11;
                      v31 = v137.m128_f32[2];
                      v18 = v137;
                      v17 = v136;
                      v16 = v135;
                      v150 = (__m128)*(unsigned int *)&v138[12];
                      v140 = (__m128)*(unsigned int *)v138;
                      v146 = (__m128)v137.m128_u32[3];
                      v149 = (__m128)v137.m128_u32[1];
                      v148 = (__m128)v136.m128_u32[3];
                      v139 = (__m128)*(unsigned int *)&v138[8];
                      v147 = (__m128)v135.m128_u32[3];
                      v151 = (__m128)v137.m128_u32[0];
                      v145 = (__m128)v135.m128_u32[2];
                      v143 = (__m128)v136.m128_u32[2];
                      v138[16] = v15;
                      goto LABEL_30;
                    }
                    v20 = v138[17];
                    LOBYTE(v15) = v138[16] | 0x30;
                    v19 = *(__m128 *)v138;
                    v18 = v137;
                    v17 = v136;
                    v16 = v135;
                    v150 = (__m128)*(unsigned int *)&v138[12];
                    v146 = (__m128)v137.m128_u32[3];
                    v149 = (__m128)v137.m128_u32[1];
                    v148 = (__m128)v136.m128_u32[3];
                    v147 = (__m128)v135.m128_u32[3];
                    v151 = (__m128)v137.m128_u32[0];
                    v145 = (__m128)v135.m128_u32[2];
                    v143 = (__m128)v136.m128_u32[2];
                  }
                  else
                  {
                    v142 = _mm_shuffle_ps(v17, v17, 85);
                    v141 = v16;
                  }
                  v31 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
                  LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v31 - 1.0) & _xmm) >= 0.000081380211 )
                  {
                    v140.m128_i32[0] = v19.m128_i32[0];
                    v139.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
LABEL_27:
                    LOBYTE(v15) = v15 & 0xFC | 1;
                    v138[16] = v15;
                    goto LABEL_30;
                  }
                  v140 = v19;
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                  {
                    LOBYTE(v15) = v15 & 0xFC | 1;
                    v139.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
                    v138[16] = v15;
                    goto LABEL_30;
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 0.0) & _xmm) < 0.000081380211 )
                  {
                    v139 = _mm_shuffle_ps(v19, v19, 170);
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v139.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                      goto LABEL_27;
                    goto LABEL_52;
                  }
                  LOBYTE(v15) = v15 & 0xFC | 1;
                  v139 = _mm_shuffle_ps(v19, v19, 170);
                  v138[16] = v15;
LABEL_30:
                  if ( (char)(*((_BYTE *)a2 + 64) << 6) >> 6 != 1 )
                  {
                    if ( (char)(*((_BYTE *)a2 + 64) << 6) >> 6 < 0
                      || (unsigned __int8)CMILMatrix::IsTranslate<1>(a2)
                      && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 12) - 0.0) & v21)
                      && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 13) - 0.0) & v21)
                      && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 14) - 0.0) & v21) )
                    {
                      goto LABEL_53;
                    }
                    *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xFC | 1;
                  }
                  v35 = *((_BYTE *)a2 + 65);
                  if ( (v35 & 8) == 0 && 16 * (v35 & 0xFC) != 0 )
                    goto LABEL_48;
                  if ( (v35 & 8) != 0 )
                  {
LABEL_37:
                    if ( (char)(16 * *((_BYTE *)a2 + 64)) >> 6 == 1 )
                      goto LABEL_48;
                    if ( (char)(16 * *((_BYTE *)a2 + 64)) >> 6 >= 0 )
                    {
                      if ( (char)(4 * v35) >> 6 == 1 )
                        goto LABEL_175;
                      if ( (char)(4 * v35) >> 6 >= 0 )
                      {
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                   (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v21)
                                                                         * 61440.0)
                                                                 + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v21)
                                                                         * 61440.0))
                                                         + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v21))
                                                 - v23) & v21) )
                        {
                          v133 = *((_BYTE *)a2 + 64) & 0xF3 | 4;
                          *((_BYTE *)a2 + 65) = v35 & 0xCF | 0x10;
                          *((_BYTE *)a2 + 64) = v133;
                          goto LABEL_48;
                        }
                        *((_BYTE *)a2 + 65) = v35 | 0x30;
                      }
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - 0.0) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 6) - 0.0) & v21) )
                      {
LABEL_175:
                        *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xF3 | 4;
                        goto LABEL_48;
                      }
                      *((_BYTE *)a2 + 64) |= 0xCu;
                    }
                    if ( (char)(4 * *((_BYTE *)a2 + 64)) >> 6 == 1 )
                      goto LABEL_48;
                    if ( (char)(4 * *((_BYTE *)a2 + 64)) >> 6 >= 0 )
                    {
                      if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - v23) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - v23) & v21) )
                      {
                        *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xCF | 0x10;
                        goto LABEL_48;
                      }
                      *((_BYTE *)a2 + 64) |= 0x30u;
                    }
                    if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - v23) & v21) )
                    {
                      v36 = *((float *)a2 + 12);
                      v37 = *((float *)a2 + 14);
                      v38 = *((float *)a2 + 13);
                      if ( v22 > COERCE_FLOAT(LODWORD(v36) & v21)
                        && v22 > COERCE_FLOAT(LODWORD(v38) & v21)
                        && v22 > COERCE_FLOAT(LODWORD(v37) & v21) )
                      {
                        goto LABEL_53;
                      }
                      if ( (char)(4 * v20) >> 6 == 1 )
                        goto LABEL_121;
                      if ( (char)(4 * v20) >> 6 < 0 )
                      {
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v146.m128_i32[0] & v21)
                                                                           * 61440.0) - 0.0) & v21) )
                          goto LABEL_121;
LABEL_123:
                        v123 = v32 + v38;
                        *(float *)v138 = v140.m128_f32[0] + v36;
                        v120 = v139.m128_f32[0] + v37;
                        goto LABEL_124;
                      }
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v148.m128_i32[0] & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(v147.m128_i32[0] & v21) * 61440.0))
                                                       + COERCE_FLOAT(v150.m128_i32[0] & v21))
                                               - v23) & v21) )
                      {
                        v20 = v20 & 0xCF | 0x10;
                      }
                      else
                      {
                        v20 |= 0x30u;
                        v138[17] = v20;
                        if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v146.m128_i32[0] & v21)
                                                                          * 61440.0) - 0.0) & v21) )
                          goto LABEL_123;
                      }
LABEL_121:
                      v113 = v137;
                      v114 = v136;
                      v138[17] = v20 & 0xF3;
                      v114.m128_f32[0] = v136.m128_f32[0] + (float)(v148.m128_f32[0] * v36);
                      v115 = _mm_shuffle_ps(v114, v114, 225);
                      v115.m128_f32[0] = v142.m128_f32[0] + (float)(v148.m128_f32[0] * v38);
                      v116 = _mm_shuffle_ps(v115, v115, 198);
                      v116.m128_f32[0] = v143.m128_f32[0] + (float)(v148.m128_f32[0] * v37);
                      v17 = _mm_shuffle_ps(v116, v116, 201);
                      v113.m128_f32[0] = v151.m128_f32[0] + (float)(v146.m128_f32[0] * v36);
                      v117 = _mm_shuffle_ps(v113, v113, 225);
                      v118 = v150.m128_f32[0] * *((float *)a2 + 12);
                      v117.m128_f32[0] = v149.m128_f32[0] + (float)(v146.m128_f32[0] * *((float *)a2 + 13));
                      v119 = _mm_shuffle_ps(v117, v117, 198);
                      v119.m128_f32[0] = v31 + (float)(v146.m128_f32[0] * v37);
                      v136 = v17;
                      v18 = _mm_shuffle_ps(v119, v119, 201);
                      v137 = v18;
                      *(float *)v138 = v140.m128_f32[0] + v118;
                      v120 = v139.m128_f32[0] + (float)(v150.m128_f32[0] * *((float *)a2 + 14));
                      v121 = v135;
                      v121.m128_f32[0] = v141.m128_f32[0] + (float)(v147.m128_f32[0] * v36);
                      v122 = _mm_shuffle_ps(v121, v121, 225);
                      v123 = v32 + (float)(v150.m128_f32[0] * *((float *)a2 + 13));
                      v122.m128_f32[0] = v135.m128_f32[1] + (float)(v147.m128_f32[0] * v38);
                      v124 = _mm_shuffle_ps(v122, v122, 198);
                      v124.m128_f32[0] = v145.m128_f32[0] + (float)(v147.m128_f32[0] * v37);
                      v16 = _mm_shuffle_ps(v124, v124, 201);
                      v135 = v16;
LABEL_124:
                      *(float *)&v138[4] = v123;
                      *(float *)&v138[8] = v120;
                      v19 = *(__m128 *)v138;
                      v138[16] = v15 & 0xFC;
                      goto LABEL_53;
                    }
LABEL_48:
                    if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v135) )
                    {
                      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
                      {
                        if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v135)
                          && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
                        {
                          v98 = *((float *)a2 + 4);
                          v99 = *((float *)a2 + 1);
                          v100 = *((float *)a2 + 5);
                          v101 = *(float *)a2;
                          *(_QWORD *)&v138[12] = 0x28083F800000LL;
                          v136.m128_u64[1] = 0LL;
                          v135.m128_u64[1] = 0LL;
                          v102 = (__m128)v136.m128_u64[0];
                          v137.m128_u64[0] = 0LL;
                          v137.m128_i32[3] = 0;
                          v103 = *(float *)&v138[4] * v98;
                          v104 = (float)(v135.m128_f32[1] * v98) + (float)(v135.m128_f32[0] * v101);
                          v102.m128_f32[0] = (float)(v136.m128_f32[1] * v98) + (float)(v136.m128_f32[0] * v101);
                          v105 = *(__m128 *)v138;
                          v106 = (float)(*(float *)&v138[8] * *((float *)a2 + 10)) + *((float *)a2 + 14);
                          v107 = _mm_shuffle_ps(v102, v102, 225);
                          v107.m128_f32[0] = (float)(v136.m128_f32[1] * v100) + (float)(v136.m128_f32[0] * v99);
                          v108 = _mm_shuffle_ps(v137, v137, 210);
                          v109 = (__m128)v135.m128_u64[0];
                          v109.m128_f32[0] = v104;
                          v110 = _mm_shuffle_ps(v109, v109, 225);
                          v17 = _mm_shuffle_ps(v107, v107, 225);
                          v136 = v17;
                          v110.m128_f32[0] = (float)(v135.m128_f32[1] * v100) + (float)(v135.m128_f32[0] * v99);
                          v105.m128_f32[0] = (float)(v103 + (float)(*(float *)v138 * v101)) + *((float *)a2 + 12);
                          v16 = _mm_shuffle_ps(v110, v110, 225);
                          v111 = _mm_shuffle_ps(v105, v105, 225);
                          v108.m128_f32[0] = v137.m128_f32[2] * *((float *)a2 + 10);
                          v18 = _mm_shuffle_ps(v108, v108, 201);
                          v111.m128_f32[0] = (float)((float)(*(float *)&v138[4] * v100) + (float)(*(float *)v138 * v99))
                                           + *((float *)a2 + 13);
                          v137 = v18;
                          v112 = _mm_shuffle_ps(v111, v111, 198);
                          v112.m128_f32[0] = v106;
                          v135 = v16;
                          v19 = _mm_shuffle_ps(v112, v112, 201);
                          *(__m128 *)v138 = v19;
                        }
                        else
                        {
                          v39 = *(__m128 *)a2;
                          *(_DWORD *)&v138[16] = 0;
                          v40 = *((__m128 *)a2 + 1);
                          v41 = *((__m128 *)a2 + 2);
                          v42 = *((__m128 *)a2 + 3);
                          v16 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v135, v135, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v135, v135, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v135, v135, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v135, v135, 0), v39)));
                          v17 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v136, v136, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v136, v136, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v136, v136, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v136, v136, 0), v39)));
                          v18 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v137, v137, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v137, v137, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v137, v137, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v137, v137, 0), v39)));
                          v19 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v138, *(__m128 *)v138, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v138, *(__m128 *)v138, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v138, *(__m128 *)v138, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v138, *(__m128 *)v138, 0), v39)));
                        }
                        goto LABEL_53;
                      }
                      v85 = *(float *)a2;
                      v86 = *((float *)a2 + 10);
                      v87 = *((float *)a2 + 5);
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - v23) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v87 - v23) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v86 - v23) & v21) )
                      {
                        v88 = *(float *)&v138[8];
                        v89 = v136.m128_f32[0] * v85;
                        v135.m128_f32[0] = v135.m128_f32[0] * v85;
                        v90 = v137.m128_f32[0] * v85;
                        v91 = *(float *)v138 * v85;
                        v92 = v135.m128_f32[1] * v87;
                        v93 = v136.m128_f32[1] * v87;
                        v94 = v137.m128_f32[1] * v87;
                        v95 = *(float *)&v138[4] * v87;
                        v136.m128_f32[0] = v136.m128_f32[0] * v85;
                        v137.m128_f32[0] = v137.m128_f32[0] * v85;
                        *(float *)v138 = *(float *)v138 * v85;
                        v135.m128_f32[1] = v135.m128_f32[1] * v87;
                        v136.m128_f32[1] = v136.m128_f32[1] * v87;
                        v137.m128_f32[1] = v137.m128_f32[1] * v87;
                        *(float *)&v138[4] = *(float *)&v138[4] * v87;
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v86 - v23) & v21) )
                        {
                          v135.m128_f32[2] = v135.m128_f32[2] * v86;
                          v88 = *(float *)&v138[8] * v86;
                          v137.m128_f32[2] = v137.m128_f32[2] * v86;
                          v136.m128_f32[2] = v136.m128_f32[2] * v86;
                          *(float *)&v138[8] = *(float *)&v138[8] * v86;
                        }
                        v96 = v138[16] & 0xCC;
                        v138[16] &= 0xCCu;
                      }
                      else
                      {
                        v96 = v138[16];
                        v88 = *(float *)&v138[8];
                        v95 = *(float *)&v138[4];
                        v91 = *(float *)v138;
                        v94 = v137.m128_f32[1];
                        v90 = v137.m128_f32[0];
                        v93 = v136.m128_f32[1];
                        v89 = v136.m128_f32[0];
                        v92 = v135.m128_f32[1];
                      }
                      if ( v22 > COERCE_FLOAT(*((_DWORD *)a2 + 12) & v21)
                        && v22 > COERCE_FLOAT(*((_DWORD *)a2 + 13) & v21)
                        && v22 > COERCE_FLOAT(*((_DWORD *)a2 + 14) & v21) )
                      {
                        goto LABEL_152;
                      }
                      v97 = v138[17];
                      if ( (char)(4 * v138[17]) >> 6 == 1 )
                        goto LABEL_148;
                      if ( (char)(4 * v138[17]) >> 6 < 0 )
                      {
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v137.m128_i32[3] & v21)
                                                                           * 61440.0) - 0.0) & v21) )
                          goto LABEL_148;
LABEL_150:
                        v130 = v91 + *((float *)a2 + 12);
                        v129 = v95 + *((float *)a2 + 13);
                        v131 = v88 + *((float *)a2 + 14);
                        goto LABEL_151;
                      }
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v136.m128_i32[3] & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(v135.m128_i32[3] & v21) * 61440.0))
                                                       + COERCE_FLOAT(*(_DWORD *)&v138[12] & v21))
                                               - v23) & v21) )
                      {
                        v97 = v138[17] & 0xCF | 0x10;
                      }
                      else
                      {
                        v97 = v138[17] | 0x30;
                        v138[17] |= 0x30u;
                        if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v137.m128_i32[3] & v21)
                                                                          * 61440.0) - 0.0) & v21) )
                          goto LABEL_150;
                      }
LABEL_148:
                      v126 = *((float *)a2 + 12);
                      v127 = *((float *)a2 + 14);
                      v128 = *((float *)a2 + 13);
                      v138[17] = v97 & 0xF3;
                      v135.m128_f32[0] = v135.m128_f32[0] + (float)(v135.m128_f32[3] * v126);
                      v135.m128_f32[1] = v92 + (float)(v135.m128_f32[3] * v128);
                      v135.m128_f32[2] = v135.m128_f32[2] + (float)(v135.m128_f32[3] * v127);
                      v136.m128_f32[1] = v93 + (float)(v136.m128_f32[3] * v128);
                      v136.m128_f32[0] = v89 + (float)(v136.m128_f32[3] * v126);
                      v136.m128_f32[2] = v136.m128_f32[2] + (float)(v136.m128_f32[3] * v127);
                      v137.m128_f32[1] = v94 + (float)(v137.m128_f32[3] * v128);
                      v137.m128_f32[0] = v90 + (float)(v137.m128_f32[3] * v126);
                      v137.m128_f32[2] = v137.m128_f32[2] + (float)(v137.m128_f32[3] * v127);
                      v129 = v95 + (float)(*(float *)&v138[12] * v128);
                      v130 = v91 + (float)(*(float *)&v138[12] * v126);
                      v131 = v88 + (float)(*(float *)&v138[12] * v127);
LABEL_151:
                      *(float *)&v138[8] = v131;
                      v138[16] = v96 & 0xFC;
                      *(float *)&v138[4] = v129;
                      *(float *)v138 = v130;
LABEL_152:
                      v19 = *(__m128 *)v138;
                      v18 = v137;
                      v17 = v136;
                      v16 = v135;
                      goto LABEL_53;
                    }
                    v74 = *(float *)v138;
                    v75 = *(float *)&v138[4];
                    v19 = *((__m128 *)a2 + 3);
                    v76 = *(float *)&v138[8];
                    v77 = *(_DWORD *)v138 & v21;
                    *(_DWORD *)&v138[16] = *((_DWORD *)a2 + 16);
                    v16 = *(__m128 *)a2;
                    v17 = *((__m128 *)a2 + 1);
                    v18 = *((__m128 *)a2 + 2);
                    v144 = *(float *)&v138[4];
                    *(__m128 *)v138 = v19;
                    if ( v22 > *(float *)&v77
                      && v22 > COERCE_FLOAT(LODWORD(v75) & v21)
                      && v22 > COERCE_FLOAT(LODWORD(v76) & v21) )
                    {
                      goto LABEL_53;
                    }
                    LODWORD(v78) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
                    LODWORD(v79) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
                    *(float *)v138 = *(float *)v138
                                   + (float)((float)((float)(v17.m128_f32[0] * v75) + (float)(v16.m128_f32[0] * v74))
                                           + (float)(v76 * v18.m128_f32[0]));
                    v80 = *(float *)&v138[4]
                        + (float)((float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] * v74)
                                        + (float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] * v75))
                                + (float)(v76 * _mm_shuffle_ps(v18, v18, 85).m128_f32[0]));
                    v81 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0] * v75;
                    LODWORD(v82) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
                    *(float *)&v138[4] = v80;
                    *(float *)&v138[8] = *(float *)&v138[8]
                                       + (float)((float)(v81 + (float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] * v74))
                                               + (float)(v76 * _mm_shuffle_ps(v18, v18, 170).m128_f32[0]));
                    if ( (char)(4 * v138[17]) >> 6 == 1 )
                      goto LABEL_101;
                    if ( (char)(4 * v138[17]) >> 6 >= 0 )
                    {
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(LODWORD(v82) & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(LODWORD(v78) & v21) * 61440.0))
                                                       + COERCE_FLOAT(*(_DWORD *)&v138[12] & v21))
                                               - v23) & v21) )
                        goto LABEL_101;
                      v138[17] |= 0x30u;
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v79) & v21) * 61440.0) - 0.0) & v21) )
                        goto LABEL_101;
                    }
                    else if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v79) & v21) * 61440.0) - 0.0) & v21) )
                    {
LABEL_101:
                      *(_DWORD *)&v138[16] = 0;
                      v83 = v76 * v79;
                      v84 = _mm_shuffle_ps(*(__m128 *)v138, *(__m128 *)v138, 147);
                      v84.m128_f32[0] = *(float *)&v138[12]
                                      + (float)((float)((float)(v82 * v144) + (float)(v78 * v74)) + v83);
                      v19 = _mm_shuffle_ps(v84, v84, 57);
                      *(__m128 *)v138 = v19;
                      goto LABEL_53;
                    }
                    v138[16] &= 0xFCu;
                    v19 = *(__m128 *)v138;
                    goto LABEL_53;
                  }
                  if ( (char)(4 * v35) >> 6 != 1 )
                  {
                    if ( (char)(4 * v35) >> 6 < 0 )
                    {
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & v21)
                                                                         * 61440.0) - 0.0) & v21) )
                        goto LABEL_165;
                      v35 = *((_BYTE *)a2 + 65);
                      goto LABEL_188;
                    }
                    if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                               (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v21) * 61440.0)
                                                             + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v21) * 61440.0))
                                                     + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v21))
                                             - v23) & v21) )
                    {
                      v35 = v35 & 0xCF | 0x10;
                      goto LABEL_165;
                    }
                    v35 |= 0x30u;
                    if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & v21)
                                                                      * 61440.0) - 0.0) & v21) )
                    {
LABEL_188:
                      if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & v21)
                        && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & v21) )
                      {
                        v35 |= 0xCu;
                        *((_BYTE *)a2 + 65) = v35;
                        goto LABEL_37;
                      }
                    }
                  }
LABEL_165:
                  *((_BYTE *)a2 + 65) = v35 & 0xF3 | 4;
                  goto LABEL_48;
                }
                LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
                v139 = _mm_shuffle_ps(v19, v19, 170);
                v140 = v19;
                LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
                v142 = _mm_shuffle_ps(v17, v17, 85);
LABEL_104:
                v141 = v16;
                goto LABEL_27;
              }
              if ( (char)(4 * v20) >> 6 != 1 )
              {
                if ( (char)(4 * v20) >> 6 >= 0 )
                {
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      (float)((float)((float)(COERCE_FLOAT(v27.m128_i32[0] & _xmm) * 61440.0)
                                                    + (float)(COERCE_FLOAT(v28.m128_i32[0] & _xmm) * 61440.0))
                                            + COERCE_FLOAT(v24.m128_i32[0] & _xmm))
                                    - 1.0) & _xmm) >= 0.000081380211 )
                  {
                    v20 = v20 & 0xCF | 0x10;
                    v138[17] = v20;
                    goto LABEL_171;
                  }
                  v30.m128_i32[0] = v143.m128_i32[0];
                  v20 |= 0x30u;
                  v138[17] = v20;
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(v30.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                {
                  LOBYTE(v15) = v15 | 0xC;
                  v138[16] = v15;
                  goto LABEL_22;
                }
              }
LABEL_171:
              v140 = v19;
              v141 = v16;
              LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
              v139 = _mm_shuffle_ps(v19, v19, 170);
              LOBYTE(v15) = v15 & 0xF0 | 5;
              v142 = _mm_shuffle_ps(v17, v17, 85);
              LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
              v138[16] = v15;
              goto LABEL_30;
            }
            v132 = _mm_shuffle_ps(v19, v19, 170);
            goto LABEL_161;
          }
        }
      }
LABEL_160:
      v20 = v20 & 0xF3 | 4;
      v132 = _mm_shuffle_ps(v19, v19, 170);
      v138[17] = v20;
LABEL_161:
      v139 = v132;
      LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
      v143 = _mm_shuffle_ps(v17, v17, 170);
      v140 = v19;
      goto LABEL_103;
    }
  }
LABEL_54:
  if ( a3 )
    return v5;
  v45 = (_DWORD *)*((_QWORD *)this + 29);
  v46 = 0LL;
  if ( (*v45 & 0x800000) != 0 )
  {
    v47 = v45[1];
    v48 = v45 + 2;
    for ( i = 0; i < v47; ++v48 )
    {
      if ( *v48 == 9 )
        break;
      ++i;
    }
    v50 = (unsigned int)v45[1];
    if ( i >= (unsigned int)v50 )
      v51 = 0LL;
    else
      v51 = (_QWORD **)((char *)v45 + 8LL * i - (((_BYTE)v50 + 15) & 7) + v50 + 15);
    v52 = *v51;
    v53 = *(__int64 (__fastcall **)())(*v52 + 64LL);
    if ( v53 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
    {
      if ( CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)v52, 173) )
      {
LABEL_65:
        v46 = v52;
        goto LABEL_69;
      }
    }
    else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v53)(v52, 173LL) )
    {
      goto LABEL_65;
    }
    v54 = *(__int64 (__fastcall **)())(*v52 + 64LL);
    if ( v54 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
      || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v54)(v52, 57LL) )
    {
      v46 = (_QWORD *)v52[11];
LABEL_69:
      if ( v46 )
        goto LABEL_78;
    }
  }
  v55 = *((_QWORD *)this + 11);
  if ( !v55 || *(_DWORD *)(v55 + 112) != 1 )
    return v5;
  v56 = *((_DWORD *)this + 28);
  Count = CPtrArray<CVisual>::GetCount((_QWORD *)this + 10);
  v58 = 0;
  if ( (**((_DWORD **)this + 29) & 0x800000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
           EffectInternal,
           60LL) )
    {
      v58 = 1;
    }
  }
  v59 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL);
  v60 = v59 == CLayerVisual::GetTreeEffect ? (struct CTreeEffect *)*((_QWORD *)this + 85) : v59(this);
  if ( (v56 == 1 || !Count) && !v58 && !v60 )
    return v5;
LABEL_78:
  v61 = *((_BYTE *)a2 + 64);
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_BYTE *)a2 + 64) = v61 & 0xF0 | 1;
  if ( v46 )
  {
    v62 = (const struct D2D_SIZE_F *)((char *)this + 144);
    v63 = v46[5] & 1;
    if ( this != (CVisual *)-144LL )
    {
      if ( (v46[5] & 1) == 0
        && *((_BYTE *)v46 + 156)
        && (*((float *)v46 + 37) != v62->width || *((float *)v46 + 38) != *((float *)this + 37)) )
      {
        v63 = 1;
      }
      *(struct D2D_SIZE_F *)((char *)v46 + 148) = *v62;
    }
    if ( v63 )
    {
      v64 = (struct CMILMatrix *)(v46 + 10);
      v65 = *(void (__fastcall **)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*v46 + 200LL);
      if ( v65 == CComponentTransform3D::GetRealization )
      {
        CComponentTransform3D::GetRealization((CComponentTransform3D *)v46, v62, v64);
      }
      else if ( v65 == CMatrixTransform::GetRealization )
      {
        CMatrixTransform::GetRealization((CMatrixTransform *)v46, v62, v64);
      }
      else
      {
        v65((CComponentTransform3D *)v46, v62, v64);
      }
      *((_DWORD *)v46 + 10) &= ~1u;
    }
    v66 = *((__m128 *)v46 + 5);
    v67 = *((__m128 *)v46 + 6);
    *(_DWORD *)&v138[16] = *((_DWORD *)v46 + 36);
    v135 = v66;
    v68 = *((__m128 *)v46 + 7);
    v136 = v67;
    v69 = *((_OWORD *)v46 + 8);
    v137 = v68;
    *(_OWORD *)v138 = v69;
    CMILMatrix::Multiply((CMILMatrix *)&v135, a2);
    v70 = v136;
    v71 = *(_DWORD *)&v138[16];
    *(__m128 *)a2 = v135;
    v72 = v137;
    *((__m128 *)a2 + 1) = v70;
    v73 = *(_OWORD *)v138;
    *((__m128 *)a2 + 2) = v72;
    *((_OWORD *)a2 + 3) = v73;
    *((_DWORD *)a2 + 16) = v71;
  }
  return 1;
}
