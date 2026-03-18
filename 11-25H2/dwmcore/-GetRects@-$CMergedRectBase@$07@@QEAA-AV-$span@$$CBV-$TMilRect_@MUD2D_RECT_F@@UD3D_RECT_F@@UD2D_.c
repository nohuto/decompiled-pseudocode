/*
 * XREFs of ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C
 * Callers:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x18028C5A0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18028FA90 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CMergedRectBase<8>::GetRects(unsigned int *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  if ( !*((_BYTE *)a1 + 440) )
    CMergedRectBase<8>::Optimize(a1);
  v4 = *a1;
  *a2 = v4;
  a2[1] = a1 + 1;
  if ( a1 == (unsigned int *)-4LL && v4 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a2;
}
