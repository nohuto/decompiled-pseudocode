/*
 * XREFs of NotifyAllocationReclaimed @ 0x1400E0770
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400E08B0 (-NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 */

void __fastcall NotifyAllocationReclaimed(VIDMM_PHYSICAL_ADAPTER *a1, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  VIDMM_PHYSICAL_ADAPTER::NotifyAllocationReclaimed(a1, a2, 1);
}
