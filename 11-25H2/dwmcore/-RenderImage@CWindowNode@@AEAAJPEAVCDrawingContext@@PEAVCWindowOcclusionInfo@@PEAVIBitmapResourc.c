/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180057A60 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073524 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800737D0 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x180073AA0 (-GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x180073AE4 (-ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180073D90 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800AC100 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800AC4A0 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180173740 (-IsInfinite@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024BB4C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024FD30 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 *     ?PopOverlayClip@CDrawingContext@@QEAAXXZ @ 0x180251B84 (-PopOverlayClip@CDrawingContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IBitmapResource *a4,
        const struct CShape *a5,
        bool a6,
        unsigned int a7)
{
  int v7; // eax
  unsigned int v10; // ebx
  int EffectiveBounds; // eax
  int v13; // edi
  int v14; // eax
  LONG v15; // r13d
  int v16; // r11d
  float left; // xmm0_4
  float top; // xmm3_4
  float right; // xmm2_4
  float bottom; // xmm1_4
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  char v22; // r13
  CRectanglesShape *v23; // rax
  __m128i v24; // xmm0
  __int32 v25; // rcx^4
  unsigned __int64 v26; // xmm0_8
  LONG v27; // r11d
  LONG v28; // r10d
  LONG v29; // r13d
  LONG v30; // r12d
  __int64 v31; // rcx
  unsigned __int64 v32; // xmm0_8
  LONG v33; // r8d
  int v34; // r9d
  LONG v35; // edx
  LONG v36; // ecx
  __int64 v37; // rax
  int v38; // edx
  LONG v39; // r8d
  LONG v40; // eax
  int v41; // r9d
  int v42; // ecx
  int v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  LONG v46; // eax
  bool v47; // r12
  struct IBitmapResource *v48; // rbx
  int v49; // eax
  CRectanglesShape *v50; // rcx
  void *(__fastcall *v51)(CRectanglesShape *__hidden, unsigned int); // r8
  int v53; // eax
  __int64 v54; // rdx
  struct tagRECT v55; // xmm1
  __int64 v56; // rax
  __int64 v57; // rax
  bool v58; // cc
  LONG v59; // r8d
  LONG v60; // ecx
  LONG v61; // edx
  struct CCompositionSurfaceBitmap *v62; // rax
  struct CCompositionSurfaceBitmap *v63; // rax
  struct IBitmapResource *v64; // r15
  __int64 i; // rax
  unsigned int v66; // ebx
  __int64 v67; // rax
  CRoundedRectangleShape *v68; // r12
  __int64 v69; // rdx
  int v70; // eax
  __int64 j; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rax
  int v77; // eax
  void *p_rcDst; // rcx
  __int64 v79; // rax
  int v80; // eax
  int v81; // eax
  __int64 v82; // rax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  char v86; // [rsp+30h] [rbp-D0h]
  char v87; // [rsp+31h] [rbp-CFh]
  char v88; // [rsp+32h] [rbp-CEh]
  LONG v89; // [rsp+38h] [rbp-C8h]
  LONG v90; // [rsp+38h] [rbp-C8h]
  __m128i v91; // [rsp+40h] [rbp-C0h] BYREF
  CRectanglesShape *v92; // [rsp+50h] [rbp-B0h] BYREF
  struct CShape *v93; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v94; // [rsp+60h] [rbp-A0h] BYREF
  int v95; // [rsp+70h] [rbp-90h]
  bool v96[16]; // [rsp+80h] [rbp-80h]
  __m128i v97; // [rsp+90h] [rbp-70h] BYREF
  int v98; // [rsp+A0h] [rbp-60h]
  LONG v99; // [rsp+A8h] [rbp-58h]
  struct IBitmapResource *v100; // [rsp+B0h] [rbp-50h]
  const struct CShape *v101; // [rsp+B8h] [rbp-48h]
  float v102[20]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+110h] [rbp+10h] BYREF
  RECT rcSrc2; // [rsp+120h] [rbp+20h] BYREF
  char v105; // [rsp+130h] [rbp+30h]
  struct D2D_RECT_F v106; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v107; // [rsp+150h] [rbp+50h] BYREF
  __int64 v108; // [rsp+158h] [rbp+58h]
  _BYTE *v109; // [rsp+160h] [rbp+60h]
  _BYTE *v110; // [rsp+168h] [rbp+68h]
  __int64 *v111; // [rsp+170h] [rbp+70h]
  _BYTE v112[16]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v113; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v114[64]; // [rsp+190h] [rbp+90h] BYREF

  v7 = *((_DWORD *)this + 191) & 1;
  v100 = a4;
  *(_DWORD *)v96 = v7;
  v101 = a5;
  v88 = 0;
  v86 = 0;
  v10 = 0;
  v97 = 0LL;
  LODWORD(v107) = 0;
  v102[16] = 0.0;
  v91 = 0LL;
  EffectiveBounds = CWindowNode::GetEffectiveBounds((__int64)this, (__int64 *)a5, v97.m128i_i32, 0LL);
  v13 = EffectiveBounds;
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x4BBu, 0LL);
    return (unsigned int)v13;
  }
  v14 = CWindowNode::ApplyTextureToLocalTransform(this);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4BEu, 0LL);
    return (unsigned int)v13;
  }
  v15 = v97.m128i_i32[0];
  if ( v97.m128i_i32[2] > v97.m128i_i32[0]
    && v97.m128i_i32[3] > v97.m128i_i32[1]
    && *(float *)&v91.m128i_i32[2] > *(float *)v91.m128i_i32
    && *(float *)&v91.m128i_i32[3] > *(float *)&v91.m128i_i32[1] )
  {
    v106 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v102, &v91, &v106);
    left = v106.left;
    if ( (float)v15 > v106.left )
    {
      v106.left = (float)v15;
      left = (float)v15;
    }
    top = v106.top;
    if ( (float)v16 > v106.top )
    {
      v106.top = (float)v16;
      top = (float)v16;
    }
    right = v106.right;
    if ( v106.right > (float)v97.m128i_i32[2] )
    {
      v106.right = (float)v97.m128i_i32[2];
      right = (float)v97.m128i_i32[2];
    }
    bottom = v106.bottom;
    if ( v106.bottom > (float)v97.m128i_i32[3] )
    {
      v106.bottom = (float)v97.m128i_i32[3];
      bottom = (float)v97.m128i_i32[3];
    }
    if ( right <= left || bottom <= top )
    {
      v106.bottom = 0.0;
      v106.right = 0.0;
      v106.top = 0.0;
      v106.left = 0.0;
    }
    if ( !(unsigned __int8)CDrawingContext::IsOccluded(a2, &v106, a7) )
    {
      CurrentFlip = CWindowNode::GetCurrentFlipExSurface(this);
      if ( a4 != (struct IBitmapResource *)(((unsigned __int64)CurrentFlip + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)CurrentFlip >> 64)) )
        goto LABEL_25;
      v91 = 0LL;
      v22 = CDrawingContext::DrawAsOverlay(a2, a4);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
      {
        if ( !v22 )
        {
LABEL_21:
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v102[0] - 1.0) & _xmm) >= 0.0000011920929
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v102[5] - 1.0) & _xmm) >= 0.0000011920929 )
          {
            v10 = 2;
            v107 = 0x100000002LL;
          }
          v15 = v97.m128i_i32[0];
LABEL_25:
          CRectanglesShape::CRectanglesShape((CRectanglesShape *)v114, &v106);
          v92 = 0LL;
          if ( a5 )
          {
            *(_QWORD *)&rcSrc2.right = 0LL;
            *(_QWORD *)&rcSrc2.left = &v92;
            v105 = 1;
            v53 = CShape::TryOptimizedCombinePaths(
                    (CShape *)v114,
                    0LL,
                    (char *)a5,
                    0LL,
                    1,
                    (struct CShape **)&rcSrc2.right);
            v13 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1C8u, 0LL);
            }
            else if ( !*(_QWORD *)&rcSrc2.right )
            {
              v75 = CShape::D2DCombine((CRectanglesShape *)v114, v54, a5, 0LL, 1, (CComplexShape **)&rcSrc2.right);
              v13 = v75;
              if ( v75 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x1D3u, 0LL);
            }
            wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&rcSrc2);
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x513u, 0LL);
              goto LABEL_182;
            }
            v23 = v92;
          }
          else
          {
            v23 = (CRectanglesShape *)v114;
          }
          v94 = _mm_load_si128(&v97);
          v91 = v94;
          v24 = *(__m128i *)((char *)this + 748);
          v93 = v23;
          v87 = 0;
          v25 = v24.m128i_i32[1];
          if ( !v24.m128i_i32[0] )
          {
            v26 = _mm_srli_si128(v24, 8).m128i_u64[0];
            if ( !(_DWORD)v26 && !v25 && !HIDWORD(v26) )
              goto LABEL_31;
          }
          v55 = (struct tagRECT)*((_OWORD *)this + 44);
          v56 = *(_QWORD *)((char *)this + 748);
          rcSrc2.left = 0;
          rcSrc2.top = 0;
          rcDst = v55;
          rcDst.right = v55.right - HIDWORD(v56);
          rcDst.top = *((_DWORD *)this + 189) + v55.top;
          rcDst.bottom = v55.bottom - HIDWORD(*(_QWORD *)((char *)this + 756));
          rcSrc2.right = *((_DWORD *)this + 180);
          v57 = HIDWORD(*((_QWORD *)this + 90));
          rcDst.left = *((_DWORD *)this + 187) + _mm_cvtsi128_si32((__m128i)v55);
          rcSrc2.bottom = v57;
          IntersectRect(&rcDst, &rcDst, &rcSrc2);
          if ( !EqualRect(&rcDst, &rcSrc2) )
          {
            v58 = rcDst.left <= v15;
            v29 = v94.m128i_i32[2];
            v30 = v94.m128i_i32[3];
            v59 = v94.m128i_i32[3];
            v28 = v94.m128i_i32[1];
            v60 = rcDst.right;
            v27 = v94.m128i_i32[0];
            if ( !v58 )
              v27 = rcDst.left;
            v61 = rcDst.bottom;
            if ( rcDst.top > v94.m128i_i32[1] )
              v28 = rcDst.top;
            v94.m128i_i32[0] = v27;
            if ( rcDst.right < v94.m128i_i32[2] )
              v29 = rcDst.right;
            v94.m128i_i32[1] = v28;
            if ( rcDst.right >= v94.m128i_i32[2] )
              v60 = v94.m128i_i32[2];
            v94.m128i_i32[2] = v29;
            if ( rcDst.bottom < v94.m128i_i32[3] )
              v30 = rcDst.bottom;
            v94.m128i_i32[3] = v30;
            if ( v60 <= v27 )
              goto LABEL_98;
            if ( rcDst.bottom >= v59 )
              v61 = v59;
            if ( v61 <= v28 )
            {
LABEL_98:
              v30 = 0;
              v28 = 0;
              v29 = 0;
              v94 = 0uLL;
              v27 = 0;
            }
          }
          else
          {
LABEL_31:
            v27 = v94.m128i_i32[0];
            v28 = v94.m128i_i32[1];
            v29 = v94.m128i_i32[2];
            v30 = v94.m128i_i32[3];
          }
          if ( a6
            && ((v31 = *((_QWORD *)this + 84), (_DWORD)v31)
             || (v32 = _mm_srli_si128(*((__m128i *)this + 42), 8).m128i_u64[0],
                 __PAIR64__(HIDWORD(v31), 0) != (unsigned int)v32)
             || HIDWORD(v32)) )
          {
            v37 = HIDWORD(*((_QWORD *)this + 84));
            rcSrc2 = (RECT)*((_OWORD *)this + 43);
            v38 = rcSrc2.right - v37;
            v39 = *((_DWORD *)this + 170) + rcSrc2.top;
            rcDst.left = rcSrc2.bottom - HIDWORD(*((_QWORD *)this + 85));
            v40 = rcDst.left;
            v41 = *((_DWORD *)this + 168) + _mm_cvtsi128_si32((__m128i)rcSrc2);
            v87 = 1;
            v42 = v41;
            if ( v38 > v41 )
              v42 = v38;
            v35 = v91.m128i_i32[1];
            if ( rcDst.left <= v39 )
              v40 = v39;
            rcDst.left = v40;
            v43 = v91.m128i_i32[0];
            if ( v41 > v97.m128i_i32[0] )
              v43 = v41;
            v95 = v43;
            if ( v39 > v91.m128i_i32[1] )
              v35 = v39;
            v33 = v91.m128i_i32[3];
            v34 = v91.m128i_i32[2];
            if ( v42 >= v91.m128i_i32[2] )
              v42 = v91.m128i_i32[2];
            else
              v34 = v42;
            v44 = rcDst.left;
            v89 = v34;
            if ( rcDst.left < v91.m128i_i32[3] )
              v33 = rcDst.left;
            rcDst.left = v33;
            if ( v42 <= v95 )
              goto LABEL_159;
            if ( v44 >= v91.m128i_i32[3] )
              v44 = v91.m128i_i32[3];
            if ( v44 <= v35 )
            {
LABEL_159:
              v33 = 0;
              v34 = 0;
              v35 = 0;
              rcDst.left = 0;
              v89 = 0;
              v36 = 0;
            }
            else
            {
              v36 = v95;
            }
          }
          else
          {
            v33 = v91.m128i_i32[3];
            v34 = v91.m128i_i32[2];
            v35 = v91.m128i_i32[1];
            v36 = v91.m128i_i32[0];
            rcDst.left = v91.m128i_i32[3];
            v89 = v91.m128i_i32[2];
          }
          v45 = v29;
          if ( v27 > v36 )
            v36 = v27;
          v95 = v36;
          if ( v28 > v35 )
            v35 = v28;
          v91.m128i_i32[0] = v36;
          v99 = v35;
          if ( v29 < v89 )
            v34 = v29;
          else
            v45 = v89;
          v91.m128i_i32[1] = v35;
          if ( v30 < rcDst.left )
            v33 = v30;
          v98 = v34;
          v90 = v33;
          v91.m128i_i64[1] = __PAIR64__(v33, v34);
          if ( v45 <= v36 )
            goto LABEL_160;
          v46 = v30;
          if ( v30 >= rcDst.left )
            v46 = rcDst.left;
          if ( v46 <= v35 )
          {
LABEL_160:
            v33 = 0;
            v35 = 0;
            v34 = 0;
            v90 = 0;
            v36 = 0;
            v95 = 0;
            v98 = 0;
            v99 = 0;
            v91 = 0uLL;
          }
          if ( !v87
            || v34 == v29 && v33 == v30 && v35 == v28 && v36 == v27
            || (v34 <= v36 || v33 <= v35) && (v29 <= v27 || v30 <= v28)
            || (v36 == 0x80000000 && v34 == 0x7FFFFFFF || v35 == 0x80000000 && v33 == 0x7FFFFFFF)
            && (unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsInfinite(&v94)
            || !v96[0] )
          {
            v47 = v96[0];
            if ( v10 )
            {
              v85 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v107, 1);
              v13 = v85;
              if ( v85 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0x523u, 0LL);
                goto LABEL_182;
              }
              v86 = 1;
            }
            v48 = v100;
            v49 = CDrawingContext::FillShapeWithBitmap(a2, v100, (const struct CMILMatrix *)v102, v93, v47, a7);
            v13 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x52Bu, 0LL);
              v50 = v92;
              if ( !v92 )
                goto LABEL_74;
              v51 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v92;
              if ( v51 != CRectanglesShape::`scalar deleting destructor' )
              {
LABEL_102:
                v51(v50, 1u);
                goto LABEL_74;
              }
LABEL_73:
              CRectanglesShape::`scalar deleting destructor'(v50, 1u);
              goto LABEL_74;
            }
            v62 = CWindowNode::GetCurrentFlipExSurface(this);
            if ( v48 == (struct IBitmapResource *)(((unsigned __int64)v62 + 72) & -(__int64)(v62 != 0LL)) )
            {
              v76 = PixelAlign(&rcSrc2, &v106);
              v77 = CWindowNode::RenderRevealBorder(this, a2, v76, v101);
              v13 = v77;
              if ( v77 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x530u, 0LL);
LABEL_144:
                std::unique_ptr<CShape>::~unique_ptr<CShape>(&v92);
LABEL_74:
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v114);
                if ( v86 )
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                goto LABEL_76;
              }
            }
            goto LABEL_100;
          }
          v63 = CWindowNode::GetCurrentFlipExSurface(this);
          v64 = v100;
          if ( v100 != (struct IBitmapResource *)(((unsigned __int64)v63 + 72) & -(__int64)(v63 != 0LL))
            && CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(a2) )
          {
            v10 |= 2u;
            v107 = v10 | 0xFF00000100000000uLL;
          }
          if ( !v10 )
          {
LABEL_116:
            if ( v29 <= v94.m128i_i32[0] || v30 <= v94.m128i_i32[1] )
            {
              v66 = a7;
            }
            else
            {
              for ( i = 0LL; i < 4; ++i )
                *(float *)((char *)&rcSrc2.left + i * 4) = (float)v94.m128i_i32[i];
              v66 = a7;
              if ( !(unsigned __int8)CDrawingContext::IsOccluded(a2, &rcSrc2, a7) )
              {
                *(_QWORD *)&rcDst.left = 0LL;
                v107 = (unsigned __int64)&CRectanglesShape::`vftable';
                v109 = v112;
                v110 = v112;
                v111 = &v113;
                v67 = 0LL;
                v108 = 0LL;
                v113 = 0LL;
                do
                {
                  *(float *)((char *)&rcSrc2.left + v67 * 4) = (float)v94.m128i_i32[v67];
                  ++v67;
                }
                while ( v67 < 4 );
                CRectanglesShape::SetSingleRect((CRectanglesShape *)&v107, (const struct D2D_RECT_F *)&rcSrc2);
                v68 = v93;
                *(_QWORD *)&rcSrc2.left = &rcDst;
                *(_QWORD *)&rcSrc2.right = 0LL;
                v105 = 1;
                v13 = CShape::Combine((CRectanglesShape *)&v107, v69, v93, 0LL, 1, (CComplexShape **)&rcSrc2.right);
                wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&rcSrc2);
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x551u, 0LL);
                }
                else
                {
                  v70 = CDrawingContext::FillShapeWithBitmap(
                          a2,
                          v64,
                          (const struct CMILMatrix *)v102,
                          *(const struct CShape **)&rcDst.left,
                          0,
                          a7);
                  v13 = v70;
                  if ( v70 >= 0 )
                  {
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v107);
                    std::unique_ptr<CShape>::~unique_ptr<CShape>(&rcDst);
LABEL_126:
                    if ( v98 > v95 && v90 > v99 )
                    {
                      for ( j = 0LL; j < 4; ++j )
                        *(float *)((char *)&rcSrc2.left + j * 4) = (float)v91.m128i_i32[j];
                      if ( !(unsigned __int8)CDrawingContext::IsOccluded(a2, &rcSrc2, v66) )
                      {
                        v93 = 0LL;
                        v107 = (unsigned __int64)&CRectanglesShape::`vftable';
                        v109 = v112;
                        v110 = v112;
                        v111 = &v113;
                        v72 = 0LL;
                        v108 = 0LL;
                        v113 = 0LL;
                        do
                        {
                          *(float *)((char *)&rcSrc2.left + v72 * 4) = (float)v91.m128i_i32[v72];
                          ++v72;
                        }
                        while ( v72 < 4 );
                        CRectanglesShape::SetSingleRect((CRectanglesShape *)&v107, (const struct D2D_RECT_F *)&rcSrc2);
                        *(_QWORD *)&rcSrc2.right = 0LL;
                        *(_QWORD *)&rcSrc2.left = &v93;
                        v105 = 1;
                        v13 = CShape::Combine(
                                (CRectanglesShape *)&v107,
                                v73,
                                v68,
                                0LL,
                                1,
                                (CComplexShape **)&rcSrc2.right);
                        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&rcSrc2);
                        if ( v13 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x566u, 0LL);
                        }
                        else
                        {
                          v74 = CDrawingContext::FillShapeWithBitmap(
                                  a2,
                                  v64,
                                  (const struct CMILMatrix *)v102,
                                  v93,
                                  v96[0],
                                  v66);
                          v13 = v74;
                          if ( v74 >= 0 )
                          {
                            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v107);
                            std::unique_ptr<CShape>::~unique_ptr<CShape>(&v93);
                            goto LABEL_100;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x56Du, 0LL);
                        }
                        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v107);
                        p_rcDst = &v93;
                        goto LABEL_143;
                      }
                    }
LABEL_100:
                    v50 = v92;
                    if ( !v92 )
                      goto LABEL_74;
                    v51 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v92;
                    if ( v51 != CRectanglesShape::`scalar deleting destructor' )
                      goto LABEL_102;
                    goto LABEL_73;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x559u, 0LL);
                }
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v107);
                p_rcDst = &rcDst;
LABEL_143:
                std::unique_ptr<CShape>::~unique_ptr<CShape>(p_rcDst);
                goto LABEL_144;
              }
            }
            v68 = v93;
            goto LABEL_126;
          }
          v84 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v107, 1);
          v13 = v84;
          if ( v84 >= 0 )
          {
            v86 = 1;
            goto LABEL_116;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x543u, 0LL);
LABEL_182:
          std::unique_ptr<CShape>::~unique_ptr<CShape>(&v92);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v114);
LABEL_76:
          if ( v88 )
            CDrawingContext::PopOverlayClip(a2);
          return (unsigned int)v13;
        }
        v79 = PixelAlign(&rcSrc2, &v106);
        v80 = CWindowNode::RenderRevealBorder(this, a2, v79, a5);
        v13 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x4D5u, 0LL);
          return (unsigned int)v13;
        }
        if ( v91.m128i_i32[2] > v91.m128i_i32[0] && v91.m128i_i32[3] > v91.m128i_i32[1] )
        {
          v81 = CDrawingContext::PushOverlayClip(a2);
          v13 = v81;
          if ( v81 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x4DCu, 0LL);
            return (unsigned int)v13;
          }
          v88 = 1;
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v22 )
          goto LABEL_21;
        v82 = PixelAlign(&rcSrc2, &v106);
        v83 = CWindowNode::RenderRevealBorder(this, a2, v82, a5);
        v13 = v83;
        if ( v83 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x500u, 0LL);
      }
    }
  }
  return (unsigned int)v13;
}
