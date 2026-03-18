/*
 * XREFs of ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800B2F20
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180168E10 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281244 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x1802A8D10 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370F0 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180038C40 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800ADB30 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2C70 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B4A00 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800F4CC0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _DWORD *v46; // rdi
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
  struct CTreeEffect *(__fastcall *v59)(CLayerVisual *__hidden); // rax
  struct CTreeEffect *v60; // rax
  char v61; // al
  const struct D2D_SIZE_F *v62; // rdx
  char v63; // cl
  struct CMILMatrix *v64; // r8
  void (__fastcall *v65)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  float v66; // xmm12_4
  float v67; // xmm3_4
  float v68; // xmm4_4
  int v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm7_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm3_4
  float v75; // xmm4_4
  __m128 v76; // xmm7
  float v77; // xmm2_4
  float v78; // xmm7_4
  float v79; // xmm1_4
  float v80; // xmm3_4
  float v81; // xmm14_4
  float v82; // xmm12_4
  float v83; // xmm5_4
  float v84; // xmm15_4
  float v85; // xmm13_4
  float v86; // xmm11_4
  float v87; // xmm4_4
  char v88; // dl
  char v89; // cl
  float v90; // xmm7_4
  float v91; // xmm0_4
  float v92; // xmm9_4
  float v93; // xmm8_4
  __m128 v94; // xmm15
  float v95; // xmm3_4
  float v96; // xmm12_4
  __m128 v97; // xmm7
  __m128 v98; // xmm15
  __m128 v99; // xmm14
  __m128 v100; // xmm11
  __m128 v101; // xmm11
  __m128 v102; // xmm7
  __m128 v103; // xmm7
  __m128 v104; // xmm14
  __m128 v105; // xmm15
  __m128 v106; // xmm15
  __m128 v107; // xmm15
  __m128 v108; // xmm14
  __m128 v109; // xmm14
  float v110; // xmm0_4
  __m128 v111; // xmm11
  __m128 v112; // xmm11
  float v113; // xmm13_4
  __m128 v114; // xmm11
  char IsTranslateAndScaleIgnore; // al
  float v116; // xmm6_4
  float v117; // xmm8_4
  float v118; // xmm2_4
  float v119; // xmm4_4
  float v120; // xmm5_4
  float v121; // xmm3_4
  __m128 v122; // xmm1
  char v123; // al
  struct CEffect *EffectInternal; // rax
  __m128 v125; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v126; // [rsp+30h] [rbp-D0h]
  __m128 v127; // [rsp+40h] [rbp-C0h]
  _BYTE v128[20]; // [rsp+50h] [rbp-B0h]
  __m128 v129; // [rsp+70h] [rbp-90h]
  __m128 v130; // [rsp+80h] [rbp-80h]
  __m128 v131; // [rsp+90h] [rbp-70h]
  __m128 v132; // [rsp+A0h] [rbp-60h]
  __m128 v133; // [rsp+B0h] [rbp-50h]
  float v134; // [rsp+C0h] [rbp-40h]
  __m128 v135; // [rsp+D0h] [rbp-30h]
  __m128 v136; // [rsp+E0h] [rbp-20h]
  __m128 v137; // [rsp+F0h] [rbp-10h]
  __m128 v138; // [rsp+100h] [rbp+0h]
  __m128 v139; // [rsp+110h] [rbp+10h]
  __m128 v140; // [rsp+120h] [rbp+20h]
  __m128 v141; // [rsp+130h] [rbp+30h]

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
      v125 = v16;
      v126 = v17;
      *(_DWORD *)&v128[16] = v15;
      v18 = v10[7];
      v19 = v10[8];
      v127 = v18;
      *(__m128 *)v128 = v19;
      if ( (char)((_BYTE)v15 << 6) >> 6 == 1 )
      {
        v20 = v128[17];
        v21 = _xmm;
        v22 = FLOAT_0_000081380211;
        v23 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v140.m128_i32[0] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
        v136.m128_i32[0] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v139.m128_i32[0] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        v138.m128_i32[0] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v129.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
        v132.m128_i32[0] = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
        v133.m128_i32[0] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v135.m128_i32[0] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
        v130.m128_i32[0] = v19.m128_i32[0];
        v141.m128_i32[0] = v18.m128_i32[0];
        v137.m128_i32[0] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
        v131.m128_i32[0] = v16.m128_i32[0];
        LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        goto LABEL_30;
      }
      if ( (char)((_BYTE)v15 << 6) >> 6 < 0 )
      {
LABEL_52:
        v16 = *(__m128 *)a2;
        *(_DWORD *)&v128[16] = *((_DWORD *)a2 + 16);
        v17 = *((__m128 *)a2 + 1);
        v18 = *((__m128 *)a2 + 2);
        v19 = *((__m128 *)a2 + 3);
LABEL_53:
        v43 = *(_DWORD *)&v128[16];
        v5 = 1;
        *(__m128 *)a2 = v16;
        *((__m128 *)a2 + 1) = v17;
        *((__m128 *)a2 + 2) = v18;
        *((__m128 *)a2 + 3) = v19;
        *((_DWORD *)a2 + 16) = v43;
        goto LABEL_54;
      }
      v20 = v128[17];
      v21 = _xmm;
      v22 = FLOAT_0_000081380211;
      v23 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( (char)(16 * v128[17]) >> 6 == 1 )
      {
        v141 = v18;
        v140.m128_i32[0] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
        LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        v129 = _mm_shuffle_ps(v19, v19, 170);
        v130 = v19;
        v136.m128_i32[0] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v139 = _mm_shuffle_ps(v18, v18, 85);
        v133 = _mm_shuffle_ps(v17, v17, 170);
        v138.m128_i32[0] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v137.m128_i32[0] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
LABEL_103:
        v132 = _mm_shuffle_ps(v17, v17, 85);
        v135 = _mm_shuffle_ps(v16, v16, 170);
        LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        goto LABEL_104;
      }
      v24 = _mm_shuffle_ps(v19, v19, 255);
      v25 = _mm_shuffle_ps(v18, v18, 255);
      v26 = _mm_shuffle_ps(v18, v18, 85);
      v27 = _mm_shuffle_ps(v17, v17, 255);
      v28 = _mm_shuffle_ps(v16, v16, 255);
      v140 = v24;
      v136 = v25;
      v139 = v26;
      v138 = v27;
      v137 = v28;
      v141 = v18;
      if ( (char)(16 * v128[17]) >> 6 < 0 )
        goto LABEL_20;
      if ( (char)(4 * v128[17]) >> 6 != 1 )
      {
        if ( (char)(4 * v128[17]) >> 6 < 0 )
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
          v20 = v128[17] & 0xCF | 0x10;
          goto LABEL_160;
        }
        v20 = v128[17] | 0x30;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v25.m128_i32[0] & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
        {
          v26.m128_i32[0] = v139.m128_i32[0];
LABEL_179:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v26.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
          {
            v20 |= 0xCu;
            v128[17] = v20;
LABEL_20:
            if ( (char)(16 * v15) >> 6 != 1 )
            {
              v29 = _mm_shuffle_ps(v16, v16, 170);
              v30 = _mm_shuffle_ps(v17, v17, 170);
              v135 = v29;
              v133 = v30;
              if ( (char)(16 * v15) >> 6 < 0 )
              {
LABEL_22:
                if ( (char)(4 * v15) >> 6 != 1 )
                {
                  if ( (char)(4 * v15) >> 6 >= 0 )
                  {
                    IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v125);
                    v132 = (__m128)v126.m128_u32[1];
                    v131 = (__m128)v125.m128_u32[0];
                    if ( !IsTranslateAndScaleIgnore
                      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v125.m128_f32[0] - 1.0) & _xmm) >= 0.000081380211
                      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v126.m128_f32[1] - 1.0) & _xmm) >= 0.000081380211 )
                    {
                      v20 = v128[17];
                      v32 = *(float *)&v128[4];
                      v19 = *(__m128 *)v128;
                      LOBYTE(v15) = v128[16] & 0xCC | 0x11;
                      v31 = v127.m128_f32[2];
                      v18 = v127;
                      v17 = v126;
                      v16 = v125;
                      v140 = (__m128)*(unsigned int *)&v128[12];
                      v130 = (__m128)*(unsigned int *)v128;
                      v136 = (__m128)v127.m128_u32[3];
                      v139 = (__m128)v127.m128_u32[1];
                      v138 = (__m128)v126.m128_u32[3];
                      v129 = (__m128)*(unsigned int *)&v128[8];
                      v137 = (__m128)v125.m128_u32[3];
                      v141 = (__m128)v127.m128_u32[0];
                      v135 = (__m128)v125.m128_u32[2];
                      v133 = (__m128)v126.m128_u32[2];
                      v128[16] = v15;
                      goto LABEL_30;
                    }
                    v20 = v128[17];
                    LOBYTE(v15) = v128[16] | 0x30;
                    v19 = *(__m128 *)v128;
                    v18 = v127;
                    v17 = v126;
                    v16 = v125;
                    v140 = (__m128)*(unsigned int *)&v128[12];
                    v136 = (__m128)v127.m128_u32[3];
                    v139 = (__m128)v127.m128_u32[1];
                    v138 = (__m128)v126.m128_u32[3];
                    v137 = (__m128)v125.m128_u32[3];
                    v141 = (__m128)v127.m128_u32[0];
                    v135 = (__m128)v125.m128_u32[2];
                    v133 = (__m128)v126.m128_u32[2];
                  }
                  else
                  {
                    v132 = _mm_shuffle_ps(v17, v17, 85);
                    v131 = v16;
                  }
                  v31 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
                  LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v31 - 1.0) & _xmm) >= 0.000081380211 )
                  {
                    v130.m128_i32[0] = v19.m128_i32[0];
                    v129.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
LABEL_27:
                    LOBYTE(v15) = v15 & 0xFC | 1;
                    v128[16] = v15;
                    goto LABEL_30;
                  }
                  v130 = v19;
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                  {
                    LOBYTE(v15) = v15 & 0xFC | 1;
                    v129.m128_i32[0] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
                    v128[16] = v15;
                    goto LABEL_30;
                  }
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - 0.0) & _xmm) < 0.000081380211 )
                  {
                    v129 = _mm_shuffle_ps(v19, v19, 170);
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v129.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                      goto LABEL_27;
                    goto LABEL_52;
                  }
                  LOBYTE(v15) = v15 & 0xFC | 1;
                  v129 = _mm_shuffle_ps(v19, v19, 170);
                  v128[16] = v15;
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
                          v123 = *((_BYTE *)a2 + 64) & 0xF3 | 4;
                          *((_BYTE *)a2 + 65) = v35 & 0xCF | 0x10;
                          *((_BYTE *)a2 + 64) = v123;
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
                      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a2)
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
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v136.m128_i32[0] & v21)
                                                                           * 61440.0) - 0.0) & v21) )
                          goto LABEL_121;
LABEL_123:
                        v113 = v32 + v38;
                        *(float *)v128 = v130.m128_f32[0] + v36;
                        v110 = v129.m128_f32[0] + v37;
                        goto LABEL_124;
                      }
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v138.m128_i32[0] & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(v137.m128_i32[0] & v21) * 61440.0))
                                                       + COERCE_FLOAT(v140.m128_i32[0] & v21))
                                               - v23) & v21) )
                      {
                        v20 = v20 & 0xCF | 0x10;
                      }
                      else
                      {
                        v20 |= 0x30u;
                        v128[17] = v20;
                        if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v136.m128_i32[0] & v21)
                                                                          * 61440.0) - 0.0) & v21) )
                          goto LABEL_123;
                      }
LABEL_121:
                      v104 = v127;
                      v105 = v126;
                      v128[17] = v20 & 0xF3;
                      v105.m128_f32[0] = v126.m128_f32[0] + (float)(v138.m128_f32[0] * v36);
                      v106 = _mm_shuffle_ps(v105, v105, 225);
                      v106.m128_f32[0] = v132.m128_f32[0] + (float)(v138.m128_f32[0] * v38);
                      v107 = _mm_shuffle_ps(v106, v106, 198);
                      v107.m128_f32[0] = v133.m128_f32[0] + (float)(v138.m128_f32[0] * v37);
                      v17 = _mm_shuffle_ps(v107, v107, 201);
                      v104.m128_f32[0] = v141.m128_f32[0] + (float)(v136.m128_f32[0] * v36);
                      v108 = _mm_shuffle_ps(v104, v104, 225);
                      v108.m128_f32[0] = v139.m128_f32[0] + (float)(v136.m128_f32[0] * *((float *)a2 + 13));
                      v109 = _mm_shuffle_ps(v108, v108, 198);
                      v109.m128_f32[0] = v31 + (float)(v136.m128_f32[0] * v37);
                      v18 = _mm_shuffle_ps(v109, v109, 201);
                      *(float *)v128 = v130.m128_f32[0] + (float)(v140.m128_f32[0] * *((float *)a2 + 12));
                      v110 = v129.m128_f32[0] + (float)(v140.m128_f32[0] * *((float *)a2 + 14));
                      v111 = v125;
                      v111.m128_f32[0] = v131.m128_f32[0] + (float)(v137.m128_f32[0] * v36);
                      v112 = _mm_shuffle_ps(v111, v111, 225);
                      v113 = v32 + (float)(v140.m128_f32[0] * *((float *)a2 + 13));
                      v112.m128_f32[0] = v125.m128_f32[1] + (float)(v137.m128_f32[0] * v38);
                      v114 = _mm_shuffle_ps(v112, v112, 198);
                      v114.m128_f32[0] = v135.m128_f32[0] + (float)(v137.m128_f32[0] * v37);
                      v16 = _mm_shuffle_ps(v114, v114, 201);
LABEL_124:
                      *(float *)&v128[8] = v110;
                      *(float *)&v128[4] = v113;
                      v19 = *(__m128 *)v128;
                      v128[16] = v15 & 0xFC;
                      goto LABEL_53;
                    }
LABEL_48:
                    if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v125) )
                    {
                      if ( !CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
                      {
                        if ( CMILMatrix::IsPure2DUniformZ<1>((__int64)&v125)
                          && CMILMatrix::IsPure2DUniformZ<1>((__int64)a2) )
                        {
                          v90 = *((float *)a2 + 4);
                          v91 = *((float *)a2 + 1);
                          v92 = *((float *)a2 + 5);
                          v93 = *(float *)a2;
                          *(_QWORD *)&v128[12] = 0x28083F800000LL;
                          v126.m128_u64[1] = 0LL;
                          v125.m128_u64[1] = 0LL;
                          v94 = (__m128)v126.m128_u64[0];
                          v127.m128_u64[0] = 0LL;
                          v127.m128_i32[3] = 0;
                          v95 = *(float *)&v128[4] * v90;
                          v96 = (float)(v125.m128_f32[1] * v90) + (float)(v125.m128_f32[0] * v93);
                          v94.m128_f32[0] = (float)(v126.m128_f32[1] * v90) + (float)(v126.m128_f32[0] * v93);
                          v97 = *(__m128 *)v128;
                          v98 = _mm_shuffle_ps(v94, v94, 225);
                          v98.m128_f32[0] = (float)(v126.m128_f32[1] * v92) + (float)(v126.m128_f32[0] * v91);
                          v99 = _mm_shuffle_ps(v127, v127, 210);
                          v100 = (__m128)v125.m128_u64[0];
                          v100.m128_f32[0] = v96;
                          v101 = _mm_shuffle_ps(v100, v100, 225);
                          v17 = _mm_shuffle_ps(v98, v98, 225);
                          v101.m128_f32[0] = (float)(v125.m128_f32[1] * v92) + (float)(v125.m128_f32[0] * v91);
                          v97.m128_f32[0] = (float)(v95 + (float)(*(float *)v128 * v93)) + *((float *)a2 + 12);
                          v16 = _mm_shuffle_ps(v101, v101, 225);
                          v102 = _mm_shuffle_ps(v97, v97, 225);
                          v99.m128_f32[0] = v127.m128_f32[2] * *((float *)a2 + 10);
                          v18 = _mm_shuffle_ps(v99, v99, 201);
                          v102.m128_f32[0] = (float)((float)(*(float *)&v128[4] * v92) + (float)(*(float *)v128 * v91))
                                           + *((float *)a2 + 13);
                          v103 = _mm_shuffle_ps(v102, v102, 198);
                          v103.m128_f32[0] = (float)(*(float *)&v128[8] * *((float *)a2 + 10)) + *((float *)a2 + 14);
                          v19 = _mm_shuffle_ps(v103, v103, 201);
                        }
                        else
                        {
                          v39 = *(__m128 *)a2;
                          *(_DWORD *)&v128[16] = 0;
                          v40 = *((__m128 *)a2 + 1);
                          v41 = *((__m128 *)a2 + 2);
                          v42 = *((__m128 *)a2 + 3);
                          v16 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0), v39)));
                          v17 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v126, v126, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v126, v126, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v126, v126, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v126, v126, 0), v39)));
                          v18 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v127, v127, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(v127, v127, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(v127, v127, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(v127, v127, 0), v39)));
                          v19 = _mm_add_ps(
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v128, *(__m128 *)v128, 255), v42),
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v128, *(__m128 *)v128, 85), v40)),
                                  _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v128, *(__m128 *)v128, 170), v41),
                                    _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v128, *(__m128 *)v128, 0), v39)));
                        }
                        goto LABEL_53;
                      }
                      v77 = *(float *)a2;
                      v78 = *((float *)a2 + 10);
                      v79 = *((float *)a2 + 5);
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - v23) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v79 - v23) & v21)
                        || v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v78 - v23) & v21) )
                      {
                        v80 = *(float *)&v128[8];
                        v81 = v126.m128_f32[0] * v77;
                        v125.m128_f32[0] = v125.m128_f32[0] * v77;
                        v82 = v127.m128_f32[0] * v77;
                        v83 = *(float *)v128 * v77;
                        v84 = v125.m128_f32[1] * v79;
                        v85 = v126.m128_f32[1] * v79;
                        v86 = v127.m128_f32[1] * v79;
                        v87 = *(float *)&v128[4] * v79;
                        v126.m128_f32[0] = v126.m128_f32[0] * v77;
                        v127.m128_f32[0] = v127.m128_f32[0] * v77;
                        *(float *)v128 = *(float *)v128 * v77;
                        v125.m128_f32[1] = v125.m128_f32[1] * v79;
                        v126.m128_f32[1] = v126.m128_f32[1] * v79;
                        v127.m128_f32[1] = v127.m128_f32[1] * v79;
                        *(float *)&v128[4] = *(float *)&v128[4] * v79;
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v78 - v23) & v21) )
                        {
                          v125.m128_f32[2] = v125.m128_f32[2] * v78;
                          v80 = *(float *)&v128[8] * v78;
                          v127.m128_f32[2] = v127.m128_f32[2] * v78;
                          v126.m128_f32[2] = v126.m128_f32[2] * v78;
                          *(float *)&v128[8] = *(float *)&v128[8] * v78;
                        }
                        v88 = v128[16] & 0xCC;
                        v128[16] &= 0xCCu;
                      }
                      else
                      {
                        v88 = v128[16];
                        v80 = *(float *)&v128[8];
                        v87 = *(float *)&v128[4];
                        v83 = *(float *)v128;
                        v86 = v127.m128_f32[1];
                        v82 = v127.m128_f32[0];
                        v85 = v126.m128_f32[1];
                        v81 = v126.m128_f32[0];
                        v84 = v125.m128_f32[1];
                      }
                      if ( v22 > COERCE_FLOAT(*((_DWORD *)a2 + 12) & v21)
                        && v22 > COERCE_FLOAT(*((_DWORD *)a2 + 13) & v21)
                        && v22 > COERCE_FLOAT(*((_DWORD *)a2 + 14) & v21) )
                      {
                        goto LABEL_152;
                      }
                      v89 = v128[17];
                      if ( (char)(4 * v128[17]) >> 6 == 1 )
                        goto LABEL_148;
                      if ( (char)(4 * v128[17]) >> 6 < 0 )
                      {
                        if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v127.m128_i32[3] & v21)
                                                                           * 61440.0) - 0.0) & v21) )
                          goto LABEL_148;
LABEL_150:
                        v120 = v83 + *((float *)a2 + 12);
                        v119 = v87 + *((float *)a2 + 13);
                        v121 = v80 + *((float *)a2 + 14);
                        goto LABEL_151;
                      }
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v126.m128_i32[3] & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(v125.m128_i32[3] & v21) * 61440.0))
                                                       + COERCE_FLOAT(*(_DWORD *)&v128[12] & v21))
                                               - v23) & v21) )
                      {
                        v89 = v128[17] & 0xCF | 0x10;
                      }
                      else
                      {
                        v89 = v128[17] | 0x30;
                        v128[17] |= 0x30u;
                        if ( v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v127.m128_i32[3] & v21)
                                                                          * 61440.0) - 0.0) & v21) )
                          goto LABEL_150;
                      }
LABEL_148:
                      v116 = *((float *)a2 + 12);
                      v117 = *((float *)a2 + 14);
                      v118 = *((float *)a2 + 13);
                      v128[17] = v89 & 0xF3;
                      v125.m128_f32[0] = v125.m128_f32[0] + (float)(v125.m128_f32[3] * v116);
                      v125.m128_f32[1] = v84 + (float)(v125.m128_f32[3] * v118);
                      v125.m128_f32[2] = v125.m128_f32[2] + (float)(v125.m128_f32[3] * v117);
                      v126.m128_f32[1] = v85 + (float)(v126.m128_f32[3] * v118);
                      v126.m128_f32[0] = v81 + (float)(v126.m128_f32[3] * v116);
                      v126.m128_f32[2] = v126.m128_f32[2] + (float)(v126.m128_f32[3] * v117);
                      v127.m128_f32[1] = v86 + (float)(v127.m128_f32[3] * v118);
                      v127.m128_f32[0] = v82 + (float)(v127.m128_f32[3] * v116);
                      v127.m128_f32[2] = v127.m128_f32[2] + (float)(v127.m128_f32[3] * v117);
                      v119 = v87 + (float)(*(float *)&v128[12] * v118);
                      v120 = v83 + (float)(*(float *)&v128[12] * v116);
                      v121 = v80 + (float)(*(float *)&v128[12] * v117);
LABEL_151:
                      *(float *)&v128[8] = v121;
                      v128[16] = v88 & 0xFC;
                      *(float *)&v128[4] = v119;
                      *(float *)v128 = v120;
LABEL_152:
                      v19 = *(__m128 *)v128;
                      v18 = v127;
                      v17 = v126;
                      v16 = v125;
                      goto LABEL_53;
                    }
                    v66 = *(float *)v128;
                    v67 = *(float *)&v128[4];
                    v19 = *((__m128 *)a2 + 3);
                    v68 = *(float *)&v128[8];
                    v69 = *(_DWORD *)v128 & v21;
                    *(_DWORD *)&v128[16] = *((_DWORD *)a2 + 16);
                    v16 = *(__m128 *)a2;
                    v17 = *((__m128 *)a2 + 1);
                    v18 = *((__m128 *)a2 + 2);
                    v134 = *(float *)&v128[4];
                    *(__m128 *)v128 = v19;
                    if ( v22 > *(float *)&v69
                      && v22 > COERCE_FLOAT(LODWORD(v67) & v21)
                      && v22 > COERCE_FLOAT(LODWORD(v68) & v21) )
                    {
                      goto LABEL_53;
                    }
                    LODWORD(v70) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
                    LODWORD(v71) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
                    *(float *)v128 = *(float *)v128
                                   + (float)((float)((float)(v17.m128_f32[0] * v67) + (float)(v16.m128_f32[0] * v66))
                                           + (float)(v68 * v18.m128_f32[0]));
                    v72 = *(float *)&v128[4]
                        + (float)((float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] * v66)
                                        + (float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] * v67))
                                + (float)(v68 * _mm_shuffle_ps(v18, v18, 85).m128_f32[0]));
                    v73 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0] * v67;
                    LODWORD(v74) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
                    *(float *)&v128[4] = v72;
                    *(float *)&v128[8] = *(float *)&v128[8]
                                       + (float)((float)(v73 + (float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] * v66))
                                               + (float)(v68 * _mm_shuffle_ps(v18, v18, 170).m128_f32[0]));
                    if ( (char)(4 * v128[17]) >> 6 == 1 )
                      goto LABEL_101;
                    if ( (char)(4 * v128[17]) >> 6 >= 0 )
                    {
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(LODWORD(v74) & v21) * 61440.0)
                                                               + (float)(COERCE_FLOAT(LODWORD(v70) & v21) * 61440.0))
                                                       + COERCE_FLOAT(*(_DWORD *)&v128[12] & v21))
                                               - v23) & v21) )
                        goto LABEL_101;
                      v128[17] |= 0x30u;
                      if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v71) & v21) * 61440.0) - 0.0) & v21) )
                        goto LABEL_101;
                    }
                    else if ( v22 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v71) & v21) * 61440.0) - 0.0) & v21) )
                    {
LABEL_101:
                      *(_DWORD *)&v128[16] = 0;
                      v75 = v68 * v71;
                      v76 = _mm_shuffle_ps(*(__m128 *)v128, *(__m128 *)v128, 147);
                      v76.m128_f32[0] = *(float *)&v128[12]
                                      + (float)((float)((float)(v74 * v134) + (float)(v70 * v66)) + v75);
                      v19 = _mm_shuffle_ps(v76, v76, 57);
                      goto LABEL_53;
                    }
                    v128[16] &= 0xFCu;
                    v19 = *(__m128 *)v128;
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
                v129 = _mm_shuffle_ps(v19, v19, 170);
                v130 = v19;
                LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
                v132 = _mm_shuffle_ps(v17, v17, 85);
LABEL_104:
                v131 = v16;
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
                    v128[17] = v20;
                    goto LABEL_171;
                  }
                  v30.m128_i32[0] = v133.m128_i32[0];
                  v20 |= 0x30u;
                  v128[17] = v20;
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(v30.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                {
                  LOBYTE(v15) = v15 | 0xC;
                  v128[16] = v15;
                  goto LABEL_22;
                }
              }
LABEL_171:
              v130 = v19;
              v131 = v16;
              LODWORD(v31) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
              v129 = _mm_shuffle_ps(v19, v19, 170);
              LOBYTE(v15) = v15 & 0xF0 | 5;
              v132 = _mm_shuffle_ps(v17, v17, 85);
              LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
              v128[16] = v15;
              goto LABEL_30;
            }
            v122 = _mm_shuffle_ps(v19, v19, 170);
            goto LABEL_161;
          }
        }
      }
LABEL_160:
      v20 = v20 & 0xF3 | 4;
      v122 = _mm_shuffle_ps(v19, v19, 170);
      v128[17] = v20;
LABEL_161:
      v129 = v122;
      LODWORD(v32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
      v133 = _mm_shuffle_ps(v17, v17, 170);
      v130 = v19;
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
      if ( CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)v52, 175) )
      {
LABEL_65:
        v46 = v52;
        goto LABEL_69;
      }
    }
    else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v53)(v52, 175LL) )
    {
      goto LABEL_65;
    }
    v54 = *(__int64 (__fastcall **)())(*v52 + 64LL);
    if ( v54 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
      || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v54)(v52, 58LL) )
    {
      v46 = (_DWORD *)v52[11];
LABEL_69:
      if ( v46 )
        goto LABEL_78;
    }
  }
  v55 = *((_QWORD *)this + 11);
  if ( !v55 || *(_DWORD *)(v55 + 112) != 1 )
    return v5;
  v56 = *((_DWORD *)this + 28);
  Count = CPtrArray<CVisual>::GetCount((char *)this + 80);
  v58 = 0;
  if ( (**((_DWORD **)this + 29) & 0x800000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
           EffectInternal,
           61LL) )
    {
      v58 = 1;
    }
  }
  v59 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)this + 224LL);
  v60 = v59 == CLayerVisual::GetTreeEffect ? (struct CTreeEffect *)*((_QWORD *)this + 86) : v59(this);
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
    v63 = v46[10] & 1;
    if ( this != (CVisual *)-144LL )
    {
      if ( (v46[10] & 1) == 0
        && *((_BYTE *)v46 + 156)
        && (*((float *)v46 + 37) != v62->width || *((float *)v46 + 38) != *((float *)this + 37)) )
      {
        v63 = 1;
      }
      *(struct D2D_SIZE_F *)(v46 + 37) = *v62;
    }
    if ( v63 )
    {
      v64 = (struct CMILMatrix *)(v46 + 20);
      v65 = *(void (__fastcall **)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v46 + 200LL);
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
      v46[10] &= ~1u;
    }
    CMILMatrix::Multiply((const struct CMILMatrix *)(v46 + 20), a2, a2);
  }
  return 1;
}
