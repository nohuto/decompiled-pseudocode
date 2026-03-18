/*
 * XREFs of ??A?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAAEA_N_K@Z @ 0x18020AB48
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  return a2 + *a1;
}
