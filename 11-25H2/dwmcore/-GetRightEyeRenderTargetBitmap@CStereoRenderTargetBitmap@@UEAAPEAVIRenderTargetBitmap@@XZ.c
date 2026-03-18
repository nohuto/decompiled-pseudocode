/*
 * XREFs of ?GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ @ 0x1801FE3E0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct IRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::GetRightEyeRenderTargetBitmap(
        CStereoRenderTargetBitmap *this)
{
  return (struct IRenderTargetBitmap *)*((_QWORD *)this + 1);
}
