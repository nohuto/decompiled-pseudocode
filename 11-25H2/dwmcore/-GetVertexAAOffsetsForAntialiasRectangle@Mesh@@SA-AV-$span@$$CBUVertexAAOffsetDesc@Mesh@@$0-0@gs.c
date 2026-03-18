/*
 * XREFs of ?GetVertexAAOffsetsForAntialiasRectangle@Mesh@@SA?AV?$span@$$CBUVertexAAOffsetDesc@Mesh@@$0?0@gsl@@XZ @ 0x180210128
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Mesh::GetVertexAAOffsetsForAntialiasRectangle(_QWORD *a1)
{
  *a1 = 4LL;
  a1[1] = &unk_1803384F0;
  return a1;
}
