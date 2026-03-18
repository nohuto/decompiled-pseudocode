/*
 * XREFs of ??0ResolveEdgeFlagsResult@CEdgeFlagsMap@@QEAA@XZ @ 0x1801FFDAC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

CEdgeFlagsMap::ResolveEdgeFlagsResult *__fastcall CEdgeFlagsMap::ResolveEdgeFlagsResult::ResolveEdgeFlagsResult(
        CEdgeFlagsMap::ResolveEdgeFlagsResult *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
