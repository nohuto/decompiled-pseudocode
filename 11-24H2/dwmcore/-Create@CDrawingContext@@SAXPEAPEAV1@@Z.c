/*
 * XREFs of ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000C958
 * Callers:
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000C350 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CRenderTargetManager@@QEAA@XZ @ 0x1800EE21C (--0CRenderTargetManager@@QEAA@XZ.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800F6434 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x180216090 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180139B98 (--0CDrawingContext@@IEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
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
