/*
 * XREFs of ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403CBFC0
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405C7B74 (KiAdjustRescheduleContextForIsolationWidthChange.c)
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
