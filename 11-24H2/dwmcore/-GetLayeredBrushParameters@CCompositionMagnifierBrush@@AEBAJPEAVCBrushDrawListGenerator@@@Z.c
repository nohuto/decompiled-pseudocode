/*
 * XREFs of ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0
 * Callers:
 *     ?GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295D90 (-GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800D6ED0 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F6564 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800FE9E0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18013CA80 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014F4C0 (--1-$out_param_t@V-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@@.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014F8C0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18017C4C0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_SIZE_F@@AEBV?$optional@M@std@@@Z @ 0x1802659BC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 *     ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8 (-PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10 (-GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetCursorVisuals@CComposition@@QEAA?BV?$span@$$CBUCursorVisualData@@$0?0@gsl@@XZ @ 0x180295DF4 (-GetCursorVisuals@CComposition@@QEAA-BV-$span@$$CBUCursorVisualData@@$0-0@gsl@@XZ.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::GetLayeredBrushParameters(
        CCompositionMagnifierBrush *this,
        struct CBrushDrawListGenerator *a2,
        double a3)
{
  __int64 v3; // rdi
  struct D2D_SIZE_F v5; // xmm0_8
  CDrawingContext *v6; // rcx
  CBrushDrawListGenerator *v7; // rbx
  struct CVisual *CurrentVisual; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r14d
  double v15; // xmm6_8
  FLOAT width; // xmm7_4
  int v17; // eax
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int BVIBrushParameters; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int DrawList; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // eax
  int v61; // eax
  int v62; // eax
  const struct CVisualTreePath *v63; // rdx
  const __m128i *BackdropVisualImage; // rax
  __m128 v65; // xmm1
  __m128 v66; // xmm4
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  int v72; // eax
  int v73; // eax
  int v74; // eax
  const struct CVisualTree *RootVisualTree; // r12
  CExcludeVisualReference *v76; // rbx
  CExcludeVisualReference *v77; // r14
  struct CVisual *VisualNoRef; // r13
  __int64 v79; // rax
  int WorldTransform; // eax
  int v81; // r15d
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r8
  int v88; // eax
  int v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // r8
  int v95; // eax
  int v96; // eax
  int v97; // eax
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rdx
  __int64 v105; // r8
  int v106; // eax
  int v107; // eax
  int v108; // eax
  CSurfaceDrawListBrush *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  int v112; // [rsp+20h] [rbp-E0h]
  int v113; // [rsp+20h] [rbp-E0h]
  struct D2D_SIZE_F v114; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v115; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v116; // [rsp+40h] [rbp-C0h] BYREF
  char v117; // [rsp+42h] [rbp-BEh]
  __int64 v118; // [rsp+50h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v119; // [rsp+58h] [rbp-A8h] BYREF
  gsl::details *v120; // [rsp+60h] [rbp-A0h] BYREF
  CExcludeVisualReference *v121; // [rsp+68h] [rbp-98h] BYREF
  char v122; // [rsp+70h] [rbp-90h]
  CMILRefCountImpl *v123; // [rsp+78h] [rbp-88h] BYREF
  int v124; // [rsp+80h] [rbp-80h] BYREF
  char v125; // [rsp+84h] [rbp-7Ch]
  __int128 v126; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v127[60]; // [rsp+A0h] [rbp-60h]
  int v128; // [rsp+DCh] [rbp-24h]
  __int128 v129; // [rsp+E0h] [rbp-20h]
  int v130; // [rsp+F0h] [rbp-10h]
  struct CBrushDrawListGenerator *v131; // [rsp+100h] [rbp+0h]
  CSurfaceDrawListBrush **v132; // [rsp+108h] [rbp+8h] BYREF
  __int64 v133; // [rsp+110h] [rbp+10h] BYREF
  char v134; // [rsp+118h] [rbp+18h]
  _BYTE v135[32]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v136[4]; // [rsp+140h] [rbp+40h] BYREF
  char v137; // [rsp+180h] [rbp+80h]
  __int16 v138; // [rsp+181h] [rbp+81h]
  char v139; // [rsp+183h] [rbp+83h]
  __int128 v140; // [rsp+190h] [rbp+90h] BYREF
  __int128 v141; // [rsp+1A0h] [rbp+A0h]
  __int128 v142; // [rsp+1B0h] [rbp+B0h]
  __int128 v143; // [rsp+1C0h] [rbp+C0h]
  int v144; // [rsp+1D0h] [rbp+D0h]
  int v145; // [rsp+1ECh] [rbp+ECh]
  char v146; // [rsp+1F0h] [rbp+F0h]
  _OWORD v147[4]; // [rsp+200h] [rbp+100h] BYREF
  char v148; // [rsp+240h] [rbp+140h]
  __int16 v149; // [rsp+241h] [rbp+141h]
  char v150; // [rsp+243h] [rbp+143h]
  __int128 v151; // [rsp+250h] [rbp+150h] BYREF
  __int64 v152; // [rsp+260h] [rbp+160h]
  CDrawingContext *v153[10]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v154[4496]; // [rsp+2D0h] [rbp+1D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+14C8h] [rbp+13C8h]

  v3 = *(_QWORD *)a2;
  v5 = *(struct D2D_SIZE_F *)((char *)a2 + 44);
  v6 = *(CDrawingContext **)a2;
  v131 = a2;
  v7 = a2;
  v123 = 0LL;
  v114 = v5;
  CurrentVisual = CDrawingContext::GetCurrentVisual(v6);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v123, v9, v10);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 24) + 16LL))(v3 + 24);
  LODWORD(v121) = 36;
  v120 = (gsl::details *)"DWM Magnifier Brush Resample Surface";
  v12 = CDrawingContext::PushOffScreenRenderingLayer(
          v3,
          (struct CResourceTag *)&v120,
          (unsigned int *)&v114,
          *(_DWORD *)(v11 + 8),
          3,
          &v123);
  v14 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_80;
  }
  *(_QWORD *)&v15 = LODWORD(v114.height);
  width = v114.width;
  if ( *((_BYTE *)this + 108) )
  {
    v124 = *((_DWORD *)this + 26);
    v125 = 1;
    v118 = 0x3F8000003F800000LL;
    v120 = 0LL;
    LODWORD(v121) = PixelAlign(COERCE_DOUBLE((unsigned __int64)LODWORD(v114.width)), 1, a3);
    HIDWORD(v121) = PixelAlign(v15, 1, a3);
    v17 = CDrawingContext::PushResampleLayer(
            (CDrawingContext *)v3,
            CurrentVisual,
            2,
            (int)&v120,
            (__int64)&v118,
            (__int64)&v124);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v17);
      v18 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v18,
          v112);
      goto LABEL_80;
    }
  }
  if ( *((_BYTE *)this + 109) )
  {
    v19 = *((_OWORD *)this + 7);
    *(_DWORD *)v127 = 0;
    *(_DWORD *)&v127[20] = 0;
    *(_DWORD *)&v127[40] = 0;
    v128 = 0;
    v126 = v19;
    v20 = *((_OWORD *)this + 8);
    v130 = 1065353216;
    *(_OWORD *)&v127[4] = v20;
    *(_OWORD *)&v127[24] = *((_OWORD *)this + 9);
    *(_OWORD *)&v127[44] = *((_OWORD *)this + 10);
    v129 = *((_OWORD *)this + 11);
    v21 = CDrawingContext::PushValueColorTransformLayer(
            (struct IDeviceTarget **)v3,
            v13,
            (const struct MilColorTransform *)&v126);
    v14 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x118,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v21);
      if ( *((_BYTE *)this + 108) )
      {
        v22 = CDrawingContext::PopLayer((CDrawingContext *)v3);
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x107,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
            (const char *)(unsigned int)v22,
            v112);
      }
      v23 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v23,
          v112);
      goto LABEL_80;
    }
  }
  v115 = 0LL;
  v120 = (gsl::details *)&v115;
  v121 = 0LL;
  v122 = 1;
  v14 = CBrush::CreateLayoutGeometryDrawListBrush(this, (struct CDrawingContext *)v3, &v114, &v121);
  wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>(
    (__int64)&v120,
    v24,
    v25);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v14);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v26, v27);
    if ( *((_BYTE *)this + 109) )
    {
      v28 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v28 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v28,
          v112);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v29 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v29,
          v112);
    }
    v30 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v30 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v30,
        v112);
    goto LABEL_80;
  }
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, (struct CDrawingContext *)v3, &v114);
  BVIBrushParameters = CCompositionMagnifierBrush::GetBVIBrushParameters(this, v153, a3);
  v14 = BVIBrushParameters;
  if ( BVIBrushParameters < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)BVIBrushParameters);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v32, v33);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v34, v35);
    if ( *((_BYTE *)this + 109) )
    {
      v36 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v36 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v36,
          v112);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v37 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v37 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v37,
          v112);
    }
    v38 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v38 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v38,
        v112);
    goto LABEL_80;
  }
  v140 = (unsigned __int64)v115;
  LODWORD(v141) = 0;
  v145 = 257;
  v146 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               v153,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v140,
               (struct CDrawListEntryBuilder *)v154);
  v14 = DrawList;
  if ( DrawList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)DrawList);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v40, v41);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v42, v43);
    if ( *((_BYTE *)this + 109) )
    {
      v44 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v44 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v44,
          v112);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v45 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v45 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v45,
          v112);
    }
    v46 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v46 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v46,
        v112);
    goto LABEL_80;
  }
  v114 = 0LL;
  v47 = CDrawListCache::InternalCreate(1, (struct CDrawListCache **)&v114);
  v14 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v47);
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v48, v49);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v50, v51);
    if ( *((_BYTE *)this + 109) )
    {
      v52 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v52 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v52,
          v112);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v53 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v53 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v53,
          v112);
    }
    v54 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v54 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v54,
        v112);
    goto LABEL_80;
  }
  CDrawListCache::Update(*(CDrawListCache **)&v114, (struct CDrawingContext *)v3, (struct CDrawListEntryBuilder *)v154);
  v150 = 0;
  v147[0] = _xmm;
  v147[1] = _xmm;
  v149 = 41;
  v147[2] = _xmm;
  v147[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v148 = -86;
  v113 = 5;
  v55 = CDrawListCache::Render(*(_QWORD *)&v114, (CDrawingContext *)v3, (CMILMatrix *)v147, 1.0);
  v14 = v55;
  if ( v55 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v55);
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v56, v57);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v58, v59);
    if ( *((_BYTE *)this + 109) )
    {
      v60 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v60 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v60,
          5);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v61 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v61 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v61,
          5);
    }
    v62 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v62 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v62,
        5);
    goto LABEL_80;
  }
  if ( !*((_BYTE *)this + 205) )
  {
LABEL_73:
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v91, v92);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v93, v94);
    if ( *((_BYTE *)this + 109) )
    {
      v95 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v95 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v95,
          v113);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v96 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v96 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v96,
          v113);
    }
    v97 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v97 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v97,
        v113);
    v119 = 0LL;
    CDrawListBitmap::CDrawListBitmap(
      (CDrawListBitmap *)v135,
      (struct IBitmapRealization *)(((unsigned __int64)v123 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v123 >> 64)),
      v98);
    v120 = 0LL;
    v132 = &v119;
    v121 = (CExcludeVisualReference *)__PAIR64__(LODWORD(v15), LODWORD(width));
    v135[16] = 1;
    v133 = 0LL;
    v134 = 1;
    v116 = 256;
    v117 = 1;
    v14 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v135, &v116, (float *)&v120, (__int64)&v133);
    wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v132);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v14);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v135);
      std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v119);
      goto LABEL_80;
    }
    v109 = v119;
    *((_QWORD *)v119 + 15) = 0LL;
    *((FLOAT *)v109 + 32) = width;
    *((_DWORD *)v109 + 33) = LODWORD(v15);
    CBrushDrawListGenerator::Reset(v7, v99, v100);
    v118 = (__int64)v119;
    v119 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v7, 0, &v118);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v118, v110, v111);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v135);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v119);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v123);
    return 0LL;
  }
  v63 = *(const struct CVisualTreePath **)(v3 + 7968);
  v139 = 0;
  v136[0] = _xmm;
  v136[1] = _xmm;
  v138 = 41;
  v136[2] = _xmm;
  v136[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v137 = -86;
  BackdropVisualImage = (const __m128i *)CVisual::GetBackdropVisualImage(CurrentVisual, v63);
  v65 = (__m128)_mm_loadu_si128(BackdropVisualImage + 6);
  v66 = (__m128)_mm_loadu_si128(BackdropVisualImage + 133);
  CMILMatrix::Translate(
    (CMILMatrix *)v136,
    COERCE_FLOAT(v65.m128_i32[0] ^ _xmm) - v66.m128_f32[0],
    COERCE_FLOAT(_mm_shuffle_ps(v65, v65, 85).m128_u32[0] ^ _xmm) - _mm_shuffle_ps(v66, v66, 85).m128_f32[0]);
  *(_QWORD *)&v151 = 6LL;
  DWORD2(v151) = 1;
  if ( !*((_BYTE *)this + 108) )
  {
    CMILMatrix::Scale((CMILMatrix *)v136, *((float *)this + 26), *((float *)this + 26), 0.0);
    DWORD1(v151) = 1;
  }
  v67 = CDrawingContext::PushRenderOptionsInternal(
          (CDrawingContext *)v3,
          0LL,
          (const struct MilRenderOptions *)&v151,
          1);
  v14 = v67;
  if ( v67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v67);
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v68, v69);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v70, v71);
    if ( *((_BYTE *)this + 109) )
    {
      v72 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v72 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v72,
          5);
    }
    if ( *((_BYTE *)this + 108) )
    {
      v73 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v73 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v73,
          5);
    }
    v74 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v74 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v74,
        5);
    goto LABEL_80;
  }
  CComposition::GetCursorVisuals(*((_QWORD *)this + 3), &v120);
  RootVisualTree = CVisualTree::GetRootVisualTree(*(CVisualTree **)(v3 + 7944));
  v76 = v121;
  v77 = (CExcludeVisualReference *)((char *)v121 + 32 * (_QWORD)v120);
  while ( 1 )
  {
    if ( v76 == v77 )
    {
      CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v3, 1);
      v7 = v131;
      goto LABEL_73;
    }
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v76);
    if ( !CVisualTree::_IsInTree((__int64)RootVisualTree, (__int64)VisualNoRef, 0) )
      goto LABEL_70;
    v79 = *((_QWORD *)v76 + 3);
    v144 = 0;
    v118 = v79;
    WorldTransform = CVisual::GetWorldTransform(VisualNoRef, RootVisualTree, 3, (__int64)&v140, 0LL, 0LL);
    v81 = WorldTransform;
    if ( WorldTransform < 0 )
      break;
    v126 = v140;
    *(_OWORD *)v127 = v141;
    *(_OWORD *)&v127[16] = v142;
    *(_OWORD *)&v127[32] = v143;
    *(_DWORD *)&v127[48] = v144;
    CMILMatrix::Multiply((CMILMatrix *)&v126, (const struct CMILMatrix *)v136);
    v82 = v118 + 80;
    if ( VisualNoRef != *(struct CVisual **)(v118 + 72) )
      v82 = (__int64)VisualNoRef + 152;
    v151 = *(_OWORD *)v82;
    v152 = *(_QWORD *)(v82 + 16);
    v83 = CDrawingContext::DrawSubVisualTree(v3, (struct CVisualTree *)v118, (unsigned int *)&v151, (CMILMatrix *)&v126);
    v81 = v83;
    if ( v83 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x178,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v83);
      CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v3, 1);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v84, v85);
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v86, v87);
      if ( *((_BYTE *)this + 109) )
      {
        v88 = CDrawingContext::PopLayer((CDrawingContext *)v3);
        if ( v88 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x11E,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
            (const char *)(unsigned int)v88,
            v113);
      }
      if ( *((_BYTE *)this + 108) )
      {
        v89 = CDrawingContext::PopLayer((CDrawingContext *)v3);
        if ( v89 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x107,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
            (const char *)(unsigned int)v89,
            v113);
      }
      v90 = CDrawingContext::PopLayer((CDrawingContext *)v3);
      if ( v90 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE7,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
          (const char *)(unsigned int)v90,
          v113);
      goto LABEL_86;
    }
LABEL_70:
    v76 = (CExcludeVisualReference *)((char *)v76 + 32);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x170,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
    (const char *)(unsigned int)WorldTransform);
  CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v3, 1);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v154);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v153, v102, v103);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v115, v104, v105);
  if ( *((_BYTE *)this + 109) )
  {
    v106 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v106 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v106,
        v113);
  }
  if ( *((_BYTE *)this + 108) )
  {
    v107 = CDrawingContext::PopLayer((CDrawingContext *)v3);
    if ( v107 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x107,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
        (const char *)(unsigned int)v107,
        v113);
  }
  v108 = CDrawingContext::PopLayer((CDrawingContext *)v3);
  if ( v108 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v108,
      v113);
LABEL_86:
  v14 = v81;
LABEL_80:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v123);
  return (unsigned int)v14;
}
