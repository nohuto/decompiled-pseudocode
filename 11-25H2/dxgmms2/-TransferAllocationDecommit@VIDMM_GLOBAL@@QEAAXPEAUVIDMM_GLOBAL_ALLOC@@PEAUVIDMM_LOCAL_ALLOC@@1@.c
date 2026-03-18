/*
 * XREFs of ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x140106C34
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::TransferAllocationDecommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  if ( a3 )
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 32LL) + 440LL),
      -*(_QWORD *)(*(_QWORD *)a2 + 16LL));
  if ( a4 )
  {
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 440LL),
      *(_QWORD *)(*(_QWORD *)a2 + 16LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 432LL));
  }
}
