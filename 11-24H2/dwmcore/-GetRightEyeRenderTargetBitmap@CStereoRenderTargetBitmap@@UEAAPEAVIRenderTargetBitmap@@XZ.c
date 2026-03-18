/*
 * XREFs of ?GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ @ 0x1801F1DF0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

struct IRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::GetRightEyeRenderTargetBitmap(
        CStereoRenderTargetBitmap *this)
{
  return (struct IRenderTargetBitmap *)*((_QWORD *)this + 1);
}
