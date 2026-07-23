/*
 * XREFs of KiExitThreadWaitReschedule @ 0x1402E1088
 * Callers:
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiExitThreadWaitReschedule(struct _KPRCB *a1, __int64 a2, struct _SINGLE_LIST_ENTRY *a3)
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
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (*(_BYTE *)(a2 + 112) & 8) == 0;
  v17 = 0LL;
  if ( !v5 )
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v9 = 0;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, &v17);
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
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, a3);
    v9 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, a3);
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
