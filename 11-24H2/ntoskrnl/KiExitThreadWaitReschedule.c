/*
 * XREFs of KiExitThreadWaitReschedule @ 0x140297854
 * Callers:
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140299450 (KiCommitRescheduleContext.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1403CA100 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403CBFC0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiExitThreadWaitReschedule(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  bool v5; // zf
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  char v8; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  struct _KTHREAD *v10; // rdx
  _KPRCB *Prcb; // rcx
  _KTHREAD *IdleThread; // rax
  unsigned int i; // r10d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v15; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (*(_BYTE *)(a2 + 112) & 8) == 0;
  v16 = 0LL;
  if ( !v5 )
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v8 = 0;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, &v16);
  if ( !a1->NextThread )
  {
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v16);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
    LOBYTE(v10) = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
    Prcb = RescheduleContextEntryForPrcb->Prcb;
    RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
    RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = (unsigned __int8)v10 & 0xC0 | 5;
    IdleThread = Prcb->IdleThread;
    *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
    RescheduleContextEntryForPrcb->NewThread = IdleThread;
    if ( ((unsigned __int8)v10 & 2) != 0 )
    {
      for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      {
        v15 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
        if ( v15 != RescheduleContextEntryForPrcb )
          KiAdjustRescheduleContextEntryForThreadRemoval(v15, v10, 0, 1u);
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v8 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 0LL, a3);
  }
  KiReleasePrcbLocksForIsolationUnit(&v16);
  if ( v8 )
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
    KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
  }
  return KiProcessDeferredReadyList(a1);
}
