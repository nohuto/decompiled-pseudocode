/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x18004E5B0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     memcpy_s @ 0x180075BE0 (memcpy_s.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x180082478 (--0CCpuClip@@QEAA@XZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180196A70 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801DAA00 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801E37D4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  float *v13; // r9
  bool v14; // zf
  float v15; // xmm2_4
  float v16; // xmm4_4
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  float v19; // xmm8_4
  float v20; // xmm6_4
  __int64 v21; // rbx
  float v22; // xmm8_4
  float v23; // xmm6_4
  __int64 v24; // rax
  int v25; // eax
  unsigned __int64 v26; // rbx
  int v27; // eax
  int DrawList; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 (__fastcall *v35)(_QWORD, _DWORD *); // rax
  __int64 *Size; // rax
  struct D2D_MATRIX_3X2_F *v37; // r9
  __int64 v38; // rdx
  unsigned int v39; // edi
  int v40; // eax
  CDrawListCache *v41; // rdx
  __int64 v42; // xmm1_8
  __int64 v43; // rcx
  struct CVisual *CurrentVisual; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  int *v47; // rcx
  int *v48; // rdx
  int v49; // xmm1_4
  int v50; // xmm0_4
  int v51; // eax
  int v52; // eax
  CDrawListCache *v53[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v54[32]; // [rsp+40h] [rbp-C0h] BYREF
  float v55; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v56[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  struct D2D_RECT_F v58; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h]
  _OWORD v60[4]; // [rsp+90h] [rbp-70h] BYREF
  char v61; // [rsp+D0h] [rbp-30h]
  __int16 v62; // [rsp+D1h] [rbp-2Fh]
  char v63; // [rsp+D3h] [rbp-2Dh]
  _OWORD v64[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v65; // [rsp+120h] [rbp+20h]
  struct D2D_RECT_F v66; // [rsp+130h] [rbp+30h] BYREF
  __int128 v67; // [rsp+140h] [rbp+40h] BYREF
  int v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+154h] [rbp+54h]
  _BYTE v70[4496]; // [rsp+160h] [rbp+60h] BYREF
  __int128 Destination; // [rsp+12F0h] [rbp+11F0h] BYREF
  __int128 v72; // [rsp+1300h] [rbp+1200h] BYREF
  __int128 v73; // [rsp+1310h] [rbp+1210h]
  __int128 v74; // [rsp+1320h] [rbp+1220h]
  int v75; // [rsp+1330h] [rbp+1230h]

  v5 = *(_QWORD *)this;
  v7 = 0;
  v57 = 0LL;
  v65 = 0;
  v66 = 0LL;
  *(_OWORD *)&v54[16] = 0LL;
  CMatrixStack::Top((CMatrixStack *)(v5 + 288), (struct CMILMatrix *)v64);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*(_QWORD *)this + 32LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)this + 32LL),
    v56);
  v9 = *((_DWORD *)this + 10);
  v10 = (float)v56[0];
  v11 = (float)v56[1];
  *(_QWORD *)&v73 = 0LL;
  Destination = 0LL;
  v72 = 0LL;
  memcpy_s(&Destination, v12, (char *)this + 8, 8LL * v9);
  if ( *(_QWORD *)a2 )
    *((_QWORD *)&Destination + v9++) = *(_QWORD *)a2;
  if ( v9 )
  {
    v39 = *((_DWORD *)a2 + 4);
    *(_QWORD *)&v58.left = v53;
    v53[0] = 0LL;
    *(_QWORD *)&v58.right = 0LL;
    LOBYTE(v59) = 1;
    gsl::details::extent_type<-1>::extent_type<-1>(&v67, v9);
    if ( (_QWORD)v67 == -1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    *((_QWORD *)&v67 + 1) = &Destination;
    v7 = CBrushDrawListGenerator::ComputeBrushClamp((unsigned __int64 *)&v67, v39, (__int64)a2 + 20, &v58.right);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v58);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C1u, 0LL);
    }
    else
    {
      v40 = (*(__int64 (__fastcall **)(CDrawListCache *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v53[0] + 48LL))(
              v53[0],
              &v66,
              0LL);
      v7 = v40;
      if ( v40 >= 0 )
      {
        std::unique_ptr<CShape>::~unique_ptr<CShape>(v53);
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x2C3u, 0LL);
    }
    std::unique_ptr<CShape>::~unique_ptr<CShape>(v53);
    return (unsigned int)v7;
  }
LABEL_4:
  if ( *((_BYTE *)a2 + 93) )
  {
    *(struct D2D_RECT_F *)&v54[16] = v66;
    v75 = v65;
    Destination = v64[0];
    v72 = v64[1];
    v73 = v64[2];
    v74 = v64[3];
    if ( CMILMatrix::Invert((CMILMatrix *)&Destination) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(*(CDrawingContext **)this);
      v46 = *(_QWORD *)(v45 + 7944);
      if ( CurrentVisual == *(struct CVisual **)(v46 + 72) )
      {
        v47 = (int *)(v46 + 100);
        v48 = (int *)(v46 + 96);
      }
      else
      {
        v47 = (int *)((char *)CurrentVisual + 172);
        v48 = (int *)((char *)CurrentVisual + 168);
      }
      v49 = *v47;
      v50 = *v48;
      *(_QWORD *)&v67 = 0LL;
      v68 = v50;
      v69 = v49;
      *((_QWORD *)&v67 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
      CMILMatrix::Transform3DBoundsHelper<1>(&Destination, &v67, &v67);
      *(_OWORD *)&a4 = (unsigned int)v67;
      v10 = *((float *)&v67 + 2) - *(float *)&v67;
      v11 = *((float *)&v67 + 3) - *((float *)&v67 + 1);
      if ( *(float *)&v67 > v66.left )
        LODWORD(v66.left) = v67;
      if ( *((float *)&v67 + 1) > v66.top )
        v66.top = *((FLOAT *)&v67 + 1);
      if ( v66.right > *((float *)&v67 + 2) )
        v66.right = *((FLOAT *)&v67 + 2);
      if ( v66.bottom > *((float *)&v67 + 3) )
        v66.bottom = *((FLOAT *)&v67 + 3);
      if ( IsEmpty(&v66) )
      {
        v66.bottom = 0.0;
        v66.right = 0.0;
        v66.top = 0.0;
        v66.left = 0.0;
      }
    }
  }
  if ( *((_BYTE *)a2 + 92) )
  {
    CCpuClip::CCpuClip((CCpuClip *)&Destination);
    CDrawingContext::GetCpuClip(*(CDrawingContext **)this, (struct CCpuClip *)&Destination);
    if ( CCpuClip::HasClip((CCpuClip *)&Destination) )
    {
      v53[0] = 0LL;
      v51 = CCpuClip::ResolveClip((CCpuClip *)&Destination, v53, 0LL);
      v7 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x2F1u, 0LL);
      }
      else
      {
        v67 = 0LL;
        v52 = (*(__int64 (__fastcall **)(CDrawListCache *, __int128 *, _QWORD))(*(_QWORD *)v53[0] + 48LL))(
                v53[0],
                &v67,
                0LL);
        v7 = v52;
        if ( v52 >= 0 )
        {
          if ( *(float *)&v67 > v66.left )
            LODWORD(v66.left) = v67;
          if ( *((float *)&v67 + 1) > v66.top )
            v66.top = *((FLOAT *)&v67 + 1);
          if ( v66.right > *((float *)&v67 + 2) )
            v66.right = *((FLOAT *)&v67 + 2);
          if ( v66.bottom > *((float *)&v67 + 3) )
            v66.bottom = *((FLOAT *)&v67 + 3);
          if ( IsEmpty(&v66) )
          {
            v66.bottom = 0.0;
            v66.right = 0.0;
            v66.top = 0.0;
            v66.left = 0.0;
          }
          goto LABEL_84;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x2F4u, 0LL);
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v72);
      return (unsigned int)v7;
    }
LABEL_84:
    CShapePtr::~CShapePtr((CShapePtr *)&v72);
  }
  if ( v66.right <= v66.left || v66.bottom <= v66.top )
  {
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  v55 = 0.0;
  LODWORD(v53[0]) = 0;
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v64, &v55, v53, &v54[16]);
  v14 = *((_DWORD *)this + 10) == 1;
  *(_DWORD *)v54 = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  LODWORD(v67) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v14 )
  {
    v43 = *((_QWORD *)this + 1);
    if ( v43 )
    {
      D2DMatrixHelper::GetScaleDimensions(
        (D2DMatrixHelper *)(v43 + 8),
        (const struct D2D_MATRIX_3X2_F *)v54,
        (float *)&v67,
        v13);
      v15 = *(float *)v54;
      v16 = *(float *)&v67;
    }
  }
  v17 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v18.m128_f32[0] = (float)(v55 / fmaxf(1.0, v15 * v55)) * (float)(v66.right - v66.left);
  v17.m128_f32[0] = (float)(int)v18.m128_f32[0];
  v19 = (float)((int)v18.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v17, v18)));
  *(float *)&v67 = v19;
  v18.m128_f32[0] = (float)(*(float *)v53 / fmaxf(1.0, v16 * *(float *)v53)) * (float)(v66.bottom - v66.top);
  *(float *)&a4 = (float)(int)v18.m128_f32[0];
  v20 = (float)((int)v18.m128_f32[0] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(*(__m128 *)&a4, v18)));
  *((float *)&v67 + 1) = v20;
  if ( v19 > v10 )
  {
    *(float *)&v67 = v10;
    v19 = v10;
  }
  if ( v20 > v11 )
  {
    v20 = v11;
    *((float *)&v67 + 1) = v11;
  }
  v21 = *(_QWORD *)this;
  v22 = v19 / (float)(v66.right - v66.left);
  v23 = v20 / (float)(v66.bottom - v66.top);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v57);
  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 24LL) + 16LL))(*(_QWORD *)this + 24LL);
  *(_DWORD *)&v54[24] = 31;
  *(_QWORD *)&v54[16] = "DWM Drawlist Brush intermediate";
  v25 = CDrawingContext::PushOffScreenRenderingLayer(v21, &v54[16], &v67, *(unsigned int *)(v24 + 8), 2, &v57);
  v26 = v57;
  v7 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x340u, 0LL);
  }
  else
  {
    v60[1] = _xmm;
    v63 = 0;
    v60[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    v60[0] = _xmm;
    v60[2] = _xmm;
    v61 = -86;
    v62 = 41;
    CMILMatrix::Translate(
      (CMILMatrix *)v60,
      COERCE_FLOAT(LODWORD(v66.left) ^ _xmm),
      COERCE_FLOAT(LODWORD(v66.top) ^ _xmm));
    CMILMatrix::Scale((CMILMatrix *)v60, v22, v23, 1.0);
    v27 = CDrawingContext::PushTransformInternal(*(CDrawingContext **)this, 0LL, (const struct CMILMatrix *)v60, 0, 1);
    v7 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x349u, 0LL);
    }
    else
    {
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v70);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CDrawingContext **)this,
                   a2,
                   (struct CDrawListEntryBuilder *)v70);
      v7 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x34Du, 0LL);
      }
      else
      {
        v53[0] = 0LL;
        v29 = CDrawListCache::InternalCreate(1, v53);
        v7 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x350u, 0LL);
        }
        else
        {
          CDrawListCache::Update(v53[0], *(struct CDrawingContext **)this, (struct CDrawListEntryBuilder *)v70);
          v30 = CDrawListCache::Render(v53[0], *(_QWORD *)this, v60);
          v7 = v30;
          if ( v30 >= 0 )
          {
            CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
            v31 = CDrawingContext::PopLayer(*(CDrawingContext **)this);
            v7 = v31;
            if ( v31 >= 0 )
            {
              wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v53);
              CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v70);
              v53[0] = 0LL;
              CDrawListBitmap::CDrawListBitmap(
                (CDrawListBitmap *)&Destination,
                (struct IBitmapRealization *)((v26 + 8) & ((unsigned __int128)-(__int128)v26 >> 64)));
              v34 = 0LL;
              if ( *((_QWORD *)&Destination + 1) )
              {
                v35 = *(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)&Destination + 1) + 32LL);
                if ( (char *)v35 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
                {
                  Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                                      *((_QWORD *)&Destination + 1),
                                      v56);
                }
                else if ( (char *)v35 == (char *)CDxHandleBitmapRealization::GetSize )
                {
                  Size = (__int64 *)CDxHandleBitmapRealization::GetSize(*((_QWORD *)&Destination + 1), v56, v33);
                }
                else
                {
                  Size = (__int64 *)v35(*((_QWORD *)&Destination + 1), v56);
                }
                v34 = *Size;
              }
              *(_QWORD *)&v54[16] = 0LL;
              *((_QWORD *)&v67 + 1) = 0LL;
              LOBYTE(v68) = 1;
              *(_QWORD *)&v67 = v53;
              *(_WORD *)v54 = SamplerMode::k_ClampClampLinear;
              *(float *)&v54[24] = (float)(int)v34;
              *(float *)&v54[28] = (float)SHIDWORD(v34);
              v54[2] = 1;
              v7 = CSurfaceDrawListBrush::CreateWithContentRect(&Destination, v54, &v54[16], (char *)&v67 + 8, 5);
              if ( (_BYTE)v68 )
              {
                v38 = *(_QWORD *)v67;
                *(_QWORD *)v67 = *((_QWORD *)&v67 + 1);
                if ( v38 )
                  std::default_delete<CSurfaceDrawListBrush>::operator()();
              }
              if ( v7 >= 0 )
              {
                v58 = 0LL;
                v59 = 0LL;
                D2DMatrixHelper::ComputeRectangleTransform((CDrawListCache *)((char *)v53[0] + 32), &v66, &v58, v37);
                v41 = v53[0];
                v42 = v59;
                *(struct D2D_RECT_F *)((char *)v53[0] + 8) = v58;
                *((_QWORD *)v41 + 3) = v42;
                *a3 = v53[0];
                v53[0] = 0LL;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x375u, 0LL);
              }
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Destination);
              if ( v53[0] )
                std::default_delete<CSurfaceDrawListBrush>::operator()();
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x35Fu, 0LL);
              wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v53);
              CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v70);
            }
            goto LABEL_20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x358u, 0LL);
        }
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v53);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v70);
      CDrawingContext::PopTransformInternal(*(CDrawingContext **)this, 1);
    }
    CDrawingContext::PopLayer(*(CDrawingContext **)this);
  }
LABEL_20:
  if ( v26 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)v7;
}
