/*
 * XREFs of ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180218610 (-ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800FE738 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_ea_1800FE738.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::RenderIntermediate(
        CShapeTree *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  CDrawingContext *v19; // rcx
  CDrawingContext *v21; // rcx
  const char *v22; // [rsp+38h] [rbp-39h] BYREF
  int v23; // [rsp+40h] [rbp-31h]
  _BYTE v24[64]; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+3Fh]
  __int64 v27; // [rsp+C0h] [rbp+4Fh] BYREF

  v27 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v23 = 28;
  v22 = "DWM ShapeVisual intermediate";
  v13 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v22, a4, *(unsigned int *)(v12 + 8), a7, &v27);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)(unsigned int)v13);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    return v14;
  }
  else
  {
    v15 = v27;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 104LL))(v27, 0LL);
    v25 = 0;
    CMILMatrix::InferAffineMatrix(v24, a5, a6);
    v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v24, 0, 1);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
        (const char *)(unsigned int)v16);
      v21 = a2;
    }
    else
    {
      v18 = CShapeTree::DrawShapes(this, a2, a3);
      v17 = v18;
      if ( v18 >= 0 )
      {
        *a8 = v15;
        CDrawingContext::PopTransformInternal(a2, 1);
        CDrawingContext::PopLayer(v19);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
        (const char *)(unsigned int)v18);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    CDrawingContext::PopLayer(v21);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v17;
  }
}
