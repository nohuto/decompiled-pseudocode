/*
 * XREFs of AcquireAllResidencyLocksForAllocation @ 0x140103C04
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall AcquireAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD **)(a2 + 112);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 136));
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL)
                                                            + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL))
                                                + 48LL));
}
