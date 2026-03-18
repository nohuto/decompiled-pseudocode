/*
 * XREFs of ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194
 * Callers:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Reset@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18022AE70 (-Reset@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
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
