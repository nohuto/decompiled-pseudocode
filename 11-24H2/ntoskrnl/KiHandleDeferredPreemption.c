/*
 * XREFs of KiHandleDeferredPreemption @ 0x14029602C
 * Callers:
 *     KiSchedulerApc @ 0x140295D20 (KiSchedulerApc.c)
 * Callees:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x140296BF0 (KzReleaseAdditionalPrcbLocks.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140299450 (KiCommitRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x14029ABF0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14029AC10 (KiCheckForMaxOverQuotaScb.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1403CA100 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403CBFC0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  unsigned __int64 v10; // rbx
  char v11; // r15
  __int64 v12; // r10
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 NextThread; // rbx
  __int64 v16; // rdx
  __int64 result; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  unsigned __int8 AllCompareThreadStateFlags; // r8
  struct _KTHREAD *Prcb; // rdx
  _KTHREAD *SListFaultAddress; // rcx
  __int64 i; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v23; // rcx
  char v24; // bl
  __int64 j; // r15
  unsigned __int64 v26; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp+38h] BYREF

  v26 = 0LL;
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
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, &v26);
  if ( !CurrentPrcb->NextThread )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    v27 = 0LL;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v26);
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v2) )
    {
      v7 = *(_QWORD *)(v2 + 104);
      if ( v7 )
      {
        v8 = v7 + CurrentPrcb->ScbOffset;
        if ( v8 )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v8, v6) )
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
                v23 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * i
                                                     + 8 * (unsigned int)i);
                if ( v23 != RescheduleContextEntryForPrcb )
                  KiAdjustRescheduleContextEntryForThreadRemoval(v23, Prcb, 0, 1u);
              }
              StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v9 = KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, &v27);
    v10 = v27;
    v11 = v9;
    if ( v9 || v27 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v26);
      if ( v11 )
      {
        for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * j
                                                  + 8 * (unsigned int)j),
            CurrentPrcb,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      if ( v10 )
        KiReadyDeferredReadyList(CurrentPrcb, &v27);
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v26);
    }
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
  v27 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v26 & 1) != 0 )
  {
    if ( (v26 & 1) == 1 )
    {
      v12 = *(_QWORD *)(v14 + 36440) + 8LL;
      v13 = **(unsigned __int8 **)(v14 + 36440);
    }
    KzReleaseAdditionalPrcbLocks(v12, v13, &v27, 1LL);
    v26 = v14;
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
    KiQueueReadyThread(CurrentPrcb, (__int64)&v26, v2);
    v24 = KiSwapContext(v2, NextThread, 0LL);
    KiAbProcessPostContextSwitch(v2);
    if ( v24 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v2 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
  }
  else
  {
    KiReleasePrcbLocksForIsolationUnit(&v26);
    KiAbProcessPostContextSwitch(v2);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
