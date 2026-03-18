/*
 * XREFs of ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1400377D4
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

VIDMM_ALLOC *__fastcall VIDMM_ALLOC::VIDMM_ALLOC(VIDMM_ALLOC *this)
{
  memset(this, 0, 0x100uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 184), SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 31);
  return this;
}
