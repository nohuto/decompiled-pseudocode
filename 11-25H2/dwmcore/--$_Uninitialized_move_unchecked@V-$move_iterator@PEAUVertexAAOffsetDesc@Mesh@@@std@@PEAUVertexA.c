/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@PEAUVertexAAOffsetDesc@Mesh@@@std@@YAPEAUVertexAAOffsetDesc@Mesh@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@V30@PEAU12@@Z @ 0x180214308
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<Mesh::VertexAAOffsetDesc *>,Mesh::VertexAAOffsetDesc *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
