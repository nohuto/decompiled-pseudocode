/*
 * XREFs of ??0ResolveEdgeFlagsResult@CEdgeFlagsMap@@QEAA@XZ @ 0x18020C0EC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
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
