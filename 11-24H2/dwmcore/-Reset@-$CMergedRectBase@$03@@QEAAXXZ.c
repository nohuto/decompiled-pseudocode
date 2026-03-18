/*
 * XREFs of ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x1801FC4CC
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180236660 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D0854 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRender.c)
 *     ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D359C (-UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMergedRectBase<4>::Reset(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = 0LL;
  v2 = *(_BYTE *)(a1 + 168) == 0xFF;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 164) = 0;
  if ( !v2 )
    *(_BYTE *)(a1 + 168) = 0;
  return result;
}
