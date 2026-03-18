/*
 * XREFs of ??1?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801DDEFC
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::~vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) )
    *(_QWORD *)(a1 + 8) -= 8 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
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
