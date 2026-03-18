/*
 * XREFs of KiRemoveBoostThread @ 0x14027EE94
 * Callers:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiRemoveBoostThread(struct _KPRCB *a1, __int64 a2)
{
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  struct _KPRCB *v4; // r11
  int v5; // r14d
  unsigned int v6; // ebx
  int v7; // esi
  __int16 v8; // ax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  struct _KPRCB *CurrentPrcb; // r15
  int v14; // r12d
  _KTHREAD *NextThread; // rbx
  int v16; // edx
  unsigned __int64 v17; // rcx
  struct _KPRCB *v18; // r14
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v20; // rcx
  __int64 i; // rbx
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 v24; // [rsp+38h] [rbp-60h] BYREF
  struct _KPRCB *v25; // [rsp+40h] [rbp-58h]
  __int128 v26; // [rsp+48h] [rbp-50h] BYREF
  char v28; // [rsp+A8h] [rbp+10h]
  char v29; // [rsp+B0h] [rbp+18h]
  int v30; // [rsp+B8h] [rbp+20h]

  StaticRescheduleContext = 0LL;
  v4 = a1;
  v5 = 0;
  v24 = 0LL;
  if ( *(_WORD *)(a2 + 518) )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
    v7 = KiComputeThreadPriority(a2, 1LL);
    v8 = *(_WORD *)(a2 + 518);
    if ( (v8 & 0xFF0) == 0 )
      ++v7;
    *(_WORD *)(a2 + 518) = v8 & 0xF00F;
    v9 = KiComputeThreadPriority(a2, 0LL);
    v4 = a1;
    v5 = v9;
    v11 = v10 + 1;
  }
  else
  {
    v11 = 0;
    v7 = *(char *)(a2 + 195) + 1;
  }
  if ( v7 >= 16 )
    v7 = 15;
  if ( v11 )
  {
    v12 = *(char *)(a2 + 195);
    v23 = 0LL;
    if ( v5 != v12 )
    {
      v26 = 0LL;
      CurrentPrcb = v4;
      if ( !v4 )
        CurrentPrcb = KeGetCurrentPrcb();
      KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1LL, &v24);
      v14 = 0;
      NextThread = CurrentPrcb->NextThread;
      v25 = KeGetCurrentPrcb();
      v30 = *(char *)(a2 + 195);
      v29 = 0;
      v28 = 0;
      KiUpdateThreadPriority((_DWORD)CurrentPrcb, v16, a2, v5, NextThread == 0LL);
      if ( !NextThread )
      {
        if ( v5 >= v30 )
        {
          if ( v5 > v30 && *(_BYTE *)(a2 + 388) == 2 )
            v14 = v5;
        }
        else if ( *(_BYTE *)(a2 + 388) == 2 )
        {
          v28 = 1;
        }
        else if ( (CurrentPrcb->ReadySummary | CurrentPrcb->SharedReadyQueue->ReadySummary) >> (v5 + 1) )
        {
          *(_BYTE *)(a2 + 112) |= 0x10u;
        }
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, a2);
      v18 = v25;
      if ( v28 )
      {
        StaticRescheduleContext = v25->StaticRescheduleContext;
        KiStartRescheduleContext((__int64)StaticRescheduleContext, &v24);
        RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, CurrentPrcb);
        RescheduleContextEntryForPrcb->___u5[0] |= 2u;
        KiSearchForNewThreadsForRescheduleContext(v20);
        v29 = KiCommitRescheduleContext(StaticRescheduleContext, v18, 0LL, &v23);
      }
      KiReleaseThreadStateLock(v17, (__int64)CurrentPrcb, &v24, 0LL, (volatile signed __int64 **)&v26);
      if ( v29 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * i
                                                  + 8 * (unsigned int)i),
            v18,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&v18->DeferredDispatchInterrupts);
      }
      if ( v14 > 0 )
        KiHvEnlightenedGuestPriorityKick(v18, CurrentPrcb, (unsigned int)v14);
      v4 = CurrentPrcb;
    }
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v23 )
      KiReadyDeferredReadyList(v4, &v23);
  }
  return (unsigned int)v7;
}
