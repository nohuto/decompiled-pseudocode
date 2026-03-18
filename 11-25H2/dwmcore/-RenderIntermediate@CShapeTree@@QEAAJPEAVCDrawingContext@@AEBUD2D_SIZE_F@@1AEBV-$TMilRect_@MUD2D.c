/*
 * XREFs of ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18016F69C
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180224350 (-ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::RenderIntermediate(
        __m128 *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        CMILRefCountImpl **a8)
{
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CMILRefCountImpl *v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  CDrawingContext *v19; // rcx
  CDrawingContext *v21; // rcx
  const char *v22; // [rsp+38h] [rbp-39h] BYREF
  int v23; // [rsp+40h] [rbp-31h]
  __m128 v24[4]; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+3Fh]
  CMILRefCountImpl *v27; // [rsp+C0h] [rbp+4Fh] BYREF

  v27 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v23 = 28;
  v22 = "DWM ShapeVisual intermediate";
  v13 = CDrawingContext::PushOffScreenRenderingLayer(
          (__int64)a2,
          (struct CResourceTag *)&v22,
          a4,
          *(_DWORD *)(v12 + 8),
          a7,
          &v27);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)(unsigned int)v13);
    if ( v27 )
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v27 + 16LL))(v27);
    return v14;
  }
  else
  {
    v15 = v27;
    (*(void (__fastcall **)(CMILRefCountImpl *, _QWORD))(*(_QWORD *)v27 + 104LL))(v27, 0LL);
    v25 = 0;
    CMILMatrix::InferAffineMatrix(v24, a5, a6);
    v16 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, v24, 0, 1);
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
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v15 + 16LL))(v15);
    return v17;
  }
}
