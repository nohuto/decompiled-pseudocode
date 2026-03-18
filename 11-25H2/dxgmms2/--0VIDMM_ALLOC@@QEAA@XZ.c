/*
 * XREFs of ??0VIDMM_ALLOC@@QEAA@XZ @ 0x140038D78
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

VIDMM_ALLOC *__fastcall VIDMM_ALLOC::VIDMM_ALLOC(VIDMM_ALLOC *this)
{
  memset(this, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 29);
  return this;
}
