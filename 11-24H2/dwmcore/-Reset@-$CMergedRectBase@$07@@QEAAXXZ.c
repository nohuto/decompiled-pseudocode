/*
 * XREFs of ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Reset@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18021F940 (-Reset@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMergedRectBase<8>::Reset(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = 0LL;
  v2 = *(_BYTE *)(a1 + 440) == 0xFF;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 436) = 0;
  if ( !v2 )
    *(_BYTE *)(a1 + 440) = 0;
  return result;
}
