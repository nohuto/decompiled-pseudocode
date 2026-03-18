/*
 * XREFs of ?GetVertexAAOffsetsForAntialiasRectangle@Mesh@@SA?AV?$span@$$CBUVertexAAOffsetDesc@Mesh@@$0?0@gsl@@XZ @ 0x180203C6C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Mesh::GetVertexAAOffsetsForAntialiasRectangle(_QWORD *a1)
{
  *a1 = 4LL;
  a1[1] = &unk_18032D960;
  return a1;
}
