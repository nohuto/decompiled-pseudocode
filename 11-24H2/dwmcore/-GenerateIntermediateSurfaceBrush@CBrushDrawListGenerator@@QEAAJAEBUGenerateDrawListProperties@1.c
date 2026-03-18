/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F0F0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800D6ED0 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x1800D70F0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180152900 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801CD2D0 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     memcpy_s_0 @ 0x1801D4B90 (memcpy_s_0.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801D7374 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3,
        double a4)
{
  __int64 v5; // rcx
  int v7; // edi
  unsigned int v9; // ebx
  float v10; // xmm10_4
  float v11; // xmm9_4
  rsize_t v12; // rdx
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  float *v17; // r9
  bool v18; // zf
  float v19; // xmm2_4
  float v20; // xmm4_4
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  float v23; // xmm8_4
  float v24; // xmm6_4
  __int64 v25; // rbx
  float v26; // xmm8_4
  float v27; // xmm6_4
  __int64 v28; // rax
  int v29; // eax
  CMILRefCountImpl *v30; // rbx
  int v31; // eax
  int DrawList; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *); // rax
  __int64 *Size; // rax
  struct D2D_MATRIX_3X2_F *v41; // r9
  __int64 v42; // rcx
  CSurfaceDrawListBrush *v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // edi
  int v46; // eax
  CDrawListCache *v47; // rdx
  __int64 v48; // xmm1_8
  __int64 v49; // rcx
  struct CVisual *CurrentVisual; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  int *v53; // rcx
  int *v54; // rdx
  int v55; // xmm1_4
  int v56; // xmm0_4
  int v57; // eax
  int v58; // eax
  CDrawListCache *v59[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v60[32]; // [rsp+40h] [rbp-C0h] BYREF
  float v61; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v62[2]; // [rsp+68h] [rbp-98h] BYREF
  CMILRefCountImpl *v63; // [rsp+70h] [rbp-90h] BYREF
  struct D2D_RECT_F v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  __m128 v66[4]; // [rsp+90h] [rbp-70h] BYREF
  char v67; // [rsp+D0h] [rbp-30h]
  __int16 v68; // [rsp+D1h] [rbp-2Fh]
  char v69; // [rsp+D3h] [rbp-2Dh]
  _OWORD v70[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v71; // [rsp+120h] [rbp+20h]
  struct D2D_RECT_F v72; // [rsp+130h] [rbp+30h] BYREF
  __int128 v73; // [rsp+140h] [rbp+40h] BYREF
  int v74; // [rsp+150h] [rbp+50h]
  int v75; // [rsp+154h] [rbp+54h]
  _BYTE v76[4496]; // [rsp+160h] [rbp+60h] BYREF
  __int128 Destination; // [rsp+12F0h] [rbp+11F0h] BYREF
  __int128 v78; // [rsp+1300h] [rbp+1200h] BYREF
  __int128 v79; // [rsp+1310h] [rbp+1210h]
  __int128 v80; // [rsp+1320h] [rbp+1220h]
  int v81; // [rsp+1330h] [rbp+1230h]

  v5 = *(_QWORD *)this;
  v7 = 0;
  v63 = 0LL;
  v71 = 0;
  v72 = 0LL;
  *(_OWORD *)&v60[16] = 0LL;
  CMatrixStack::Top((CMatrixStack *)(v5 + 288), (struct CMILMatrix *)v70);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*(_QWORD *)this + 32LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)this + 32LL),
    v62);
  v9 = *((_DWORD *)this + 10);
  v10 = (float)v62[0];
  v11 = (float)v62[1];
  *(_QWORD *)&v79 = 0LL;
  Destination = 0LL;
  v78 = 0LL;
  memcpy_s_0(&Destination, v12, (char *)this + 8, 8LL * v9);
  if ( *(_QWORD *)a2 )
    *((_QWORD *)&Destination + v9++) = *(_QWORD *)a2;
  if ( v9 )
  {
    v45 = *((_DWORD *)a2 + 4);
    *(_QWORD *)&v64.left = v59;
    v59[0] = 0LL;
    *(_QWORD *)&v64.right = 0LL;
    LOBYTE(v65) = 1;
    gsl::details::extent_type<-1>::extent_type<-1>(&v73, v9);
    if ( (_QWORD)v73 == -1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    *((_QWORD *)&v73 + 1) = &Destination;
    v7 = CBrushDrawListGenerator::ComputeBrushClamp((unsigned __int64 *)&v73, v45, (__int64)a2 + 20, &v64.right);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v64);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2C7u, 0LL);
    }
    else
    {
      v46 = (*(__int64 (__fastcall **)(CDrawListCache *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v59[0] + 48LL))(
              v59[0],
              &v72,
              0LL);
      v7 = v46;
      if ( v46 >= 0 )
      {
        std::unique_ptr<CShape>::~unique_ptr<CShape>(v59);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x2C9u, 0LL);
    }
    std::unique_ptr<CShape>::~unique_ptr<CShape>(v59);
    return (unsigned int)v7;
  }
LABEL_4:
  if ( *((_BYTE *)a2 + 93) )
  {
    *(struct D2D_RECT_F *)&v60[16] = v72;
    v81 = v71;
    Destination = v70[0];
    v78 = v70[1];
    v79 = v70[2];
    v80 = v70[3];
    if ( CMILMatrix::Invert((CMILMatrix *)&Destination, v13, v14) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(*(CDrawingContext **)this);
      v52 = *(_QWORD *)(v51 + 7944);
      if ( CurrentVisual == *(struct CVisual **)(v52 + 72) )
      {
        v53 = (int *)(v52 + 100);
        v54 = (int *)(v52 + 96);
      }
      else
      {
        v53 = (int *)((char *)CurrentVisual + 172);
        v54 = (int *)((char *)CurrentVisual + 168);
      }
      v55 = *v53;
      v56 = *v54;
      *(_QWORD *)&v73 = 0LL;
      v74 = v56;
      v75 = v55;
      *((_QWORD *)&v73 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
      CMILMatrix::Transform3DBoundsHelper<1>((__int64)&Destination, (float *)&v73, (float *)&v73);
      *(_OWORD *)&a4 = (unsigned int)v73;
      v10 = *((float *)&v73 + 2) - *(float *)&v73;
      v11 = *((float *)&v73 + 3) - *((float *)&v73 + 1);
      if ( *(float *)&v73 > v72.left )
        LODWORD(v72.left) = v73;
      if ( *((float *)&v73 + 1) > v72.top )
        v72.top = *((FLOAT *)&v73 + 1);
      if ( v72.right > *((float *)&v73 + 2) )
        v72.right = *((FLOAT *)&v73 + 2);
      if ( v72.bottom > *((float *)&v73 + 3) )
        v72.bottom = *((FLOAT *)&v73 + 3);
      if ( IsEmpty(&v72) )
      {
        v72.bottom = 0.0;
        v72.right = 0.0;
        v72.top = 0.0;
        v72.left = 0.0;
      }
    }
  }
  if ( *((_BYTE *)a2 + 92) )
  {
    CCpuClip::CCpuClip((CCpuClip *)&Destination);
    CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)&Destination);
    if ( CCpuClip::HasClip((CCpuClip *)&Destination) )
    {
      v59[0] = 0LL;
      v57 = CCpuClip::ResolveClip((CCpuClip *)&Destination, v59, 0LL);
      v7 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x2F7u, 0LL);
      }
      else
      {
        v73 = 0LL;
        v58 = (*(__int64 (__fastcall **)(CDrawListCache *, __int128 *, _QWORD))(*(_QWORD *)v59[0] + 48LL))(
                v59[0],
                &v73,
                0LL);
        v7 = v58;
        if ( v58 >= 0 )
        {
          if ( *(float *)&v73 > v72.left )
            LODWORD(v72.left) = v73;
          if ( *((float *)&v73 + 1) > v72.top )
            v72.top = *((FLOAT *)&v73 + 1);
          if ( v72.right > *((float *)&v73 + 2) )
            v72.right = *((FLOAT *)&v73 + 2);
          if ( v72.bottom > *((float *)&v73 + 3) )
            v72.bottom = *((FLOAT *)&v73 + 3);
          if ( IsEmpty(&v72) )
          {
            v72.bottom = 0.0;
            v72.right = 0.0;
            v72.top = 0.0;
            v72.left = 0.0;
          }
          goto LABEL_84;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x2FAu, 0LL);
      }
      CShapePtr::~CShapePtr((CRectanglesShape **)&v78);
      return (unsigned int)v7;
    }
LABEL_84:
    CShapePtr::~CShapePtr((CRectanglesShape **)&v78);
  }
  if ( v72.right <= v72.left || v72.bottom <= v72.top )
  {
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  v61 = 0.0;
  LODWORD(v59[0]) = 0;
  CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v70, &v61, (float *)v59, (__int64)&v60[16]);
  v18 = *((_DWORD *)this + 10) == 1;
  *(_DWORD *)v60 = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v19 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  LODWORD(v73) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v20 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v18 )
  {
    v49 = *((_QWORD *)this + 1);
    if ( v49 )
    {
      D2DMatrixHelper::GetScaleDimensions(
        (D2DMatrixHelper *)(v49 + 8),
        (const struct D2D_MATRIX_3X2_F *)v60,
        (float *)&v73,
        v17);
      v19 = *(float *)v60;
      v20 = *(float *)&v73;
    }
  }
  v21 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v22.m128_f32[0] = (float)(v61 / fmaxf(1.0, v19 * v61)) * (float)(v72.right - v72.left);
  v21.m128_f32[0] = (float)(int)v22.m128_f32[0];
  v23 = (float)((int)v22.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v21, v22)));
  *(float *)&v73 = v23;
  v22.m128_f32[0] = (float)(*(float *)v59 / fmaxf(1.0, v20 * *(float *)v59)) * (float)(v72.bottom - v72.top);
  *(float *)&a4 = (float)(int)v22.m128_f32[0];
  v24 = (float)((int)v22.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(*(__m128 *)&a4, v22)));
  *((float *)&v73 + 1) = v24;
  if ( v23 > v10 )
  {
    *(float *)&v73 = v10;
    v23 = v10;
  }
  if ( v24 > v11 )
  {
    v24 = v11;
    *((float *)&v73 + 1) = v11;
  }
  v25 = *(_QWORD *)this;
  v26 = v23 / (float)(v72.right - v72.left);
  v27 = v24 / (float)(v72.bottom - v72.top);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v63, v15, v16);
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 16LL))(*(_QWORD *)this + 24LL);
  *(_DWORD *)&v60[24] = 31;
  *(_QWORD *)&v60[16] = "DWM Drawlist Brush intermediate";
  v29 = CDrawingContext::PushOffScreenRenderingLayer(
          v25,
          (struct CResourceTag *)&v60[16],
          (unsigned int *)&v73,
          *(_DWORD *)(v28 + 8),
          2,
          &v63);
  v30 = v63;
  v7 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x346u, 0LL);
  }
  else
  {
    v66[1] = (__m128)_xmm;
    v69 = 0;
    v66[3] = *(__m128 *)&_xmm.r;
    v66[0] = (__m128)_xmm;
    v66[2] = (__m128)_xmm;
    v67 = -86;
    v68 = 41;
    CMILMatrix::Translate(
      (CMILMatrix *)v66,
      COERCE_FLOAT(LODWORD(v72.left) ^ _xmm),
      COERCE_FLOAT(LODWORD(v72.top) ^ _xmm));
    CMILMatrix::Scale((CMILMatrix *)v66, v26, v27, 1.0);
    v31 = CDrawingContext::PushTransformInternal(*(const void ***)this, 0LL, v66, 0, 1);
    v7 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x34Fu, 0LL);
    }
    else
    {
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CDrawingContext **)this,
                   a2,
                   (struct CDrawListEntryBuilder *)v76);
      v7 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x353u, 0LL);
      }
      else
      {
        v59[0] = 0LL;
        v33 = CDrawListCache::InternalCreate(1, v59);
        v7 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x356u, 0LL);
        }
        else
        {
          CDrawListCache::Update(v59[0], *(struct CDrawingContext **)this, (struct CDrawListEntryBuilder *)v76);
          v34 = CDrawListCache::Render((__int64)v59[0], *(CDrawingContext **)this, (CMILMatrix *)v66, 1.0);
          v7 = v34;
          if ( v34 >= 0 )
          {
            CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
            v35 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
            v7 = v35;
            if ( v35 >= 0 )
            {
              wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v59);
              CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
              v59[0] = 0LL;
              CDrawListBitmap::CDrawListBitmap(
                (CDrawListBitmap *)&Destination,
                (struct IBitmapRealization *)(((unsigned __int64)v30 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64)),
                v37);
              v38 = 0LL;
              if ( *((_QWORD *)&Destination + 1) )
              {
                v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)&Destination + 1) + 32LL);
                if ( (char *)v39 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
                {
                  Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                      *((_QWORD *)&Destination + 1),
                                      v62);
                }
                else if ( (char *)v39 == (char *)CDxHandleBitmapRealization::GetSize )
                {
                  Size = (__int64 *)CDxHandleBitmapRealization::GetSize(*((_QWORD *)&Destination + 1), v62);
                }
                else
                {
                  Size = (__int64 *)v39(*((_QWORD *)&Destination + 1), v62);
                }
                v38 = *Size;
              }
              *(_QWORD *)&v60[16] = 0LL;
              *((_QWORD *)&v73 + 1) = 0LL;
              LOBYTE(v74) = 1;
              *(_QWORD *)&v73 = v59;
              *(_WORD *)v60 = SamplerMode::k_ClampClampLinear;
              *(float *)&v60[24] = (float)(int)v38;
              *(float *)&v60[28] = (float)SHIDWORD(v38);
              v60[2] = 1;
              v7 = CSurfaceDrawListBrush::CreateWithContentRect(
                     (__int64)&Destination,
                     (__int16 *)v60,
                     (float *)&v60[16],
                     (__int64)&v73 + 8);
              if ( (_BYTE)v74 )
              {
                v42 = v73;
                v43 = *(CSurfaceDrawListBrush **)v73;
                *(_QWORD *)v73 = *((_QWORD *)&v73 + 1);
                if ( v43 )
                  std::default_delete<CSurfaceDrawListBrush>::operator()(v42, v43);
              }
              if ( v7 >= 0 )
              {
                v64 = 0LL;
                v65 = 0LL;
                D2DMatrixHelper::ComputeRectangleTransform((CDrawListCache *)((char *)v59[0] + 32), &v72, &v64, v41);
                v47 = v59[0];
                v48 = v65;
                *(struct D2D_RECT_F *)((char *)v59[0] + 8) = v64;
                *((_QWORD *)v47 + 3) = v48;
                *a3 = v59[0];
                v59[0] = 0LL;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x37Bu, 0LL);
              }
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Destination);
              if ( v59[0] )
                std::default_delete<CSurfaceDrawListBrush>::operator()(v44, v59[0]);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x365u, 0LL);
              wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v59);
              CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
            }
            goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x35Eu, 0LL);
        }
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)v59);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v76);
      CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
    }
    CDrawingContext::PopLayer(*(CDrawingContext **)this);
  }
LABEL_20:
  if ( v30 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v30 + 16LL))(v30);
  return (unsigned int)v7;
}
