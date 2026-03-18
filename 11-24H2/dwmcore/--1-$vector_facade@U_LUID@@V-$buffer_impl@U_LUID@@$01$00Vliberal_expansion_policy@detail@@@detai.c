/*
 * XREFs of ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800A6424
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x1800A6188 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v2 )
    *(_QWORD *)(a1 + 8) -= 8 * v2;
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
