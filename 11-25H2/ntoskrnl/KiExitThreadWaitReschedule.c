/*
 * XREFs of KiExitThreadWaitReschedule @ 0x1402F39F4
 * Callers:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiExitThreadWaitReschedule(struct _KPRCB *a1, __int64 a2, _QWORD **a3)
{
  unsigned int v3; // ebx
  bool v5; // zf
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  char v9; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  struct _KTHREAD *v11; // rdx
  _KPRCB *Prcb; // rcx
  _KTHREAD *IdleThread; // rax
  unsigned int i; // r10d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (*(_BYTE *)(a2 + 112) & 8) == 0;
  v17 = 0LL;
  if ( !v5 )
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v9 = 0;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v17);
  if ( !a1->NextThread )
  {
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v17);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
    LOBYTE(v11) = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
    Prcb = RescheduleContextEntryForPrcb->Prcb;
    RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
    RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = (unsigned __int8)v11 & 0xC0 | 5;
    IdleThread = Prcb->IdleThread;
    *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
    RescheduleContextEntryForPrcb->NewThread = IdleThread;
    if ( ((unsigned __int8)v11 & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v16 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
        if ( v16 != RescheduleContextEntryForPrcb )
          KiAdjustRescheduleContextEntryForThreadRemoval(v16, v11, 0, 1u);
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v9 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 0LL, a3);
  }
  KiReleasePrcbLocksForIsolationUnit(&v17);
  if ( v9 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v3 + 8 * v3),
          a1,
          0LL,
          0LL);
        ++v3;
      }
      while ( v3 < StaticRescheduleContext->ProcessorCount );
    }
    KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  }
  return KiProcessDeferredReadyList(a1, a3, *(_BYTE *)(a2 + 390));
}
