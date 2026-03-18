/*
 * XREFs of ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D5B8C
 * Callers:
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400D95D8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114F00 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400D5C50 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

struct VIDMM_DEVICE *__fastcall VidMmSuspendAccessToAllocation(VIDMM_GLOBAL **a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // r14
  _QWORD **v4; // r15
  _QWORD *i; // rbx
  _QWORD *j; // rdi

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v4 = (_QWORD **)((char *)a2 + 112);
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*(_QWORD *)(*(j - 4) + 184LL) )
        {
          DXGFASTMUTEX::Release(v2);
          VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)*(j - 4));
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v2);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*a1, (struct VIDMM_ALLOC *)(j - 5));
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
  return 0LL;
}
