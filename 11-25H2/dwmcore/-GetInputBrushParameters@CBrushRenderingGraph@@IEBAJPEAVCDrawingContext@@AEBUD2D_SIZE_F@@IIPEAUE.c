/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800441B8 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18004573C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180045900 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180110030 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180115438 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180125440 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     FindBaseSimpleInputBrush @ 0x1801269EC (FindBaseSimpleInputBrush.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180126B00 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180127920 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18017A6E0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18019D0A8 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FB160 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x180204460 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x18020D744 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??$?4VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@1@@Z @ 0x1802108E0 (--$-4VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@-$unique_ptr@V.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180210F08 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180210F28 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180210FA0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180221DBC (--1-$out_param_t@V-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@st.c)
 *     ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x180237194 (-DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  double v6; // xmm3_8
  struct _D3DCOLORVALUE *v8; // r12
  CDirtyRegionAnnotation *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  CSurfaceBrush *v12; // rsi
  __int64 (__fastcall *v13)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  int IntermediateSurfaceBrush; // edi
  CMultiPrimitiveDrawListBrush *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  CMultiPrimitiveDrawListBrush *BaseSimpleInputBrush; // rax
  CMultiPrimitiveDrawListBrush *v20; // rsi
  __int64 v21; // rcx
  bool (__fastcall *v22)(__int64, int); // rax
  bool v23; // al
  _QWORD *v24; // rax
  __int64 v25; // rsi
  bool (__fastcall *v26)(__int64, int); // rax
  bool v27; // al
  char v28; // al
  bool (__fastcall *v29)(__int64, int); // rax
  bool v30; // al
  struct CEmptyRegionDrawListBrush *v31; // rcx
  bool (__fastcall *v32)(__int64, int); // rax
  __int128 v34; // xmm0
  int v35; // eax
  FLOAT height; // xmm1_4
  CObjectCache *ObjectCache; // rax
  _QWORD *v39; // rax
  struct CDrawingContext *v40; // rdx
  CMultiPrimitiveDrawListBrush *v41; // rsi
  int v42; // eax
  struct IBitmapResource *StockTransparentBitmap; // rax
  __int64 v44; // rdx
  int v45; // ebx
  D2D1::Matrix3x2F *v46; // rax
  const struct D2D1::Matrix3x2F *v47; // rcx
  __int64 v48; // xmm0_8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdx
  CDrawListBrush **v53; // rcx
  _DWORD *v54; // rax
  FLOAT width; // xmm0_4
  FLOAT v56; // xmm1_4
  int v57; // ebx
  CDrawListBrush *v58; // rcx
  CMultiPrimitiveDrawListBrush *v59; // rdx
  __int64 v60; // rax
  CMultiPrimitiveDrawListBrush *v61; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v62; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  CMultiPrimitiveDrawListBrush *v65; // [rsp+58h] [rbp-A8h] BYREF
  const struct D2D_SIZE_F *v66; // [rsp+60h] [rbp-A0h] BYREF
  CDrawListBrush *v67[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v68[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h] BYREF
  int v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+ECh] [rbp-14h]
  char v72; // [rsp+F0h] [rbp-10h]
  struct CDrawingContext *v73; // [rsp+100h] [rbp+0h] BYREF
  CMultiPrimitiveDrawListBrush *v74; // [rsp+108h] [rbp+8h] BYREF
  int v75; // [rsp+128h] [rbp+28h]
  struct D2D_SIZE_F v76; // [rsp+12Ch] [rbp+2Ch]
  int v77; // [rsp+134h] [rbp+34h]
  __int128 v78; // [rsp+138h] [rbp+38h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v66 = a3;
  v61 = 0LL;
  v64 = a4;
  v8 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  *((_QWORD *)a6 + 3) = 0LL;
  *((_QWORD *)a6 + 4) = 0LL;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v9 = (CDirtyRegionAnnotation *)&v74;
  v10 = 4LL;
  v11 = 3LL * *((unsigned int *)a6 + 12);
  v12 = *(CSurfaceBrush **)(*((_QWORD *)this + 2) + 24LL * *((unsigned int *)a6 + 12));
  v73 = a2;
  do
  {
    --v10;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v9);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v9);
    v9 = (CDirtyRegionAnnotation *)((char *)v9 + 8);
  }
  while ( v10 );
  v75 = 0;
  v77 = 0;
  *(_QWORD *)&v78 = 0x3F8000003F800000LL;
  v76 = *v66;
  *((_QWORD *)&v78 + 1) = 0x3F8000003F800000LL;
  v13 = *(__int64 (__fastcall **)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *))(*(_QWORD *)v12 + 336LL);
  if ( (char *)v13 == (char *)CSurfaceBrush::GetBrushParameters )
  {
    BrushParameters = CSurfaceBrush::GetBrushParameters(v12, (struct CBrushDrawListGenerator *)&v73);
  }
  else if ( v13 == CBitmapRenderStrategy::GetBrushParameters )
  {
    BrushParameters = CBitmapRenderStrategy::GetBrushParameters(v12, (const struct CSurfaceBrush *)&v73, 0LL);
  }
  else
  {
    BrushParameters = v13(v12, (const struct CSurfaceBrush *)&v73, 0LL);
  }
  IntermediateSurfaceBrush = BrushParameters;
  if ( BrushParameters >= 0 )
  {
    v16 = v74;
    v74 = 0LL;
    v61 = v16;
    if ( !v16 )
      goto LABEL_16;
    if ( *((_BYTE *)this + 200) )
      ModuleFailFastForHRESULT(-2003304315, retaddr);
    v17 = *((_QWORD *)this + 2);
    v18 = *(_QWORD *)(v17 + 8 * v11 + 8);
    if ( v18 )
    {
      v46 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 24LL))(
                                  v18,
                                  *(unsigned int *)(v17 + 8 * v11 + 16));
      if ( !D2D1::Matrix3x2F::IsIdentity(v46) )
      {
        if ( v47 )
        {
          D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v62, (CMultiPrimitiveDrawListBrush *)((char *)v16 + 8), v47);
          v6 = *(double *)&v62.left;
          v48 = v63;
          *(struct D2D_RECT_F *)v49 = v62;
          *(_QWORD *)(v49 + 16) = v48;
        }
      }
    }
    BaseSimpleInputBrush = (CMultiPrimitiveDrawListBrush *)FindBaseSimpleInputBrush(v16);
    v20 = BaseSimpleInputBrush;
    if ( BaseSimpleInputBrush )
    {
      v21 = (__int64)BaseSimpleInputBrush;
      v22 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)BaseSimpleInputBrush + 8LL);
      if ( v22 == CSurfaceDrawListBrush::IsOfType )
        v23 = CSurfaceDrawListBrush::IsOfType(v21, 0);
      else
        v23 = v22(v21, 0);
      if ( v23 )
      {
        v67[0] = 0LL;
        *(_QWORD *)&v62.left = v67;
        *(_QWORD *)&v62.right = 0LL;
        *(_OWORD *)&v8->r = v78;
        LOBYTE(v63) = 1;
        IntermediateSurfaceBrush = CColorDrawListBrush::Create(v8, (struct CColorDrawListBrush **)&v62.right);
        wil::details::out_param_t<std::unique_ptr<CColorDrawListBrush>>::~out_param_t<std::unique_ptr<CColorDrawListBrush>>(&v62);
        if ( IntermediateSurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IntermediateSurfaceBrush, 0x123u, 0LL);
          v53 = v67;
          goto LABEL_91;
        }
        CDrawListBrush::CopyPrimitiveClamp(v67[0], v20);
        v58 = v67[0];
        *(_OWORD *)((char *)v67[0] + 8) = *(_OWORD *)((char *)v20 + 8);
        *((_QWORD *)v58 + 3) = *((_QWORD *)v20 + 3);
        if ( v16 == v20 )
        {
          v59 = v67[0];
          v67[0] = 0LL;
          std::unique_ptr<CDrawListBrush>::reset(&v61, v59);
          v16 = v61;
        }
        else if ( (*(unsigned __int8 (__fastcall **)(CMultiPrimitiveDrawListBrush *, __int64))(*(_QWORD *)v16 + 8LL))(
                    v16,
                    3LL) )
        {
          v60 = *(_QWORD *)v16;
          v65 = v67[0];
          v67[0] = 0LL;
          (*(void (__fastcall **)(CMultiPrimitiveDrawListBrush *, CMultiPrimitiveDrawListBrush **))(v60 + 40))(
            v16,
            &v65);
          std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v65);
        }
        std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v67);
      }
LABEL_16:
      if ( !v16 )
      {
        v34 = v78;
        v35 = v77;
        *((_BYTE *)a6 + 45) = 1;
        *(_OWORD *)&v8->r = v34;
        *((_DWORD *)a6 + 10) = v35;
        goto LABEL_31;
      }
      matrix = *(D2D1_MATRIX_3X2_F *)((char *)v16 + 8);
      if ( !D2D1IsMatrixInvertible(&matrix) )
      {
        IntermediateSurfaceBrush = -2003304441;
LABEL_48:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
            (unsigned int)IntermediateSurfaceBrush);
        *((_BYTE *)a6 + 45) = 1;
        IntermediateSurfaceBrush = 0;
        *((_DWORD *)a6 + 10) = 0;
        goto LABEL_35;
      }
      v24 = FindBaseSimpleInputBrush(v16);
      v25 = (__int64)v24;
      if ( v24
        && ((v26 = *(bool (__fastcall **)(__int64, int))(*v24 + 8LL), v26 != CSurfaceDrawListBrush::IsOfType)
          ? (v27 = v26(v25, 2))
          : (v27 = CSurfaceDrawListBrush::IsOfType(v25, 2)),
            v27) )
      {
        CDrawListBitmap::operator=((__int64)a6, v25 + 56);
        v28 = 0;
      }
      else
      {
        v28 = 1;
      }
      *((_BYTE *)a6 + 45) = v28;
      v29 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 8LL);
      if ( v29 == CSurfaceDrawListBrush::IsOfType )
      {
        v30 = CSurfaceDrawListBrush::IsOfType((__int64)v16, 5);
      }
      else if ( v29 == CNineGridDrawListBrush::IsOfType )
      {
        v30 = CNineGridDrawListBrush::IsOfType((__int64)v16, 5);
      }
      else
      {
        v30 = v29((__int64)v16, 5);
      }
      if ( !v30 )
      {
        v32 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 8LL);
        if ( !(v32 == CSurfaceDrawListBrush::IsOfType
             ? CSurfaceDrawListBrush::IsOfType((__int64)v16, 4)
             : v32((__int64)v16, 4)) )
          goto LABEL_29;
      }
      v62.left = 0.0;
      v62.top = 0.0;
      height = v66->height;
      v62.right = v66->width;
      v62.bottom = height;
      ObjectCache = CThreadContext::GetObjectCache(v31);
      v39 = CObjectCache::Alloc(ObjectCache, 0xA0uLL);
      v41 = (CMultiPrimitiveDrawListBrush *)v39;
      if ( v39 )
      {
        v39[1] = 1065353216LL;
        *((_DWORD *)v39 + 4) = 0;
        *(_QWORD *)((char *)v39 + 20) = 1065353216LL;
        *((_DWORD *)v39 + 7) = 0;
        *((_BYTE *)v39 + 52) = 0;
        *((_BYTE *)v39 + 64) = 0;
        *v39 = &CEmptyRegionDrawListBrush::`vftable';
        v39[9] = v16;
        v39[10] = 0LL;
        v39[11] = v39 + 12;
        *((_DWORD *)v39 + 24) = 0;
        v61 = 0LL;
        v42 = CEmptyRegionDrawListBrush::Initialize((CEmptyRegionDrawListBrush *)v39, v40, &v62);
        IntermediateSurfaceBrush = v42;
        if ( v42 >= 0 )
        {
          std::unique_ptr<CDrawListBrush>::reset(&v61, v41);
          v16 = v61;
LABEL_29:
          *((_DWORD *)a6 + 10) = v77;
          v61 = 0LL;
          *((_QWORD *)a6 + 7) = v16;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x1Du, 0LL);
        std::default_delete<CEmptyRegionDrawListBrush>::operator()(v50, v41);
        v45 = IntermediateSurfaceBrush;
      }
      else
      {
        IntermediateSurfaceBrush = -2147024882;
        v45 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Bu, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x198u, 0LL);
      goto LABEL_36;
    }
    v51 = v64;
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      && !CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * v64), a5) )
    {
      goto LABEL_16;
    }
    v70 = 0;
    v69 = 0LL;
    v71 = 257;
    v72 = 0;
    v68[0] = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v73, 0, (__int64 *)&v61);
    if ( CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v51), a5) )
    {
      LOWORD(v71) = 0;
    }
    else
    {
      *(_QWORD *)&v62.right = 0LL;
      *(_QWORD *)&v62.left = v68;
      LOBYTE(v63) = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(
                                   (struct CGeometryOnlyDrawListBrush **)&v62.right,
                                   v52);
      wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v62);
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IntermediateSurfaceBrush, 0x143u, 0LL);
        goto LABEL_83;
      }
      v54 = v68[0];
      v67[0] = 0LL;
      width = v66->width;
      v56 = v66->height;
      *((_BYTE *)v68[0] + 52) = 1;
      v54[12] = 0;
      v67[1] = (CDrawListBrush *)__PAIR64__(LODWORD(v56), LODWORD(width));
      *((_OWORD *)v54 + 2) = *(_OWORD *)v67;
      *(void **)&v69 = v68[0];
    }
    v65 = 0LL;
    *(_QWORD *)&v62.left = &v65;
    *(_QWORD *)&v62.right = 0LL;
    LOBYTE(v63) = 1;
    IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                 (CBrushDrawListGenerator *)&v73,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v69,
                                 (struct CSurfaceDrawListBrush **)&v62.right,
                                 v6);
    wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>(&v62);
    if ( IntermediateSurfaceBrush >= 0 )
    {
      std::unique_ptr<CDrawListBrush>::operator=<CSurfaceDrawListBrush,std::default_delete<CSurfaceDrawListBrush>,0>(
        &v61,
        &v65);
      v57 = v77 | 0x40;
      CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v73);
      v77 = v57;
      std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v65);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(v68);
      v16 = v61;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IntermediateSurfaceBrush, 0x14Cu, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v65);
LABEL_83:
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(v68);
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
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IntermediateSurfaceBrush, 0x1B3u, 0LL);
    goto LABEL_36;
  }
LABEL_35:
  if ( *((_BYTE *)a6 + 45) )
  {
    StockTransparentBitmap = CComposition::GetStockTransparentBitmap((CGlobalDrawingContext **)g_pComposition);
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v62, StockTransparentBitmap);
    CDrawListBitmap::operator=(a6, &v62);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v62);
    if ( !*((_QWORD *)a6 + 7) )
    {
      v66 = 0LL;
      *(_QWORD *)&v62.left = &v66;
      *(_QWORD *)&v62.right = 0LL;
      LOBYTE(v63) = 1;
      IntermediateSurfaceBrush = CColorDrawListBrush::Create(
                                   (const struct _D3DCOLORVALUE *)((char *)a6 + 24),
                                   (struct CColorDrawListBrush **)&v62.right);
      if ( (_BYTE)v63 )
      {
        v44 = **(_QWORD **)&v62.left;
        **(_QWORD **)&v62.left = *(_QWORD *)&v62.right;
        if ( v44 )
          std::default_delete<CColorDrawListBrush>::operator()();
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        *((_QWORD *)a6 + 7) = v66;
        goto LABEL_36;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IntermediateSurfaceBrush, 0x1C0u, 0LL);
      v53 = (CDrawListBrush **)&v66;
LABEL_91:
      std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(v53);
    }
  }
LABEL_36:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v73);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v61);
  return (unsigned int)IntermediateSurfaceBrush;
}
