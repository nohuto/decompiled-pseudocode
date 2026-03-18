/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B630 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18006EA40 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014D110 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180170E80 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x180173340 (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023E480 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E7F0 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A6870 (-GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV-.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A69C0 (-GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ @ 0x18014130C (-GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142C00 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18019F3B0 (-GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEA.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801B2190 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CContent::LayoutData *a3,
        struct CShape **a4)
{
  CVisualSurface *v8; // rcx
  CSwapchainRenderStrategy *v9; // r10
  __int64 (__fastcall *v10)(CVisualSurfaceRenderStrategy *__hidden, const struct CSurfaceBrush *, const struct D2D_SIZE_F *, struct D2D_SIZE_F *, struct D2D_RECT_F *, struct D2D_MATRIX_3X2_F *); // rax
  const struct D2D_VECTOR_2F *SourceSize; // rax
  __m128 dx_low; // xmm11
  __m128 dy_low; // xmm7
  unsigned int v14; // edi
  float x; // xmm4_4
  float y; // xmm5_4
  FLOAT v17; // xmm0_4
  int v18; // edx
  float v19; // xmm0_4
  __m128 width_low; // xmm8
  float v21; // xmm1_4
  float v22; // xmm9_4
  float v23; // xmm12_4
  __m128 v24; // xmm3
  CComponentTransform2D *v25; // rcx
  __m128 v26; // xmm3
  float v27; // xmm2_4
  float v28; // xmm14_4
  float v29; // xmm10_4
  float v30; // xmm15_4
  float v31; // xmm0_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  float v34; // xmm11_4
  __m128 v35; // xmm13
  float m11; // xmm12_4
  __m128 v37; // xmm8
  void (__fastcall *v38)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  float v39; // xmm0_4
  const struct D2D1::Matrix3x2F *v40; // r8
  __int128 v42; // xmm13
  __m128 v43; // xmm14
  struct D2D_RECT_F v44; // xmm1
  CRectanglesShape *v45; // rbx
  CRectanglesShape *(__fastcall *v46)(CRectanglesShape *, char, __int64); // rax
  __int64 v47; // rax
  CCachedVisualImage *v48; // rcx
  void (*v49)(void); // rax
  __int64 v50; // rax
  char *v51; // r14
  CPathData *v52; // rcx
  void (*v53)(void); // rax
  float v55; // xmm2_4
  float v56; // xmm1_4
  __m128 v57; // xmm0
  __m128 v58; // xmm0
  int v59; // eax
  __int64 v60; // rdx
  CRectanglesShape *v61; // rbx
  CRectanglesShape *(__fastcall *v62)(CRectanglesShape *, char, __int64); // rax
  __int64 (*v63)(void); // rax
  char IsEmpty; // al
  struct D2D_RECT_F v65; // xmm1
  CRectanglesShape *v66; // rax
  HANDLE ProcessHeap; // rax
  float width; // xmm1_4
  float v69; // xmm2_4
  float height; // xmm0_4
  __m128 v71; // xmm3
  int LayoutParameters; // eax
  int v73; // eax
  CRectanglesShape *v74; // rbx
  CRectanglesShape *(__fastcall *v75)(CRectanglesShape *, char, __int64); // rax
  __int128 v76; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v77; // [rsp+58h] [rbp-B0h]
  CRectanglesShape *v78; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v79; // [rsp+68h] [rbp-A0h] BYREF
  float v80; // [rsp+70h] [rbp-98h]
  _DWORD v81[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v82; // [rsp+80h] [rbp-88h]
  float v83; // [rsp+88h] [rbp-80h]
  float v84; // [rsp+8Ch] [rbp-7Ch]
  __int64 v85; // [rsp+90h] [rbp-78h]
  __int128 v86; // [rsp+98h] [rbp-70h]
  __int32 v87; // [rsp+A8h] [rbp-60h]
  __int32 v88; // [rsp+ACh] [rbp-5Ch]
  int v89; // [rsp+B0h] [rbp-58h]
  __int64 v90; // [rsp+B4h] [rbp-54h]
  struct D2D_MATRIX_3X2_F v91; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_RECT_F v92; // [rsp+E0h] [rbp-28h] BYREF
  struct D2D_MATRIX_3X2_F v93; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v94[5]; // [rsp+108h] [rbp+0h] BYREF
  struct D2D_RECT_F v95; // [rsp+130h] [rbp+28h] BYREF
  __int64 v96; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v97[5]; // [rsp+148h] [rbp+40h] BYREF
  __m128 v98; // [rsp+170h] [rbp+68h] BYREF
  __int64 v99; // [rsp+180h] [rbp+78h] BYREF

  if ( a2->width <= 0.0 || a2->height <= 0.0 || (v8 = (CVisualSurface *)*((_QWORD *)this + 16)) == 0LL )
  {
    v14 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x28Cu,
      0LL);
    return v14;
  }
  v9 = (CSwapchainRenderStrategy *)*((_QWORD *)this + 17);
  v79 = 0LL;
  v92 = 0LL;
  v78 = 0LL;
  memset(&v93, 0, sizeof(v93));
  v10 = *(__int64 (__fastcall **)(CVisualSurfaceRenderStrategy *__hidden, const struct CSurfaceBrush *, const struct D2D_SIZE_F *, struct D2D_SIZE_F *, struct D2D_RECT_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v9 + 72LL);
  if ( v10 == CVisualSurfaceRenderStrategy::GetLayoutParameters )
  {
    SourceSize = CVisualSurface::GetSourceSize(v8);
    dx_low = 0LL;
    dy_low = 0LL;
    v14 = 0;
    x = SourceSize->x;
    y = SourceSize->y;
    v17 = SourceSize->x + 0.0;
    v79.width = SourceSize->x;
    v79.height = y;
    *(_QWORD *)&v93.m[2][0] = 0LL;
    *(_QWORD *)&v92.left = 0LL;
    v92.right = v17;
    *(_OWORD *)&v93.m11 = _xmm;
    v92.bottom = y + 0.0;
  }
  else
  {
    if ( v10 == CSwapchainRenderStrategy::GetLayoutParameters )
      LayoutParameters = CSwapchainRenderStrategy::GetLayoutParameters(v9, this, a2, &v79, &v92, &v93);
    else
      LayoutParameters = v10(v9, this, a2, &v79, &v92, &v93);
    v14 = LayoutParameters;
    if ( LayoutParameters < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        LayoutParameters,
        0x29Du,
        0LL);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v78);
      return v14;
    }
    y = v79.height;
    x = v79.width;
    dy_low = (__m128)LODWORD(v93.dy);
    dx_low = (__m128)LODWORD(v93.dx);
  }
  v18 = *((_DWORD *)this + 30);
  if ( v18 != 1 )
  {
    width = 0.0;
    v69 = 0.0;
    if ( v18 )
    {
      if ( (unsigned int)(v18 - 2) > 1 )
      {
LABEL_57:
        width_low = (__m128)LODWORD(a2->width);
        width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - width) * *((float *)this + 28);
        v22 = (float)(a2->height - v69) * *((float *)this + 29);
        v71 = _mm_shuffle_ps(width_low, width_low, 225);
        v19 = width_low.m128_f32[0] + width;
        v71.m128_f32[0] = v22;
        v80 = v22;
        v24 = _mm_shuffle_ps(v71, v71, 198);
        v21 = v22 + v69;
        v23 = width_low.m128_f32[0];
        goto LABEL_8;
      }
      width = a2->width;
      height = a2->height;
      if ( x != a2->width || y != height )
      {
        v69 = width / (float)(x / y);
        if ( v69 >= height != (v18 == 3) )
        {
          v69 = a2->height;
          width = (float)(x / y) * height;
        }
        goto LABEL_57;
      }
    }
    v69 = y;
    width = x;
    goto LABEL_57;
  }
  v19 = a2->width;
  width_low.m128_i32[0] = 0;
  v21 = a2->height;
  v22 = 0.0;
  *(_QWORD *)&v91.m11 = 0LL;
  v23 = 0.0;
  v80 = 0.0;
  v24 = _mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 210);
LABEL_8:
  v24.m128_f32[0] = v19;
  v25 = (CComponentTransform2D *)*((_QWORD *)this + 18);
  v26 = _mm_shuffle_ps(v24, v24, 39);
  v35 = dx_low;
  v26.m128_f32[0] = v21;
  *(__m128 *)&v91.m11 = _mm_shuffle_ps(v26, v26, 57);
  v27 = (float)(_mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 170).m128_f32[0] - width_low.m128_f32[0]) / x;
  v26.m128_f32[0] = (float)(_mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 255).m128_f32[0] - v22) / y;
  v28 = (float)(v93.m11 * v27) + (float)(v93.m12 * 0.0);
  v29 = (float)(v93.m12 * v26.m128_f32[0]) + (float)(v93.m11 * 0.0);
  *(float *)&v76 = v28;
  *((float *)&v76 + 1) = v29;
  v30 = (float)(v93.m21 * v27) + (float)(v93.m22 * 0.0);
  v31 = dy_low.m128_f32[0] * 0.0;
  v32 = (float)(v93.m22 * v26.m128_f32[0]) + (float)(v93.m21 * 0.0);
  *((float *)&v76 + 2) = v30;
  v33 = (float)(dy_low.m128_f32[0] * v26.m128_f32[0]) + (float)(dx_low.m128_f32[0] * 0.0);
  v34 = v30;
  *((float *)&v76 + 3) = v32;
  dy_low.m128_f32[0] = v33 + v80;
  v35.m128_f32[0] = (float)((float)(v35.m128_f32[0] * v27) + v31) + v23;
  m11 = v28;
  v77 = __PAIR64__(dy_low.m128_u32[0], v35.m128_u32[0]);
  v37 = v35;
  if ( v25 )
  {
    v38 = *(void (__fastcall **)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v25 + 208LL);
    if ( v38 == CComponentTransform2D::GetRealization )
      CComponentTransform2D::GetRealization(v25, a2, &v91);
    else
      v38(v25, a2, &v91);
    v37 = v35;
    v37.m128_f32[0] = v35.m128_f32[0] * v91.m11;
    m11 = (float)(v91.m21 * v29) + (float)(v91.m11 * v28);
    v35.m128_f32[0] = v35.m128_f32[0] * v91.m12;
    *(float *)&v76 = m11;
    v29 = (float)(v91.m22 * v29) + (float)(v91.m12 * v28);
    v34 = (float)(v91.m21 * v32) + (float)(v91.m11 * v30);
    *((float *)&v76 + 1) = v29;
    *((float *)&v76 + 2) = v34;
    v32 = (float)(v91.m12 * v30) + (float)(v91.m22 * v32);
    v37.m128_f32[0] = v37.m128_f32[0] + (float)(dy_low.m128_f32[0] * v91.m21);
    *((float *)&v76 + 3) = v32;
    v39 = dy_low.m128_f32[0];
    dy_low = v35;
    v37.m128_f32[0] = v37.m128_f32[0] + v91.dx;
    LODWORD(v77) = v37.m128_i32[0];
    dy_low.m128_f32[0] = (float)(v35.m128_f32[0] + (float)(v39 * v91.m22)) + v91.dy;
    *((float *)&v77 + 1) = dy_low.m128_f32[0];
  }
  v40 = (CSurfaceBrush *)((char *)this + 152);
  if ( *((float *)this + 38) == 1.0
    && *((float *)this + 39) == 0.0
    && *((float *)this + 40) == 0.0
    && *((float *)this + 41) == 1.0
    && *((float *)this + 42) == 0.0
    && *((float *)this + 43) == 0.0 )
  {
    v42 = v76;
    v43.m128_u64[0] = _mm_unpacklo_ps(v37, dy_low).m128_u64[0];
  }
  else
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v91, (const struct D2D1::Matrix3x2F *)&v76, v40);
    v42 = *(_OWORD *)&v91.m11;
    v43 = (__m128)*(unsigned __int64 *)&v91.m[2][0];
    v77 = *(_QWORD *)&v91.m[2][0];
    v37.m128_i32[0] = LODWORD(v91.dx);
    LODWORD(v32) = _mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 255).m128_u32[0];
    dy_low.m128_i32[0] = _mm_shuffle_ps(v43, v43, 85).m128_u32[0];
    LODWORD(v34) = _mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 170).m128_u32[0];
    LODWORD(v29) = _mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 85).m128_u32[0];
    m11 = v91.m11;
  }
  if ( a4 )
  {
    v55 = a2->height;
    v56 = a2->width + 0.0;
    v97[0] = &CRectanglesShape::`vftable';
    v94[0] = &CRectanglesShape::`vftable';
    v90 = 0x28083F800000LL;
    v94[2] = &v95;
    v97[2] = &v98;
    v94[4] = &v96;
    v97[4] = &v99;
    v94[3] = &v96;
    *(_QWORD *)&v91.m11 = 0LL;
    v97[3] = &v99;
    v57 = _mm_shuffle_ps(*(__m128 *)&v91.m11, *(__m128 *)&v91.m11, 210);
    v57.m128_f32[0] = v56;
    *(_QWORD *)&v76 = &v78;
    v58 = _mm_shuffle_ps(v57, v57, 39);
    v58.m128_f32[0] = v55 + 0.0;
    v98 = _mm_shuffle_ps(v58, v58, 57);
    v97[1] = 0LL;
    v99 = 0LL;
    *(float *)v81 = m11;
    *(struct D2D_RECT_F *)&v91.m11 = v92;
    v94[1] = 0LL;
    v95 = v92;
    v96 = 0LL;
    *(float *)&v81[1] = v29;
    v83 = v34;
    v84 = v32;
    v87 = v37.m128_i32[0];
    v88 = dy_low.m128_i32[0];
    v82 = 0LL;
    v85 = 0LL;
    v86 = _xmm;
    v89 = 0;
    *((_QWORD *)&v76 + 1) = 0LL;
    LOBYTE(v77) = 1;
    v59 = CShape::TryOptimizedCombinePaths(
            (CShape *)v97,
            0LL,
            v94,
            (unsigned __int64)v81,
            1,
            (struct CShape **)&v76 + 1);
    v14 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x1C8u, 0LL);
    }
    else if ( !*((_QWORD *)&v76 + 1) )
    {
      v73 = CShape::D2DCombine(v97, v60, v94, v81, 1, (char *)&v76 + 8);
      v14 = v73;
      if ( v73 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v73, 0x1D3u, 0LL);
    }
    if ( (_BYTE)v77 )
    {
      v61 = *(CRectanglesShape **)v76;
      *(_QWORD *)v76 = *((_QWORD *)&v76 + 1);
      if ( v61 )
      {
        v62 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v61;
        if ( v62 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(v61);
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v61);
        }
        else
        {
          ((void (__fastcall *)(CRectanglesShape *, __int64))v62)(v61, 1LL);
        }
      }
    }
    if ( (v14 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v14,
        0x2D1u,
        0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v94);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v97);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v78);
    }
    else
    {
      v63 = *(__int64 (**)(void))(*(_QWORD *)v78 + 16LL);
      if ( (char *)v63 == (char *)CRectanglesShape::IsEmpty )
        IsEmpty = CRectanglesShape::IsEmpty(v78);
      else
        IsEmpty = v63();
      if ( IsEmpty )
      {
        v14 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2003304441,
          0x2D6u,
          0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v94);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v97);
        v74 = v78;
        if ( v78 )
        {
          v75 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v78;
          if ( v75 == CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(v78);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v74);
          }
          else
          {
            ((void (__fastcall *)(CRectanglesShape *, __int64))v75)(v78, 1LL);
          }
        }
      }
      else
      {
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v94);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v97);
        v65 = v92;
        v66 = v78;
        *(_OWORD *)a3 = v42;
        *(struct D2D_RECT_F *)((char *)a3 + 24) = v65;
        *((_QWORD *)a3 + 2) = v43.m128_u64[0];
        *a4 = v66;
      }
    }
  }
  else
  {
    v44 = v92;
    v45 = v78;
    *(_OWORD *)a3 = v42;
    *((_QWORD *)a3 + 2) = v43.m128_u64[0];
    *(struct D2D_RECT_F *)((char *)a3 + 24) = v44;
    if ( v45 )
    {
      v46 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))v45;
      if ( v46 == CRectanglesShape::`scalar deleting destructor' )
      {
        *(_QWORD *)v45 = &CRectanglesShape::`vftable';
        v47 = (__int64)(*((_QWORD *)v45 + 3) - *((_QWORD *)v45 + 2)) >> 4;
        if ( v47 )
          *((_QWORD *)v45 + 3) -= 16 * v47;
        v48 = (CCachedVisualImage *)*((_QWORD *)v45 + 7);
        if ( v48 )
        {
          v49 = *(void (**)(void))(*(_QWORD *)v48 + 16LL);
          if ( (char *)v49 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
              v48,
              (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
              (__int64)v40);
          else
            v49();
          *((_QWORD *)v45 + 7) = 0LL;
        }
        v50 = (__int64)(*((_QWORD *)v45 + 3) - *((_QWORD *)v45 + 2)) >> 4;
        if ( v50 )
          *((_QWORD *)v45 + 3) -= 16 * v50;
        v51 = (char *)*((_QWORD *)v45 + 2);
        *((_QWORD *)v45 + 2) = 0LL;
        if ( v51 == (char *)v45 + 40 )
          v51 = 0LL;
        if ( v51 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v51);
        }
        v52 = (CPathData *)*((_QWORD *)v45 + 1);
        if ( v52 )
        {
          *((_QWORD *)v45 + 1) = 0LL;
          v53 = *(void (**)(void))(*(_QWORD *)v52 + 16LL);
          if ( (char *)v53 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v52);
          else
            v53();
        }
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v45);
      }
      else
      {
        ((void (__fastcall *)(CRectanglesShape *, __int64))v46)(v45, 1LL);
      }
    }
  }
  return v14;
}
