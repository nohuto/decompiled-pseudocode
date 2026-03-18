/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180044810 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B4F0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007BFF0 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CAA0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18016E810 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x18019137C (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D8180 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180245D90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802B03B0 (-GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV-.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802B0500 (-GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ @ 0x18001510C (-GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180016A00 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801B3DE0 (-GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEA.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801C22A0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int128 v41; // xmm13
  __m128 v42; // xmm14
  struct D2D_RECT_F v43; // xmm1
  CRectanglesShape *v44; // rbx
  void *(__fastcall *v45)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v46; // rax
  CResource *v47; // rcx
  void (*v48)(void); // rax
  __int64 v49; // rax
  char *v50; // r14
  CPathData *v51; // rcx
  void (*v52)(void); // rax
  float v54; // xmm2_4
  float v55; // xmm1_4
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  int v58; // eax
  __int64 v59; // rdx
  CRectanglesShape *v60; // rbx
  void *(__fastcall *v61)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 (*v62)(void); // rax
  char IsEmpty; // al
  struct D2D_RECT_F v64; // xmm1
  CRectanglesShape *v65; // rax
  HANDLE ProcessHeap; // rax
  float width; // xmm1_4
  float v68; // xmm2_4
  float height; // xmm0_4
  __m128 v70; // xmm3
  int LayoutParameters; // eax
  int v72; // eax
  CRectanglesShape *v73; // rbx
  void *(__fastcall *v74)(CRectanglesShape *__hidden, unsigned int); // rax
  __int128 v75; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v76; // [rsp+58h] [rbp-B0h]
  CRectanglesShape *v77; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v78; // [rsp+68h] [rbp-A0h] BYREF
  float v79; // [rsp+70h] [rbp-98h]
  _DWORD v80[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v81; // [rsp+80h] [rbp-88h]
  float v82; // [rsp+88h] [rbp-80h]
  float v83; // [rsp+8Ch] [rbp-7Ch]
  __int64 v84; // [rsp+90h] [rbp-78h]
  __int128 v85; // [rsp+98h] [rbp-70h]
  __int32 v86; // [rsp+A8h] [rbp-60h]
  __int32 v87; // [rsp+ACh] [rbp-5Ch]
  int v88; // [rsp+B0h] [rbp-58h]
  __int64 v89; // [rsp+B4h] [rbp-54h]
  struct D2D_MATRIX_3X2_F v90; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_RECT_F v91; // [rsp+E0h] [rbp-28h] BYREF
  struct D2D_MATRIX_3X2_F v92; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v93[5]; // [rsp+108h] [rbp+0h] BYREF
  struct D2D_RECT_F v94; // [rsp+130h] [rbp+28h] BYREF
  __int64 v95; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v96[5]; // [rsp+148h] [rbp+40h] BYREF
  __m128 v97; // [rsp+170h] [rbp+68h] BYREF
  __int64 v98; // [rsp+180h] [rbp+78h] BYREF

  if ( a2->width <= 0.0 || a2->height <= 0.0 || (v8 = (CVisualSurface *)*((_QWORD *)this + 16)) == 0LL )
  {
    v14 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304441,
      0x28Cu,
      0LL);
    return v14;
  }
  v9 = (CSwapchainRenderStrategy *)*((_QWORD *)this + 17);
  v78 = 0LL;
  v91 = 0LL;
  v77 = 0LL;
  memset(&v92, 0, sizeof(v92));
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
    v78.width = SourceSize->x;
    v78.height = y;
    *(_QWORD *)&v92.m[2][0] = 0LL;
    *(_QWORD *)&v91.left = 0LL;
    v91.right = v17;
    *(_OWORD *)&v92.m11 = _xmm;
    v91.bottom = y + 0.0;
  }
  else
  {
    if ( v10 == CSwapchainRenderStrategy::GetLayoutParameters )
      LayoutParameters = CSwapchainRenderStrategy::GetLayoutParameters(v9, this, a2, &v78, &v91, &v92);
    else
      LayoutParameters = v10(v9, this, a2, &v78, &v91, &v92);
    v14 = LayoutParameters;
    if ( LayoutParameters < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        LayoutParameters,
        0x29Du,
        0LL);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v77);
      return v14;
    }
    y = v78.height;
    x = v78.width;
    dy_low = (__m128)LODWORD(v92.dy);
    dx_low = (__m128)LODWORD(v92.dx);
  }
  v18 = *((_DWORD *)this + 30);
  if ( v18 != 1 )
  {
    width = 0.0;
    v68 = 0.0;
    if ( v18 )
    {
      if ( (unsigned int)(v18 - 2) > 1 )
      {
LABEL_57:
        width_low = (__m128)LODWORD(a2->width);
        width_low.m128_f32[0] = (float)(width_low.m128_f32[0] - width) * *((float *)this + 28);
        v22 = (float)(a2->height - v68) * *((float *)this + 29);
        v70 = _mm_shuffle_ps(width_low, width_low, 225);
        v19 = width_low.m128_f32[0] + width;
        v70.m128_f32[0] = v22;
        v79 = v22;
        v24 = _mm_shuffle_ps(v70, v70, 198);
        v21 = v22 + v68;
        v23 = width_low.m128_f32[0];
        goto LABEL_8;
      }
      width = a2->width;
      height = a2->height;
      if ( x != a2->width || y != height )
      {
        v68 = width / (float)(x / y);
        if ( v68 >= height != (v18 == 3) )
        {
          v68 = a2->height;
          width = (float)(x / y) * height;
        }
        goto LABEL_57;
      }
    }
    v68 = y;
    width = x;
    goto LABEL_57;
  }
  v19 = a2->width;
  width_low.m128_i32[0] = 0;
  v21 = a2->height;
  v22 = 0.0;
  *(_QWORD *)&v90.m11 = 0LL;
  v23 = 0.0;
  v79 = 0.0;
  v24 = _mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 210);
LABEL_8:
  v24.m128_f32[0] = v19;
  v25 = (CComponentTransform2D *)*((_QWORD *)this + 18);
  v26 = _mm_shuffle_ps(v24, v24, 39);
  v35 = dx_low;
  v26.m128_f32[0] = v21;
  *(__m128 *)&v90.m11 = _mm_shuffle_ps(v26, v26, 57);
  v27 = (float)(_mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 170).m128_f32[0] - width_low.m128_f32[0]) / x;
  v26.m128_f32[0] = (float)(_mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 255).m128_f32[0] - v22) / y;
  v28 = (float)(v92.m11 * v27) + (float)(v92.m12 * 0.0);
  v29 = (float)(v92.m12 * v26.m128_f32[0]) + (float)(v92.m11 * 0.0);
  *(float *)&v75 = v28;
  *((float *)&v75 + 1) = v29;
  v30 = (float)(v92.m21 * v27) + (float)(v92.m22 * 0.0);
  v31 = dy_low.m128_f32[0] * 0.0;
  v32 = (float)(v92.m22 * v26.m128_f32[0]) + (float)(v92.m21 * 0.0);
  *((float *)&v75 + 2) = v30;
  v33 = (float)(dy_low.m128_f32[0] * v26.m128_f32[0]) + (float)(dx_low.m128_f32[0] * 0.0);
  v34 = v30;
  *((float *)&v75 + 3) = v32;
  dy_low.m128_f32[0] = v33 + v79;
  v35.m128_f32[0] = (float)((float)(v35.m128_f32[0] * v27) + v31) + v23;
  m11 = v28;
  v76 = __PAIR64__(dy_low.m128_u32[0], v35.m128_u32[0]);
  v37 = v35;
  if ( v25 )
  {
    v38 = *(void (__fastcall **)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v25 + 208LL);
    if ( v38 == CComponentTransform2D::GetRealization )
      CComponentTransform2D::GetRealization(v25, a2, &v90);
    else
      v38(v25, a2, &v90);
    v37 = v35;
    v37.m128_f32[0] = v35.m128_f32[0] * v90.m11;
    m11 = (float)(v90.m21 * v29) + (float)(v90.m11 * v28);
    v35.m128_f32[0] = v35.m128_f32[0] * v90.m12;
    *(float *)&v75 = m11;
    v29 = (float)(v90.m22 * v29) + (float)(v90.m12 * v28);
    v34 = (float)(v90.m21 * v32) + (float)(v90.m11 * v30);
    *((float *)&v75 + 1) = v29;
    *((float *)&v75 + 2) = v34;
    v32 = (float)(v90.m12 * v30) + (float)(v90.m22 * v32);
    v37.m128_f32[0] = v37.m128_f32[0] + (float)(dy_low.m128_f32[0] * v90.m21);
    *((float *)&v75 + 3) = v32;
    v39 = dy_low.m128_f32[0];
    dy_low = v35;
    v37.m128_f32[0] = v37.m128_f32[0] + v90.dx;
    LODWORD(v76) = v37.m128_i32[0];
    dy_low.m128_f32[0] = (float)(v35.m128_f32[0] + (float)(v39 * v90.m22)) + v90.dy;
    *((float *)&v76 + 1) = dy_low.m128_f32[0];
  }
  if ( *((float *)this + 38) == 1.0
    && *((float *)this + 39) == 0.0
    && *((float *)this + 40) == 0.0
    && *((float *)this + 41) == 1.0
    && *((float *)this + 42) == 0.0
    && *((float *)this + 43) == 0.0 )
  {
    v41 = v75;
    v42.m128_u64[0] = _mm_unpacklo_ps(v37, dy_low).m128_u64[0];
  }
  else
  {
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v90,
      (const struct D2D1::Matrix3x2F *)&v75,
      (CSurfaceBrush *)((char *)this + 152));
    v41 = *(_OWORD *)&v90.m11;
    v42 = (__m128)*(unsigned __int64 *)&v90.m[2][0];
    v76 = *(_QWORD *)&v90.m[2][0];
    v37.m128_i32[0] = LODWORD(v90.dx);
    LODWORD(v32) = _mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 255).m128_u32[0];
    dy_low.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
    LODWORD(v34) = _mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 170).m128_u32[0];
    LODWORD(v29) = _mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 85).m128_u32[0];
    m11 = v90.m11;
  }
  if ( a4 )
  {
    v54 = a2->height;
    v55 = a2->width + 0.0;
    v96[0] = &CRectanglesShape::`vftable';
    v93[0] = &CRectanglesShape::`vftable';
    v89 = 0x28083F800000LL;
    v93[2] = &v94;
    v96[2] = &v97;
    v93[4] = &v95;
    v96[4] = &v98;
    v93[3] = &v95;
    *(_QWORD *)&v90.m11 = 0LL;
    v96[3] = &v98;
    v56 = _mm_shuffle_ps(*(__m128 *)&v90.m11, *(__m128 *)&v90.m11, 210);
    v56.m128_f32[0] = v55;
    *(_QWORD *)&v75 = &v77;
    v57 = _mm_shuffle_ps(v56, v56, 39);
    v57.m128_f32[0] = v54 + 0.0;
    v97 = _mm_shuffle_ps(v57, v57, 57);
    v96[1] = 0LL;
    v98 = 0LL;
    *(float *)v80 = m11;
    *(struct D2D_RECT_F *)&v90.m11 = v91;
    v93[1] = 0LL;
    v94 = v91;
    v95 = 0LL;
    *(float *)&v80[1] = v29;
    v82 = v34;
    v83 = v32;
    v86 = v37.m128_i32[0];
    v87 = dy_low.m128_i32[0];
    v81 = 0LL;
    v84 = 0LL;
    v85 = _xmm;
    v88 = 0;
    *((_QWORD *)&v75 + 1) = 0LL;
    LOBYTE(v76) = 1;
    v58 = CShape::TryOptimizedCombinePaths(v96, 0LL, v93, v80, 1, (char *)&v75 + 8);
    v14 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1C8u, 0LL);
    }
    else if ( !*((_QWORD *)&v75 + 1) )
    {
      v72 = CShape::D2DCombine(v96, v59, v93, v80, 1, (char *)&v75 + 8);
      v14 = v72;
      if ( v72 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x1D3u, 0LL);
    }
    if ( (_BYTE)v76 )
    {
      v60 = *(CRectanglesShape **)v75;
      *(_QWORD *)v75 = *((_QWORD *)&v75 + 1);
      if ( v60 )
      {
        v61 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v60;
        if ( v61 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(v60);
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v60);
        }
        else
        {
          v61(v60, 1u);
        }
      }
    }
    if ( (v14 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v14,
        0x2D1u,
        0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v93);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v96);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v77);
    }
    else
    {
      v62 = *(__int64 (**)(void))(*(_QWORD *)v77 + 16LL);
      if ( (char *)v62 == (char *)CRectanglesShape::IsEmpty )
        IsEmpty = CRectanglesShape::IsEmpty(v77);
      else
        IsEmpty = v62();
      if ( IsEmpty )
      {
        v14 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2003304441,
          0x2D6u,
          0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v93);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v96);
        v73 = v77;
        if ( v77 )
        {
          v74 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v77;
          if ( v74 == CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(v77);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v73);
          }
          else
          {
            v74(v77, 1u);
          }
        }
      }
      else
      {
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v93);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v96);
        v64 = v91;
        v65 = v77;
        *(_OWORD *)a3 = v41;
        *(struct D2D_RECT_F *)((char *)a3 + 24) = v64;
        *((_QWORD *)a3 + 2) = v42.m128_u64[0];
        *a4 = v65;
      }
    }
  }
  else
  {
    v43 = v91;
    v44 = v77;
    *(_OWORD *)a3 = v41;
    *((_QWORD *)a3 + 2) = v42.m128_u64[0];
    *(struct D2D_RECT_F *)((char *)a3 + 24) = v43;
    if ( v44 )
    {
      v45 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v44;
      if ( v45 == CRectanglesShape::`scalar deleting destructor' )
      {
        *(_QWORD *)v44 = &CRectanglesShape::`vftable';
        v46 = (__int64)(*((_QWORD *)v44 + 3) - *((_QWORD *)v44 + 2)) >> 4;
        if ( v46 )
          *((_QWORD *)v44 + 3) -= 16 * v46;
        v47 = (CResource *)*((_QWORD *)v44 + 7);
        if ( v47 )
        {
          v48 = *(void (**)(void))(*(_QWORD *)v47 + 16LL);
          if ( (char *)v48 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v47);
          else
            v48();
          *((_QWORD *)v44 + 7) = 0LL;
        }
        v49 = (__int64)(*((_QWORD *)v44 + 3) - *((_QWORD *)v44 + 2)) >> 4;
        if ( v49 )
          *((_QWORD *)v44 + 3) -= 16 * v49;
        v50 = (char *)*((_QWORD *)v44 + 2);
        *((_QWORD *)v44 + 2) = 0LL;
        if ( v50 == (char *)v44 + 40 )
          v50 = 0LL;
        if ( v50 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v50);
        }
        v51 = (CPathData *)*((_QWORD *)v44 + 1);
        if ( v51 )
        {
          *((_QWORD *)v44 + 1) = 0LL;
          v52 = *(void (**)(void))(*(_QWORD *)v51 + 16LL);
          if ( (char *)v52 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v51);
          else
            v52();
        }
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v44);
      }
      else
      {
        v45(v44, 1u);
      }
    }
  }
  return v14;
}
