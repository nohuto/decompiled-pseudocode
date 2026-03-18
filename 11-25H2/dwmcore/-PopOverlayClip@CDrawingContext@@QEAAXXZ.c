/*
 * XREFs of ?PopOverlayClip@CDrawingContext@@QEAAXXZ @ 0x180251B84
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002A7A0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopOverlayClip(CDrawingContext *this)
{
  __int64 v1; // r8

  CBaseClipStack::Pop((CDrawingContext *)((char *)this + 3112));
  --*(_QWORD *)(*(_QWORD *)(v1 + 752) - 184LL);
  *(_BYTE *)(v1 + 8065) = 1;
}
