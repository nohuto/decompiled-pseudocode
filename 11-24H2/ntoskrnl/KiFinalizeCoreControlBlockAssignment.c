/*
 * XREFs of KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405B814C (KiAddProcessorToCoreControlBlock.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405B907C (KiRemoveProcessorFromCoreControlBlock.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C54F8 (KiAdjustRescheduleContextForProcessorAddition.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiFinalizeCoreControlBlockAssignment(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned int i; // ecx
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  __int64 v9; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY v12; // [rsp+60h] [rbp+18h] BYREF

  LOBYTE(v11) = a2;
  v3 = 0;
  v10 = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
  {
    v5 = KiProcessorBlock[i];
    if ( *(_DWORD *)(v5 + 36380) == *(_DWORD *)(a1 + 36380) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      CurrentPrcb = KeGetCurrentPrcb();
      StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiAcquirePrcbLocksForIsolationUnit(v5, 1LL, (unsigned __int64 *)&v10);
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(_QWORD *)(a1 + 48) );
      }
      KiStartRescheduleContext((__int64)StaticRescheduleContext, &v10);
      v9 = *(_QWORD *)(v5 + 36440);
      KiRemoveProcessorFromCoreControlBlock(a1);
      KiAddProcessorToCoreControlBlock(v9, a1);
      KiAdjustRescheduleContextForProcessorAddition(StaticRescheduleContext, a1);
      v12.Next = 0LL;
      LOBYTE(v9) = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, &v12);
      KiReleasePrcbLocksForIsolationUnit(&v10);
      if ( (_BYTE)v9 )
      {
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            KiCompleteRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                    + 32 * v3
                                                    + 8 * v3),
              CurrentPrcb,
              0LL,
              0LL);
            ++v3;
          }
          while ( v3 < StaticRescheduleContext->ProcessorCount );
        }
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      KiProcessDeferredReadyList(CurrentPrcb, &v12, CurrentIrql);
      return;
    }
  }
}
