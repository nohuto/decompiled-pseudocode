/*
 * XREFs of ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180047F34 (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180049FD4 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004AA90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x180188140 (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801F87B0 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1801F9D70 (-HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZ.c)
 *     ?reset@?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802116A0 (-reset@-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x180243F24 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x1802457C0 (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::ExecuteBlur(
        CRenderingTechnique *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        const struct D2D_VECTOR_2F *a4,
        const struct D2D_SIZE_F *a5,
        struct EffectInput *a6)
{
  unsigned int v6; // edi
  CDrawListBitmap *v7; // rbx
  const struct CBackdropVisualImage *BackdropVisualImage; // r14
  CVisual *CurrentVisual; // rax
  __int64 v13; // rdx
  unsigned int *v14; // rdx
  unsigned int v15; // xmm0_4
  __int64 v16; // rdx
  __m128 dy_low; // xmm6
  __int64 v18; // rsi
  const struct RenderTargetInfo *v19; // rax
  DwmDbg::DbgString *v20; // rax
  const char *v21; // rdx
  char **v22; // rcx
  void **v23; // rbx
  void **v24; // rax
  void **v25; // rbx
  void **v26; // rax
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // ebx
  CDrawListBitmap *v33; // rbx
  struct D2D_MATRIX_3X2_F *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // xmm1_8
  void **v40; // rbx
  void **v41; // rax
  __int64 v42; // rcx
  D2D1_GAUSSIANBLUR_OPTIMIZATION v44; // [rsp+30h] [rbp-D0h] BYREF
  CDrawListBitmap *v45; // [rsp+38h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v46; // [rsp+40h] [rbp-C0h] BYREF
  char *v47; // [rsp+58h] [rbp-A8h] BYREF
  float v48; // [rsp+60h] [rbp-A0h] BYREF
  char *v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+70h] [rbp-90h]
  float v51; // [rsp+74h] [rbp-8Ch]
  float v52; // [rsp+78h] [rbp-88h]
  float v53; // [rsp+7Ch] [rbp-84h]
  int v54; // [rsp+80h] [rbp-80h] BYREF
  char *v55; // [rsp+88h] [rbp-78h] BYREF
  struct D2D_RECT_F v56; // [rsp+90h] [rbp-70h] BYREF
  char v57[36]; // [rsp+A8h] [rbp-58h] BYREF
  char v58[36]; // [rsp+CCh] [rbp-34h] BYREF
  char v59[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v60; // [rsp+118h] [rbp+18h] BYREF
  __int64 v61; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v6 = 0;
  v7 = a3;
  v45 = a3;
  v55 = (char *)this;
  BackdropVisualImage = 0LL;
  if ( *((_BYTE *)a3 + 105) && !*((_BYTE *)a3 + 107) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(CurrentVisual, *(const struct CVisualTreePath **)(v13 + 7968));
  }
  v48 = 0.0;
  v14 = (unsigned int *)*((_QWORD *)this + 1);
  v44 = D2D1_GAUSSIANBLUR_OPTIMIZATION_SPEED;
  v54 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, float *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, int *))(**(_QWORD **)v14 + 48LL))(
    *(_QWORD *)v14,
    v14[4],
    &v48,
    &v44,
    &v54);
  *(float *)&v15 = v48 * a4->x;
  *(_QWORD *)&v46.m[2][0] = 0LL;
  *(_QWORD *)&v46.m11 = __PAIR64__(v48 * a4->y, v15);
  CBlurRenderingGraph::DeterminePreScale(v7, a6, v44, &v46, (struct D2D_VECTOR_2F *)v46.m[2]);
  v16 = *((_QWORD *)this + 2);
  dy_low = (__m128)LODWORD(v46.dy);
  v46.m11 = v46.m11 * v46.dx;
  v46.m12 = v46.m12 * v46.dy;
  wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
    v46.m[1],
    v16);
  v18 = *(_QWORD *)&v46.m[1][0];
  if ( !*(_QWORD *)&v46.m[1][0] )
    goto LABEL_17;
  if ( CBlurRenderingGraph::HasMatchingParameters(
         *(CBlurRenderingGraph **)&v46.m[1][0],
         (const struct D2D_VECTOR_2F *)&v46,
         v44) )
  {
    if ( BackdropVisualImage )
    {
      v19 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
      if ( CBlurredBackdropCache::LookupCachedBlur((CBlurredBackdropCache *)(v18 + 216), BackdropVisualImage, v19, a6) )
      {
        if ( !a5
          || (CDrawListBitmap::GetSize(a6), a5->width == (float)(int)v47)
          && (CDrawListBitmap::GetSize(a6), a5->height == (float)SHIDWORD(v47)) )
        {
          v23 = (void **)DwmDbg::DbgString::DbgString(&v49, word_18032AF78);
          v24 = (void **)DwmDbg::DbgString::DbgString(&v55, "BVI-UsingCachedBlur");
          CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v24, v23);
          goto LABEL_30;
        }
        v20 = DwmDbg::DbgString::DbgString(&v47, word_18032AF78);
        v21 = "BVI-MismatchedCachedBlurSize";
        v22 = &v49;
      }
      else
      {
        v20 = DwmDbg::DbgString::DbgString(&v49, word_18032AF78);
        v21 = "BVI-CouldNotFindCachedBlur";
        v22 = &v47;
      }
      v25 = (void **)v20;
      v26 = (void **)DwmDbg::DbgString::DbgString(v22, v21);
      CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v26, v25);
      v7 = v45;
    }
  }
  else
  {
    wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::reset(v46.m[1]);
    v18 = *(_QWORD *)&v46.m[1][0];
  }
  if ( !v18 )
  {
LABEL_17:
    wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::reset(v46.m[1]);
    v27 = *((_QWORD *)a2 + 5);
    v49 = "DWM Blur Effect intermediate";
    v28 = *(_DWORD *)(v27 + 616);
    v50 = 28;
    v29 = CBlurRenderingGraph::Create(
            (const struct CResourceTag *)&v49,
            v28,
            (const struct D2D_VECTOR_2F *)&v46,
            v44,
            D2D1_BORDER_MODE_HARD,
            (struct CBlurRenderingGraph **)v46.m[1]);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
        (const char *)(unsigned int)v29);
      v6 = v30;
      goto LABEL_30;
    }
    v18 = *(_QWORD *)&v46.m[1][0];
  }
  *(_QWORD *)(v18 + 1584) = _mm_unpacklo_ps((__m128)LODWORD(v46.dx), dy_low).m128_u64[0];
  if ( a5 )
    *(struct D2D_SIZE_F *)(v18 + 1560) = *a5;
  v31 = CExternalEffectGraph::Render((CExternalEffectGraph *)v18, a2, v7, a6);
  v32 = v31;
  if ( v31 >= 0 )
  {
    CDrawListBitmap::GetSize(a6);
    v33 = v45;
    D2DMatrixHelper::ComputeRectangleTransform(
      (CDrawListBitmap *)((char *)v45 + 84),
      (const struct D2D_RECT_F *)((char *)a6 + 84),
      &v56,
      v34);
    CDrawListBitmap::GetSize(v33);
    HIDWORD(v49) = 0;
    v50 = 0;
    *(float *)&v49 = (float)(int)v45;
    v51 = (float)SHIDWORD(v45);
    v52 = 0.0 - (float)((float)(int)v45 * 0.0);
    v53 = 0.0 - (float)((float)SHIDWORD(v45) * 0.0);
    v35 = Matrix3x3::operator*((char *)v33 + 48, v57, &v49);
    v36 = Matrix3x3::operator*(v35, v58, &v56);
    *(_QWORD *)((char *)&v60 + 4) = 0LL;
    *(float *)&v60 = 1.0 / (float)SLODWORD(v46.dx);
    *((float *)&v60 + 3) = 1.0 / (float)SLODWORD(v46.dy);
    *(float *)&v61 = 0.0 - (float)(*(float *)&v60 * 0.0);
    *((float *)&v61 + 1) = 0.0 - (float)(*((float *)&v60 + 3) * 0.0);
    v37 = Matrix3x3::operator*(v36, v59, &v60);
    *((_OWORD *)a6 + 3) = *(_OWORD *)v37;
    *((_OWORD *)a6 + 4) = *(_OWORD *)(v37 + 16);
    *((_DWORD *)a6 + 20) = *(_DWORD *)(v37 + 32);
    if ( BackdropVisualImage )
    {
      v38 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
      v45 = 0LL;
      v39 = *(_QWORD *)(v38 + 16);
      v60 = *(_OWORD *)v38;
      v61 = v39;
      if ( CCommonRegistryData::EnableBackdropBlurCaching )
      {
        if ( CBackdropVisualImage::GetBlurCacheRealizationKey(
               BackdropVisualImage,
               (const struct RenderTargetInfo *)&v60,
               (const void **)&v45) )
        {
          CBlurredBackdropCache::UpdateCachedBlur((CBlurredBackdropCache *)(v18 + 216), BackdropVisualImage, v45, a6);
          v40 = (void **)DwmDbg::DbgString::DbgString(&v49, word_18032AF78);
          v41 = (void **)DwmDbg::DbgString::DbgString(&v47, "BVI-CachedNewBlur");
          CBackdropVisualImage::LogEtwEvent((__int64)BackdropVisualImage, v41, v40);
          ++dword_1803FA80C;
        }
      }
    }
    *(_QWORD *)&v46.m[1][0] = 0LL;
    v42 = *((_QWORD *)v55 + 2);
    *((_QWORD *)v55 + 2) = v18;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)(unsigned int)v31);
    v6 = v32;
  }
LABEL_30:
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)v46.m[1]);
  return v6;
}
