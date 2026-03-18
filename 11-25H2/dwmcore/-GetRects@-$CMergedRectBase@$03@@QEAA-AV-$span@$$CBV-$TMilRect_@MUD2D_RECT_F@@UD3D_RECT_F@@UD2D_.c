/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801FE35C
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1800C4140 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1802073AC (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D9AF4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRender.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8 (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CMergedRectBase<4>::GetRects(unsigned int *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  if ( !*((_BYTE *)a1 + 168) )
    CMergedRectBase<4>::Optimize(a1);
  v4 = *a1;
  *a2 = v4;
  a2[1] = a1 + 1;
  if ( a1 == (unsigned int *)-4LL && v4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a2;
}
