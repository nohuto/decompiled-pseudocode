/*
 * XREFs of ??1?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180186560
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180186168 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::~vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v2 )
  {
    v2 *= 8LL;
    *(_QWORD *)(a1 + 8) -= v2;
  }
  *(_QWORD *)a1 = 0LL;
  if ( v1 != (void *)(a1 + 24) && v1 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v2) = HeapFree(ProcessHeap, 0, v1);
  }
  return v2;
}
