/*
 * XREFs of ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180144370
 * Callers:
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x1801441D0 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBrushRenderingEffect::HasImageLightingEffect(CBrushRenderingEffect *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 2) + 264LL) & 4) != 0;
}
