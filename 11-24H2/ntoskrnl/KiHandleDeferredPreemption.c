/*
 * XREFs of KiHandleDeferredPreemption @ 0x1402E03DC
 * Callers:
 *     KiSchedulerApc @ 0x1402E00D0 (KiSchedulerApc.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x1402E0E00 (KzReleaseAdditionalPrcbLocks.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v10; // r15
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 NextThread; // rbx
  __int64 v15; // rdx
  __int64 result; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  unsigned __int8 AllCompareThreadStateFlags; // r8
  struct _KTHREAD *Prcb; // rdx
  _KTHREAD *SListFaultAddress; // rcx
  __int64 i; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v22; // rcx
  char v23; // bl
  __int64 j; // r15
  unsigned __int64 v25; // [rsp+60h] [rbp+30h] BYREF
  struct _SINGLE_LIST_ENTRY v26; // [rsp+68h] [rbp+38h] BYREF

  v25 = 0LL;
  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _interlockedbittestandreset((volatile signed __int32 *)(v2 + 120), 0xAu);
  KiAbProcessPreContextSwitch((_QWORD *)v2, 0);
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1LL, &v25);
  if ( !CurrentPrcb->NextThread )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    v26.Next = 0LL;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v25);
    if ( KiIsThreadConstrainedBySchedulingGroup(v2) )
    {
      v6 = *(_QWORD *)(v2 + 104);
      if ( v6 )
      {
        v7 = v6 + CurrentPrcb->ScbOffset;
        if ( v7 )
        {
          if ( KiCheckForMaxOverQuotaScb(v7) )
          {
            RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, CurrentPrcb);
            RescheduleContextEntryForPrcb->___u5[0] |= 2u;
            AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
            Prcb = (struct _KTHREAD *)RescheduleContextEntryForPrcb->Prcb;
            RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
            RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
            SListFaultAddress = (_KTHREAD *)Prcb->SListFaultAddress;
            *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
            RescheduleContextEntryForPrcb->NewThread = SListFaultAddress;
            if ( (AllCompareThreadStateFlags & 2) != 0 )
            {
              for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
              {
                v22 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * i
                                                     + 8 * (unsigned int)i);
                if ( v22 != RescheduleContextEntryForPrcb )
                  KiAdjustRescheduleContextEntryForThreadRemoval(v22, Prcb, 0, 1u);
              }
              StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v26);
    v8 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, &v26);
    Next = v26.Next;
    v10 = v8;
    if ( v8 || v26.Next )
    {
      KiReleasePrcbLocksForIsolationUnit(&v25);
      if ( v10 )
      {
        for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * j
                                                  + 8 * (unsigned int)j),
            CurrentPrcb,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      if ( Next )
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v26);
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0LL, &v25);
    }
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
  v26.Next = (struct _SINGLE_LIST_ENTRY *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v25 & 1) != 0 )
  {
    if ( (v25 & 1) == 1 )
    {
      v11 = *(_QWORD *)(v13 + 36440) + 8LL;
      v12 = **(unsigned __int8 **)(v13 + 36440);
    }
    KzReleaseAdditionalPrcbLocks(v11, v12, &v26, 1LL);
    v25 = v13;
  }
  NextThread = (__int64)CurrentPrcb->NextThread;
  if ( NextThread )
  {
    CurrentPrcb->NextThread = 0LL;
    KiCaptureTotalCyclesCurrentThread(CurrentPrcb, v2);
    KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
      __fastfail(0x21u);
    *(_BYTE *)(v2 + 643) = 38;
    *(_BYTE *)(v2 + 390) = 0;
    KiQueueReadyThread(CurrentPrcb, (__int64)&v25, v2);
    v23 = KiSwapContext(v2, NextThread, 0LL);
    KiAbProcessPostContextSwitch(v2);
    if ( v23 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v2 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
  }
  else
  {
    KiReleasePrcbLocksForIsolationUnit(&v25);
    KiAbProcessPostContextSwitch(v2);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
