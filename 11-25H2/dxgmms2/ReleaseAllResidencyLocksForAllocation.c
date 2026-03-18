/*
 * XREFs of ReleaseAllResidencyLocksForAllocation @ 0x140105718
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ReleaseAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 v6; // rbx

  v2 = (_QWORD *)(a2 + 112);
  for ( i = *(_QWORD **)(a2 + 112); i != v2; i = (_QWORD *)*i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(i - 5) + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL));
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v6 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a2 + 136));
}
