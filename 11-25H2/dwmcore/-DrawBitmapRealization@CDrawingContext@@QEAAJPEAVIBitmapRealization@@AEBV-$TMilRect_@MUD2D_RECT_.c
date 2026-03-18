/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x180074398 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180074398.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1800747B0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1800749DC (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801174F0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800513D0 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180081EA0 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800AC4A0 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800E0B50 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1801E7028 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        struct D2D_RECT_F *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5,
        int a6,
        int a7)
{
  int v11; // eax
  float v12; // xmm0_4
  int UnOccludedWorldShape; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  const struct CMILMatrix *TopByReference; // rax
  int v20; // xmm1_4
  unsigned int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // eax
  int v24; // eax
  __int64 v25; // [rsp+30h] [rbp-A1h] BYREF
  struct CShape *v26; // [rsp+38h] [rbp-99h] BYREF
  int v27; // [rsp+40h] [rbp-91h]
  int v28; // [rsp+44h] [rbp-8Dh]
  float v29; // [rsp+48h] [rbp-89h] BYREF
  struct CShape *v30; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v31[24]; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v33[64]; // [rsp+90h] [rbp-41h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v33, a3);
  v11 = *((_DWORD *)this + 792);
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 395) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v29 = v12 * *(float *)&a7;
  CWatermarkStack<float,64,2,10>::Push((char *)this + 3160, &v29);
  v30 = 0LL;
  v26 = 0LL;
  v25 = (__int64)&v30;
  LOBYTE(v27) = 1;
  UnOccludedWorldShape = CDrawingContext::GetUnOccludedWorldShape(this, (const struct CShape *)v33, a6, &v26);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v25);
  if ( UnOccludedWorldShape >= 0 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
    v20 = *((_DWORD *)TopByReference + 1);
    LODWORD(v25) = *(_DWORD *)TopByReference;
    v21 = *((_DWORD *)TopByReference + 4);
    HIDWORD(v25) = v20;
    v26 = (struct CShape *)__PAIR64__(*((_DWORD *)TopByReference + 5), v21);
    v22 = *((_DWORD *)TopByReference + 13);
    v27 = *((_DWORD *)TopByReference + 12);
    v28 = v22;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v31, (const struct MILMatrix3x2 *)&v25);
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v32, (const struct D2D1::Matrix3x2F *)v31, a4);
    v23 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v15 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x942u, 0LL);
    }
    else
    {
      v24 = CDrawingContext::FillShapeWithBitmapRealization(this, a2, v30, (const struct MILMatrix3x2 *)v32, a5);
      v15 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x94Bu, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
    }
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v31, a2);
    v31[16] = a5;
    v25 = 1LL;
    v26 = (struct CShape *)a3;
    if ( !a3 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v14 = CDrawingContext::FillRectanglesWithDrawListBitmap(this);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x954u, 0LL);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v31);
  }
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v30);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)this + 3160, v16, v17);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v33);
  return v15;
}
