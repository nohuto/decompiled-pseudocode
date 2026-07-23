/*
 * XREFs of KiRemoveBoostThread @ 0x1402CBC34
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140432720 (KiHvEnlightenedGuestPriorityKick.c)
 */

__int64 __fastcall KiRemoveBoostThread(struct _KPRCB *a1, __int64 a2)
{
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  int v5; // r14d
  unsigned int v6; // ebx
  int v7; // esi
  __int16 v8; // ax
  int v9; // eax
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // r15
  int v12; // r12d
  _KTHREAD *NextThread; // rbx
  int v14; // edx
  int v15; // ecx
  struct _KPRCB *v16; // r14
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v18; // rcx
  __int64 i; // rbx
  struct _SINGLE_LIST_ENTRY v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  struct _KPRCB *v23; // [rsp+40h] [rbp-58h]
  __int128 v24[5]; // [rsp+48h] [rbp-50h] BYREF
  char v25; // [rsp+A8h] [rbp+10h]
  char v26; // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h]

  StaticRescheduleContext = 0LL;
  v5 = 0;
  v22 = 0LL;
  if ( *(_WORD *)(a2 + 518) )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a2 + 64) );
    }
    v7 = KiComputeThreadPriority(a2, 1, 0);
    v8 = *(_WORD *)(a2 + 518);
    if ( (v8 & 0xFF0) == 0 )
      ++v7;
    *(_WORD *)(a2 + 518) = v8 & 0xF00F;
    v5 = KiComputeThreadPriority(a2, 0, 0);
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v7 = *(char *)(a2 + 195) + 1;
  }
  if ( v7 >= 16 )
    v7 = 15;
  if ( v9 )
  {
    v10 = *(char *)(a2 + 195);
    v21.Next = 0LL;
    if ( v5 != v10 )
    {
      v24[0] = 0LL;
      CurrentPrcb = a1;
      if ( !a1 )
        CurrentPrcb = KeGetCurrentPrcb();
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1LL, &v22);
      v12 = 0;
      NextThread = CurrentPrcb->NextThread;
      v23 = KeGetCurrentPrcb();
      v27 = *(char *)(a2 + 195);
      v26 = 0;
      v25 = 0;
      KiUpdateThreadPriority((_DWORD)CurrentPrcb, v14, a2, v5, NextThread == 0LL);
      if ( !NextThread )
      {
        if ( v5 >= v27 )
        {
          if ( v5 > v27 && *(_BYTE *)(a2 + 388) == 2 )
            v12 = v5;
        }
        else if ( *(_BYTE *)(a2 + 388) == 2 )
        {
          v25 = 1;
        }
        else if ( (CurrentPrcb->ReadySummary | CurrentPrcb->SharedReadyQueue->ReadySummary) >> (v5 + 1) )
        {
          *(_BYTE *)(a2 + 112) |= 0x10u;
        }
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, a2);
      v16 = v23;
      if ( v25 )
      {
        StaticRescheduleContext = v23->StaticRescheduleContext;
        KiStartRescheduleContext((__int64)StaticRescheduleContext, &v22);
        RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, CurrentPrcb);
        RescheduleContextEntryForPrcb->___u5[0] |= 2u;
        KiSearchForNewThreadsForRescheduleContext(v18, &v21);
        v26 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, v16, 0, &v21);
      }
      KiReleaseThreadStateLock(v15, (_DWORD)CurrentPrcb, (unsigned int)&v22, 0, (__int64)v24);
      if ( v26 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * i
                                                  + 8 * (unsigned int)i),
            v16,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch((char *)&v16->DeferredDispatchInterrupts);
      }
      if ( v12 > 0 )
        KiHvEnlightenedGuestPriorityKick(v16, CurrentPrcb, (unsigned int)v12);
      a1 = CurrentPrcb;
    }
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v21.Next )
      KiReadyDeferredReadyList((__int64)a1, &v21);
  }
  return (unsigned int)v7;
}
