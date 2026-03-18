/*
 * XREFs of ?GetAntialiasMode@CCpuClip@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ @ 0x1802065B0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCpuClip::GetAntialiasMode(CCpuClip *this)
{
  return *((unsigned int *)this + 25);
}
