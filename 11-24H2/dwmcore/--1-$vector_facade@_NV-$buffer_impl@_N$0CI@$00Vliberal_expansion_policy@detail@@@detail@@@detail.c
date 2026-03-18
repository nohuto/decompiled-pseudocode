/*
 * XREFs of ??1?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801BEF78
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     AppendCustomSamplerShaderBody @ 0x1801BEFD4 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 )
    *(_QWORD *)(a1 + 8) = v1;
  result = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  if ( v1 == (void *)(a1 + 24) )
    v1 = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v1);
  }
  return result;
}
