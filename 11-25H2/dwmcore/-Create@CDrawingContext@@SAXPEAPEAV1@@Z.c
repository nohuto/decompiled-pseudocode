/*
 * XREFs of ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C
 * Callers:
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000CE50 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18007609C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800814C4 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801DB3D0 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x180221B30 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ??0CRenderTargetManager@@QEAA@XZ @ 0x1802332B4 (--0CRenderTargetManager@@QEAA@XZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawingContext@@IEAA@XZ @ 0x18000D9A0 (--0CDrawingContext@@IEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

void __fastcall CDrawingContext::Create(struct CDrawingContext **a1)
{
  CDrawingContext *v2; // rax
  CDrawingContext *v3; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CDrawingContext *)DefaultHeap::AllocClear(0x1F90uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v2, 0, 0x1F90uLL);
  CDrawingContext::CDrawingContext(v3);
  *(_QWORD *)v3 = &CGlobalDrawingContext::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)v3 + 2) = &CGlobalDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)v3 + 3) = &CGlobalDrawingContext::`vftable'{for `ID2DContextOwner'};
  *a1 = v3;
  (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v3 + 8LL))(v3);
}
