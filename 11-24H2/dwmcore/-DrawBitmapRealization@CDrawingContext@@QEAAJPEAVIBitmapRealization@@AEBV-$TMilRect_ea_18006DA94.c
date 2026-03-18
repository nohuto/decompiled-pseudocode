/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18006DA94
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18006D538 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800FDFD4 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180209AF0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180210574 (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18007A680 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800BA8F0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800BB170 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800CD040 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800F6F20 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1800FB0A0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1801DBABC (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        struct D2D_RECT_F *a3,
        const struct D2D1::Matrix3x2F *a4,
        int a5,
        int a6,
        int a7)
{
  int v11; // eax
  float v12; // xmm0_4
  int UnOccludedWorldShape; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  const struct CMILMatrix *TopByReference; // rax
  int v18; // xmm1_4
  unsigned int v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // eax
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-A1h] BYREF
  struct CShape *v24; // [rsp+38h] [rbp-99h] BYREF
  int v25; // [rsp+40h] [rbp-91h]
  int v26; // [rsp+44h] [rbp-8Dh]
  float v27; // [rsp+48h] [rbp-89h] BYREF
  struct CShape *v28; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v30[32]; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v31[64]; // [rsp+90h] [rbp-41h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v31, a3);
  v11 = *((_DWORD *)this + 792);
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v27 = v12 * *(float *)&a7;
  CWatermarkStack<float,64,2,10>::Push((char *)this + 3160, &v27);
  v28 = 0LL;
  v24 = 0LL;
  v23 = (__int64)&v28;
  LOBYTE(v25) = 1;
  UnOccludedWorldShape = CDrawingContext::GetUnOccludedWorldShape(this, (const struct CShape *)v31, a6, &v24);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v23);
  if ( UnOccludedWorldShape >= 0 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
    v18 = *((_DWORD *)TopByReference + 1);
    LODWORD(v23) = *(_DWORD *)TopByReference;
    v19 = *((_DWORD *)TopByReference + 4);
    HIDWORD(v23) = v18;
    v24 = (struct CShape *)__PAIR64__(*((_DWORD *)TopByReference + 5), v19);
    v20 = *((_DWORD *)TopByReference + 13);
    v25 = *((_DWORD *)TopByReference + 12);
    v26 = v20;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v29, (const struct MILMatrix3x2 *)&v23);
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v30, (const struct D2D1::Matrix3x2F *)v29, a4);
    v21 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v15 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x942u, 0LL);
    }
    else
    {
      v22 = CDrawingContext::FillShapeWithBitmapRealization(this, a2, v28, (const struct MILMatrix3x2 *)v30, 0);
      v15 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x94Bu, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
    }
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v29, a2);
    v29[16] = 0;
    v23 = 1LL;
    v24 = (struct CShape *)a3;
    if ( !a3 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v14 = CDrawingContext::FillRectanglesWithDrawListBitmap(this);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x954u, 0LL);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v29);
  }
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v28);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((char *)this + 3160);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
  return v15;
}
