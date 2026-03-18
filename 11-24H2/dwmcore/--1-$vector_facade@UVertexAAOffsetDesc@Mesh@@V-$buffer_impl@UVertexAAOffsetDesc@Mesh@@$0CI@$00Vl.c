/*
 * XREFs of ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801C87C0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180177F20 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180179C80 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  if ( v2 )
    *(_QWORD *)(a1 + 8) -= 32 * v2;
  result = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  if ( v1 != (void *)(a1 + 24) )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      return HeapFree(ProcessHeap, 0, v1);
    }
  }
  return result;
}
