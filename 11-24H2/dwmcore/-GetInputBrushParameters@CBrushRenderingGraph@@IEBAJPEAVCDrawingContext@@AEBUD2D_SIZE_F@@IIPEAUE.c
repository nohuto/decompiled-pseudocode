/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180018170 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18006C0F8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18006C118 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800A053C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800DA770 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180126E00 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180170C50 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x180170E38 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180172BF0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x180172FA4 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180172FD8 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180172FF8 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     FindBaseSimpleInputBrush @ 0x1801E3394 (FindBaseSimpleInputBrush.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801E3490 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801EEA10 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1801F893C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ??$?4VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@1@@Z @ 0x1802043BC (--$-4VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@-$unique_ptr@V.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802162FC (--1-$out_param_t@V-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@st.c)
 *     ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x18022B394 (-DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  struct _D3DCOLORVALUE *v7; // r12
  CDirtyRegionAnnotation *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r13
  CSurfaceBrush *v11; // rsi
  __int64 (__fastcall *v12)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  int IntermediateSurfaceBrush; // edi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 BaseSimpleInputBrush; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  bool (__fastcall *v21)(__int64, int); // rax
  bool v22; // al
  __int64 v23; // rax
  __int64 v24; // rsi
  bool (__fastcall *v25)(__int64, int); // rax
  bool v26; // al
  char v27; // al
  bool (__fastcall *v28)(__int64, int); // rax
  char v29; // al
  struct CEmptyRegionDrawListBrush *v30; // rcx
  bool (__fastcall *v31)(__int64, int); // rax
  __int128 v33; // xmm0
  int v34; // eax
  FLOAT height; // xmm1_4
  CObjectCache *ObjectCache; // rax
  _QWORD *v38; // rax
  struct CDrawingContext *v39; // rdx
  _QWORD *v40; // rsi
  int v41; // eax
  struct IBitmapResource *StockTransparentBitmap; // rax
  __int64 v43; // rdx
  int v44; // ebx
  D2D1::Matrix3x2F *v45; // rax
  const struct D2D1::Matrix3x2F *v46; // rcx
  __int64 v47; // xmm0_8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  CDrawListBrush **v51; // rcx
  __int64 v52; // rax
  FLOAT width; // xmm0_4
  FLOAT v54; // xmm1_4
  int v55; // ebx
  CDrawListBrush *v56; // rcx
  CDrawListBrush *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v60; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+50h] [rbp-B0h]
  CDrawListBrush *v63; // [rsp+58h] [rbp-A8h] BYREF
  const struct D2D_SIZE_F *v64; // [rsp+60h] [rbp-A0h] BYREF
  CDrawListBrush *v65[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v66[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+ECh] [rbp-14h]
  char v70; // [rsp+F0h] [rbp-10h]
  struct CDrawingContext *v71; // [rsp+100h] [rbp+0h] BYREF
  __int64 v72; // [rsp+108h] [rbp+8h] BYREF
  int v73; // [rsp+128h] [rbp+28h]
  struct D2D_SIZE_F v74; // [rsp+12Ch] [rbp+2Ch]
  int v75; // [rsp+134h] [rbp+34h]
  __int128 v76; // [rsp+138h] [rbp+38h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v64 = a3;
  v59 = 0LL;
  v62 = a4;
  v7 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  *((_QWORD *)a6 + 3) = 0LL;
  *((_QWORD *)a6 + 4) = 0LL;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v8 = (CDirtyRegionAnnotation *)&v72;
  v9 = 4LL;
  v10 = 3LL * *((unsigned int *)a6 + 12);
  v11 = *(CSurfaceBrush **)(*((_QWORD *)this + 2) + 24LL * *((unsigned int *)a6 + 12));
  v71 = a2;
  do
  {
    --v9;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v8);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v8);
    v8 = (CDirtyRegionAnnotation *)((char *)v8 + 8);
  }
  while ( v9 );
  v73 = 0;
  v75 = 0;
  *(_QWORD *)&v76 = 0x3F8000003F800000LL;
  v74 = *v64;
  *((_QWORD *)&v76 + 1) = 0x3F8000003F800000LL;
  v12 = *(__int64 (__fastcall **)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v11 + 336LL);
  if ( v12 == CSurfaceBrush::GetBrushParameters )
  {
    BrushParameters = CSurfaceBrush::GetBrushParameters(v11, (struct CBrushDrawListGenerator *)&v71);
  }
  else if ( (char *)v12 == (char *)CBitmapRenderStrategy::GetBrushParameters )
  {
    BrushParameters = CBitmapRenderStrategy::GetBrushParameters(v11, (const struct CSurfaceBrush *)&v71, 0LL);
  }
  else
  {
    BrushParameters = ((__int64 (__fastcall *)(CSurfaceBrush *, struct CDrawingContext **, _QWORD))v12)(v11, &v71, 0LL);
  }
  IntermediateSurfaceBrush = BrushParameters;
  if ( BrushParameters >= 0 )
  {
    v15 = v72;
    v72 = 0LL;
    v59 = v15;
    if ( !v15 )
      goto LABEL_16;
    if ( *((_BYTE *)this + 200) )
      ModuleFailFastForHRESULT(-2003304315, retaddr);
    v16 = *((_QWORD *)this + 2);
    v17 = *(_QWORD *)(v16 + 8 * v10 + 8);
    if ( v17 )
    {
      v45 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 24LL))(
                                  v17,
                                  *(unsigned int *)(v16 + 8 * v10 + 16));
      if ( !D2D1::Matrix3x2F::IsIdentity(v45) )
      {
        if ( v46 )
        {
          D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v60, (const struct D2D1::Matrix3x2F *)(v15 + 8), v46);
          v47 = v61;
          *(struct D2D_RECT_F *)v48 = v60;
          *(_QWORD *)(v48 + 16) = v47;
        }
      }
    }
    BaseSimpleInputBrush = FindBaseSimpleInputBrush(v15);
    v19 = BaseSimpleInputBrush;
    if ( BaseSimpleInputBrush )
    {
      v20 = BaseSimpleInputBrush;
      v21 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)BaseSimpleInputBrush + 8LL);
      if ( v21 == CSurfaceDrawListBrush::IsOfType )
        v22 = CSurfaceDrawListBrush::IsOfType(v20, 0);
      else
        v22 = v21(v20, 0);
      if ( v22 )
      {
        v65[0] = 0LL;
        *(_QWORD *)&v60.left = v65;
        *(_QWORD *)&v60.right = 0LL;
        *(_OWORD *)&v7->r = v76;
        LOBYTE(v61) = 1;
        IntermediateSurfaceBrush = CColorDrawListBrush::Create(v7, (struct CColorDrawListBrush **)&v60.right);
        wil::details::out_param_t<std::unique_ptr<CColorDrawListBrush>>::~out_param_t<std::unique_ptr<CColorDrawListBrush>>(&v60);
        if ( IntermediateSurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x123u, 0LL);
          v51 = v65;
          goto LABEL_91;
        }
        CDrawListBrush::CopyPrimitiveClamp(v65[0], (const struct CDrawListBrush *)v19);
        v56 = v65[0];
        *(_OWORD *)((char *)v65[0] + 8) = *(_OWORD *)(v19 + 8);
        *((_QWORD *)v56 + 3) = *(_QWORD *)(v19 + 24);
        if ( v15 == v19 )
        {
          v57 = v65[0];
          v65[0] = 0LL;
          std::unique_ptr<CDrawListBrush>::reset(&v59, v57);
          v15 = v59;
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, 3LL) )
        {
          v58 = *(_QWORD *)v15;
          v63 = v65[0];
          v65[0] = 0LL;
          (*(void (__fastcall **)(__int64, CDrawListBrush **))(v58 + 40))(v15, &v63);
          std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v63);
        }
        std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v65);
      }
LABEL_16:
      if ( !v15 )
      {
        v33 = v76;
        v34 = v75;
        *((_BYTE *)a6 + 45) = 1;
        *(_OWORD *)&v7->r = v33;
        *((_DWORD *)a6 + 10) = v34;
        goto LABEL_31;
      }
      matrix = *(D2D1_MATRIX_3X2_F *)(v15 + 8);
      if ( !D2D1IsMatrixInvertible(&matrix) )
      {
        IntermediateSurfaceBrush = -2003304441;
LABEL_48:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
            (unsigned int)IntermediateSurfaceBrush);
        *((_BYTE *)a6 + 45) = 1;
        IntermediateSurfaceBrush = 0;
        *((_DWORD *)a6 + 10) = 0;
        goto LABEL_35;
      }
      v23 = FindBaseSimpleInputBrush(v15);
      v24 = v23;
      if ( v23
        && ((v25 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v23 + 8LL), v25 != CSurfaceDrawListBrush::IsOfType)
          ? (v26 = v25(v24, 2))
          : (v26 = CSurfaceDrawListBrush::IsOfType(v24, 2)),
            v26) )
      {
        CDrawListBitmap::operator=(a6, v24 + 56);
        v27 = 0;
      }
      else
      {
        v27 = 1;
      }
      *((_BYTE *)a6 + 45) = v27;
      v28 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 8LL);
      if ( v28 == CSurfaceDrawListBrush::IsOfType )
      {
        v29 = CSurfaceDrawListBrush::IsOfType(v15, 5);
      }
      else if ( (char *)v28 == (char *)CNineGridDrawListBrush::IsOfType )
      {
        v29 = CNineGridDrawListBrush::IsOfType(v15, 5LL);
      }
      else
      {
        v29 = v28(v15, 5);
      }
      if ( !v29 )
      {
        v31 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 8LL);
        if ( !(v31 == CSurfaceDrawListBrush::IsOfType ? CSurfaceDrawListBrush::IsOfType(v15, 4) : v31(v15, 4)) )
          goto LABEL_29;
      }
      v60.left = 0.0;
      v60.top = 0.0;
      height = v64->height;
      v60.right = v64->width;
      v60.bottom = height;
      ObjectCache = CThreadContext::GetObjectCache(v30);
      v38 = CObjectCache::Alloc(ObjectCache, 0xA0uLL);
      v40 = v38;
      if ( v38 )
      {
        v38[1] = 1065353216LL;
        *((_DWORD *)v38 + 4) = 0;
        *(_QWORD *)((char *)v38 + 20) = 1065353216LL;
        *((_DWORD *)v38 + 7) = 0;
        *((_BYTE *)v38 + 52) = 0;
        *((_BYTE *)v38 + 64) = 0;
        *v38 = &CEmptyRegionDrawListBrush::`vftable';
        v38[9] = v15;
        v38[10] = 0LL;
        v38[11] = v38 + 12;
        *((_DWORD *)v38 + 24) = 0;
        v59 = 0LL;
        v41 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v38, v39, &v60);
        IntermediateSurfaceBrush = v41;
        if ( v41 >= 0 )
        {
          std::unique_ptr<CDrawListBrush>::reset(&v59, v40);
          v15 = v59;
LABEL_29:
          *((_DWORD *)a6 + 10) = v75;
          v59 = 0LL;
          *((_QWORD *)a6 + 7) = v15;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x1Du, 0LL);
        std::default_delete<CEmptyRegionDrawListBrush>::operator()(v49, v40);
        v44 = IntermediateSurfaceBrush;
      }
      else
      {
        IntermediateSurfaceBrush = -2147024882;
        v44 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x198u, 0LL);
      goto LABEL_36;
    }
    v50 = v62;
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      && !CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * v62), a5) )
    {
      goto LABEL_16;
    }
    v68 = 0;
    v67 = 0LL;
    v69 = 257;
    v70 = 0;
    v66[0] = 0LL;
    CBrushDrawListGenerator::AttachInput(&v71, 0LL, &v59);
    if ( CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v50), a5) )
    {
      LOWORD(v69) = 0;
    }
    else
    {
      *(_QWORD *)&v60.right = 0LL;
      *(_QWORD *)&v60.left = v66;
      LOBYTE(v61) = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v60.right);
      wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>(&v60);
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x143u, 0LL);
        goto LABEL_83;
      }
      v52 = v66[0];
      v65[0] = 0LL;
      width = v64->width;
      v54 = v64->height;
      *(_BYTE *)(v66[0] + 52LL) = 1;
      *(_DWORD *)(v52 + 48) = 0;
      v65[1] = (CDrawListBrush *)__PAIR64__(LODWORD(v54), LODWORD(width));
      *(_OWORD *)(v52 + 32) = *(_OWORD *)v65;
      *(_QWORD *)&v67 = v66[0];
    }
    v63 = 0LL;
    *(_QWORD *)&v60.left = &v63;
    *(_QWORD *)&v60.right = 0LL;
    LOBYTE(v61) = 1;
    IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                 (CBrushDrawListGenerator *)&v71,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v67,
                                 (struct CSurfaceDrawListBrush **)&v60.right);
    wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>(&v60);
    if ( IntermediateSurfaceBrush >= 0 )
    {
      std::unique_ptr<CDrawListBrush>::operator=<CSurfaceDrawListBrush,std::default_delete<CSurfaceDrawListBrush>,0>(
        &v59,
        &v63);
      v55 = v75 | 0x40;
      CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v71);
      v75 = v55;
      std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v63);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(v66);
      v15 = v59;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x14Cu, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v63);
LABEL_83:
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(v66);
    goto LABEL_36;
  }
LABEL_31:
  if ( IntermediateSurfaceBrush == -2147024846
    || IntermediateSurfaceBrush == -2147022876
    || IntermediateSurfaceBrush == -2003304441 )
  {
    goto LABEL_48;
  }
  if ( IntermediateSurfaceBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x1B3u, 0LL);
    goto LABEL_36;
  }
LABEL_35:
  if ( *((_BYTE *)a6 + 45) )
  {
    StockTransparentBitmap = CComposition::GetStockTransparentBitmap(g_pComposition);
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v60, StockTransparentBitmap);
    CDrawListBitmap::operator=(a6, &v60);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v60);
    if ( !*((_QWORD *)a6 + 7) )
    {
      v64 = 0LL;
      *(_QWORD *)&v60.left = &v64;
      *(_QWORD *)&v60.right = 0LL;
      LOBYTE(v61) = 1;
      IntermediateSurfaceBrush = CColorDrawListBrush::Create(
                                   (const struct _D3DCOLORVALUE *)((char *)a6 + 24),
                                   (struct CColorDrawListBrush **)&v60.right);
      if ( (_BYTE)v61 )
      {
        v43 = **(_QWORD **)&v60.left;
        **(_QWORD **)&v60.left = *(_QWORD *)&v60.right;
        if ( v43 )
          std::default_delete<CColorDrawListBrush>::operator()();
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        *((_QWORD *)a6 + 7) = v64;
        goto LABEL_36;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntermediateSurfaceBrush, 0x1C0u, 0LL);
      v51 = (CDrawListBrush **)&v64;
LABEL_91:
      std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v51);
    }
  }
LABEL_36:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v71);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v59);
  return (unsigned int)IntermediateSurfaceBrush;
}
