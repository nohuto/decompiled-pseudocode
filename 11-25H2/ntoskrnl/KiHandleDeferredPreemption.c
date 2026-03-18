/*
 * XREFs of KiHandleDeferredPreemption @ 0x1402F2F88
 * Callers:
 *     KiSchedulerApc @ 0x1402F2C80 (KiSchedulerApc.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x1402F3870 (KzReleaseAdditionalPrcbLocks.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v10; // rdx
  __int64 result; // rax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // al
  unsigned __int64 v19; // rbx
  char v20; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v22; // rdx
  struct _KTHREAD *v23; // rdx
  unsigned __int8 v24; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v25; // r11
  char v26; // r10
  __int64 v27; // r10
  char v28; // bl
  __int64 i; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v30; // rcx
  unsigned __int64 v31; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp+38h] BYREF

  v31 = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _interlockedbittestandreset((volatile signed __int32 *)(v1 + 120), 0xAu);
  KiAbProcessPreContextSwitch(v1, 0LL);
  KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1LL, &v31);
  if ( !CurrentPrcb->NextThread )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    v32 = 0LL;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v31);
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v1, v13, v14, v15) )
    {
      v16 = *(_QWORD *)(v1 + 104);
      if ( v16 )
      {
        v17 = v16 + CurrentPrcb->ScbOffset;
        if ( v17 )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v17) )
          {
            RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, CurrentPrcb);
            KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v22, 0, 1u);
            if ( (v26 & 2) != 0 )
            {
              v27 = 0LL;
              if ( StaticRescheduleContext->ProcessorCount > v24 )
              {
                do
                {
                  v30 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                       + 32 * v27
                                                       + 8 * (unsigned int)v27);
                  if ( v30 != v25 )
                    KiAdjustRescheduleContextEntryForThreadRemoval(v30, v23, 0, 1u);
                  v27 = (unsigned int)(v27 + 1);
                }
                while ( (unsigned int)v27 < StaticRescheduleContext->ProcessorCount );
              }
              StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v18 = KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, &v32);
    v19 = v32;
    v20 = v18;
    if ( v18 || v32 )
    {
      KiReleasePrcbLocksForIsolationUnit((__int64 *)&v31);
      if ( v20 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * i
                                                  + 8 * (unsigned int)i),
            CurrentPrcb,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      if ( v19 )
        KiReadyDeferredReadyList(CurrentPrcb, &v32);
      KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v31);
    }
  }
  v6 = 0LL;
  v7 = 0LL;
  v8 = v31 & 0xFFFFFFFFFFFFFFFEuLL;
  v32 = v31 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v31 & 1) != 0 )
  {
    if ( (v31 & 1) == 1 )
    {
      v6 = *(_QWORD *)(v8 + 36440) + 8LL;
      v7 = **(unsigned __int8 **)(v8 + 36440);
    }
    KzReleaseAdditionalPrcbLocks(v6, v7, &v32, 1LL);
    v31 = v8;
  }
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    CurrentPrcb->NextThread = 0LL;
    KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, v1, v4, v5);
    KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
    if ( NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
      __fastfail(0x21u);
    *(_BYTE *)(v1 + 643) = 38;
    *(_BYTE *)(v1 + 390) = 0;
    KiQueueReadyThread(CurrentPrcb);
    v28 = KiSwapContext(v1, NextThread, 0LL);
    KiAbProcessPostContextSwitch(v1);
    if ( v28 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v1 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
  }
  else
  {
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v31);
    KiAbProcessPostContextSwitch(v1);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
