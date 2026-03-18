/*
 * XREFs of ??0?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@QEAA@PEBUD2D_VECTOR_2F@@_J_K@Z @ 0x1801E91FC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StridedSpan<D2D_VECTOR_2F const>::StridedSpan<D2D_VECTOR_2F const>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a1;
  *(_DWORD *)(a1 + 8) = 32;
  *(_DWORD *)(a1 + 12) = a4;
  return result;
}
