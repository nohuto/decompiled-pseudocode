/*
 * XREFs of ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C395C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAdjustRescheduleContextEntryForThreadRemoval(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        char a3,
        char a4)
{
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rax

  Prcb = a1->Prcb;
  if ( a3 && (a1->AllCompareThreadStateFlags & 0x20) == 0 )
    a1->___u5[0] |= 1u;
  a1->___u5[0] ^= (a1->___u5[0] ^ (2 * a4)) & 2;
  a1->CompareThread = Prcb->IdleThread;
  a1->AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags & 0xC0 | 5;
  IdleThread = Prcb->IdleThread;
  *((_BYTE *)&a1->0 + 1) &= ~1u;
  a1->NewThread = IdleThread;
}
