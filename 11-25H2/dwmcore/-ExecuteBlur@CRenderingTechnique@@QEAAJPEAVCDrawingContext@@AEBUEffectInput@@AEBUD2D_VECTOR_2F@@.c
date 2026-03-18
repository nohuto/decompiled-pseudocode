/*
 * XREFs of ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC48 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1B0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x18003FB58 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180071ACC (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18007D940 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x18007E40C (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x1800DDA08 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE760 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180144790 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x180147FC0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x180203260 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?reset@?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021CE70 (-reset@-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_StaleBackdropCacheFix@@@details@wil@@QEAA_NXZ @ 0x18024CCD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_StaleBackdropCacheFix@@@details@w.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x18024D3EC (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::ExecuteBlur(
        CRenderingTechnique *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        const struct D2D_VECTOR_2F *a4,
        const struct D2D_SIZE_F *a5,
        struct EffectInput *a6)
{
  const struct CBackdropVisualImage *BackdropVisualImage; // rsi
  CVisual *CurrentVisual; // rax
  __int64 v12; // rdx
  unsigned int *v13; // rdx
  struct CBlurRenderingGraph *v14; // rdi
  __m128 m22_low; // xmm8
  float v16; // xmm7_4
  float v17; // xmm6_4
  int v18; // eax
  unsigned int v19; // ebx
  struct D2D_MATRIX_3X2_F *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // xmm1_8
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // eax
  const struct RenderTargetInfo *v32; // rax
  DwmDbg::DbgString *v33; // rax
  const char *v34; // rdx
  char **v35; // rcx
  void **v36; // rbx
  void **v37; // rax
  void **v38; // rbx
  void **v39; // rax
  CCachedVisualImage *v40; // rcx
  CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  CCachedVisualImage::CCachedTarget *v42; // rbx
  void **v43; // rbx
  void **v44; // rax
  struct CBlurRenderingGraph *v45; // [rsp+30h] [rbp-D0h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v46; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v47; // [rsp+40h] [rbp-C0h] BYREF
  float v48; // [rsp+58h] [rbp-A8h] BYREF
  char *v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+68h] [rbp-98h]
  float v51; // [rsp+6Ch] [rbp-94h]
  float v52; // [rsp+70h] [rbp-90h]
  float v53; // [rsp+74h] [rbp-8Ch]
  int v54; // [rsp+78h] [rbp-88h] BYREF
  char *v55; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_RECT_F v56; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v57[36]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v58[36]; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v59[40]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v60; // [rsp+110h] [rbp+10h] BYREF
  __int64 v61; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  BackdropVisualImage = 0LL;
  v55 = (char *)this;
  if ( *((_BYTE *)a3 + 105) && !*((_BYTE *)a3 + 107) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(CurrentVisual, *(const struct CVisualTreePath **)(v12 + 7968));
  }
  v48 = 0.0;
  v13 = (unsigned int *)*((_QWORD *)this + 1);
  v46 = D2D1_GAUSSIANBLUR_OPTIMIZATION_SPEED;
  v54 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, float *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, int *))(**(_QWORD **)v13 + 48LL))(
    *(_QWORD *)v13,
    v13[4],
    &v48,
    &v46,
    &v54);
  *(_OWORD *)&v47.m11 = __PAIR64__(v48 * a4->y, v48 * a4->x);
  CBlurRenderingGraph::DeterminePreScale(a3, a6, v46, &v47, (struct D2D_VECTOR_2F *)v47.m[1]);
  v14 = (struct CBlurRenderingGraph *)*((_QWORD *)this + 2);
  m22_low = (__m128)LODWORD(v47.m22);
  v16 = v47.m22 * v47.m12;
  v17 = v47.m21 * v47.m11;
  v45 = v14;
  v47.m12 = v47.m22 * v47.m12;
  v47.m11 = v47.m21 * v47.m11;
  if ( !v14 )
    goto LABEL_19;
  (**(void (__fastcall ***)(struct CBlurRenderingGraph *))v14)(v14);
  if ( *((_DWORD *)v14 + 394) == v46
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v14 + 392) - v17) & _xmm) <= 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v14 + 393) - v16) & _xmm) <= 0.0000011920929 )
  {
    if ( BackdropVisualImage )
    {
      v32 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
      if ( CBlurredBackdropCache::LookupCachedBlur(
             (struct CBlurRenderingGraph *)((char *)v14 + 216),
             BackdropVisualImage,
             v32,
             a6) )
      {
        if ( !a5
          || (CDrawListBitmap::GetSize(a6), a5->width == (float)SLODWORD(v47.dx))
          && (CDrawListBitmap::GetSize(a6), a5->height == (float)SLODWORD(v47.dy)) )
        {
          v38 = (void **)DwmDbg::DbgString::DbgString(&v49, word_180336D88);
          v39 = (void **)DwmDbg::DbgString::DbgString(&v55, "BVI-UsingCachedBlur");
          CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v39, v38);
          v27 = *(_QWORD *)v14;
          goto LABEL_17;
        }
        v33 = DwmDbg::DbgString::DbgString((char **)v47.m[2], word_180336D88);
        v34 = "BVI-MismatchedCachedBlurSize";
        v35 = &v49;
      }
      else
      {
        v33 = DwmDbg::DbgString::DbgString(&v49, word_180336D88);
        v34 = "BVI-CouldNotFindCachedBlur";
        v35 = (char **)v47.m[2];
      }
      v36 = (void **)v33;
      v37 = (void **)DwmDbg::DbgString::DbgString(v35, v34);
      CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v37, v36);
    }
  }
  else
  {
    wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::reset(&v45);
    v14 = v45;
  }
  if ( !v14 )
  {
LABEL_19:
    v45 = 0LL;
    v29 = *((_QWORD *)a2 + 5);
    v49 = "DWM Blur Effect intermediate";
    v30 = *(_DWORD *)(v29 + 616);
    v50 = 28;
    v31 = CBlurRenderingGraph::Create(
            (const struct CResourceTag *)&v49,
            v30,
            (const struct D2D_VECTOR_2F *)&v47,
            v46,
            D2D1_BORDER_MODE_HARD,
            &v45);
    v19 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
        (const char *)(unsigned int)v31);
      if ( v45 )
        (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v45 + 8LL))(v45);
      return v19;
    }
    v14 = v45;
  }
  *((_QWORD *)v14 + 198) = _mm_unpacklo_ps((__m128)LODWORD(v47.m21), m22_low).m128_u64[0];
  if ( a5 )
    *((struct D2D_SIZE_F *)v14 + 195) = *a5;
  v18 = CExternalEffectGraph::Render(v14, a2, a3, a6);
  v19 = v18;
  if ( v18 >= 0 )
  {
    CDrawListBitmap::GetSize(a6);
    D2DMatrixHelper::ComputeRectangleTransform(
      (const struct EffectInput *)((char *)a3 + 84),
      (const struct D2D_RECT_F *)((char *)a6 + 84),
      &v56,
      v20);
    CDrawListBitmap::GetSize(a3);
    HIDWORD(v49) = 0;
    v50 = 0;
    *(float *)&v49 = (float)SLODWORD(v47.m21);
    v51 = (float)SLODWORD(v47.m22);
    v52 = 0.0 - (float)((float)SLODWORD(v47.m21) * 0.0);
    v53 = 0.0 - (float)((float)SLODWORD(v47.m22) * 0.0);
    v21 = Matrix3x3::operator*((char *)a3 + 48, v57, &v49);
    v22 = Matrix3x3::operator*(v21, v58, &v56);
    *(_QWORD *)((char *)&v60 + 4) = 0LL;
    *(float *)&v60 = 1.0 / (float)(int)v45;
    *((float *)&v60 + 3) = 1.0 / (float)SHIDWORD(v45);
    *(float *)&v61 = 0.0 - (float)(*(float *)&v60 * 0.0);
    *((float *)&v61 + 1) = 0.0 - (float)(*((float *)&v60 + 3) * 0.0);
    v23 = Matrix3x3::operator*(v22, v59, &v60);
    *((_OWORD *)a6 + 3) = *(_OWORD *)v23;
    *((_OWORD *)a6 + 4) = *(_OWORD *)(v23 + 16);
    *((_DWORD *)a6 + 20) = *(_DWORD *)(v23 + 32);
    if ( BackdropVisualImage )
    {
      v24 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
      v25 = *(_QWORD *)(v24 + 16);
      v60 = *(_OWORD *)v24;
      v61 = v25;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StaleBackdropCacheFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_StaleBackdropCacheFix>::GetImpl'::`2'::impl) )
      {
        if ( !CCommonRegistryData::EnableBackdropBlurCaching )
          goto LABEL_15;
        if ( !CBackdropVisualImage::IsValid(BackdropVisualImage) )
          goto LABEL_15;
        ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(v40, (const struct RenderTargetInfo *)&v60);
        v42 = ExistingCachedTarget;
        if ( !ExistingCachedTarget
          || !CCachedVisualImage::CCachedTarget::IsValid(ExistingCachedTarget)
          || *((_BYTE *)v42 + 56) )
        {
          goto LABEL_15;
        }
        CBlurredBackdropCache::UpdateCachedBlur(
          (struct CBlurRenderingGraph *)((char *)v14 + 216),
          BackdropVisualImage,
          v42,
          a6);
      }
      else
      {
        if ( !CCommonRegistryData::EnableBackdropBlurCaching
          || !CBackdropVisualImage::HasValidRenderingRealization(
                BackdropVisualImage,
                (const struct RenderTargetInfo *)&v60) )
        {
          goto LABEL_15;
        }
        CBlurredBackdropCache::UpdateCachedBlur(
          (struct CBackdropVisualImage ***)v14 + 27,
          BackdropVisualImage,
          (const struct RenderTargetInfo *)&v60,
          a6);
      }
      v43 = (void **)DwmDbg::DbgString::DbgString(&v49, word_180336D88);
      v44 = (void **)DwmDbg::DbgString::DbgString((char **)v47.m[2], "BVI-CachedNewBlur");
      CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v44, v43);
      ++dword_18040686C;
    }
LABEL_15:
    v26 = (__int64 *)*((_QWORD *)v55 + 2);
    *((_QWORD *)v55 + 2) = v14;
    if ( !v26 )
      return 0LL;
    v27 = *v26;
LABEL_17:
    (*(void (**)(void))(v27 + 8))();
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
    (const char *)(unsigned int)v18);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v45);
  return v19;
}
