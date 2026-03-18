/*
 * XREFs of ??1?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801DEDCC
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::~vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v2 )
    *(_QWORD *)(a1 + 8) -= 16 * v2;
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
