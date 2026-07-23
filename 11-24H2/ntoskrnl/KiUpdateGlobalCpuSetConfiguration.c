/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1403A35A0 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiCheckThreadAffinity @ 0x1402A8770 (KiCheckThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     KiIsThreadStateControlledByProcessor @ 0x1403A41C0 (KiIsThreadStateControlledByProcessor.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage @ 0x1403A4B08 (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(struct _SINGLE_LIST_ENTRY *a1)
{
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v2; // r15
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  struct _KPRCB *v4; // rsi
  __int64 CurrentThread; // rbx
  int v6; // r13d
  char v7; // bp
  int v8; // r12d
  __int64 v9; // rcx
  bool v10; // si
  unsigned int v12; // ebp
  __int64 v13; // rcx
  char v14; // al
  char v15; // al
  __int64 v16; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v17; // r11
  unsigned __int8 AllCompareThreadStateFlags; // r8
  struct _KTHREAD *Prcb; // rdx
  _KTHREAD *SListFaultAddress; // rcx
  __int64 i; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v22; // rcx
  __int64 j; // rbp
  _KTHREAD *NextThread; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v26; // rdx
  struct _KTHREAD *v27; // rdx
  unsigned __int8 v28; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v29; // r11
  char v30; // r10
  __int64 v31; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v32; // rcx
  char v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+98h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v35 = 0LL;
  v34 = 0;
  Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage();
  v2 = 0LL;
  StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
  while ( (unsigned int)v2 < (unsigned int)KeNumberProcessors_0 )
  {
    v4 = (struct _KPRCB *)KiProcessorBlock[v2];
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    v4->IdleThread->AffinityVersion = KiCpuSetSequence;
    while ( 1 )
    {
      KiAcquirePrcbLocksForIsolationUnit((__int64)v4, 1LL, (unsigned __int64 *)&v35);
      CurrentThread = (__int64)v4->CurrentThread;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(CurrentThread + 868), 1u);
      KiReleasePrcbLocksForIsolationUnit(&v35);
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(CurrentThread + 64) );
      }
      KiAcquirePrcbLocksForIsolationUnit((__int64)v4, 1LL, (unsigned __int64 *)&v35);
      _InterlockedDecrement16((volatile signed __int16 *)(CurrentThread + 868));
      if ( (_KTHREAD *)CurrentThread == v4->CurrentThread )
        break;
      KiReleasePrcbLocksForIsolationUnit(&v35);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v35);
    v6 = *(_DWORD *)(CurrentThread + 588);
    v7 = 0;
    v8 = v6;
    if ( !(unsigned __int8)KiIsThreadStateControlledByProcessor(CurrentThread, v4) )
      goto LABEL_5;
    if ( KiCheckThreadAffinity(CurrentThread) )
      goto LABEL_5;
    v14 = KiComputeThreadAffinity(v13);
    v8 = *(_DWORD *)(CurrentThread + 588);
    v34 = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v14;
    if ( (unsigned int)KeCheckProcessorAffinityEx(*(_QWORD *)(CurrentThread + 576), v4->Number) )
      goto LABEL_5;
    v15 = *(_BYTE *)(CurrentThread + 388);
    if ( v15 == 2 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
    }
    else if ( v15 != 3 )
    {
      if ( v15 == 5 )
        *(_BYTE *)(CurrentThread + 112) |= 8u;
      goto LABEL_5;
    }
    NextThread = v4->NextThread;
    if ( !NextThread || NextThread == (_KTHREAD *)CurrentThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v4);
      v7 = 1;
      KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v26, 0, 1u);
      if ( (v30 & 2) != 0 )
      {
        v31 = 0LL;
        if ( StaticRescheduleContext->ProcessorCount > v28 )
        {
          do
          {
            v32 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                 + 32 * v31
                                                 + 8 * (unsigned int)v31);
            if ( v32 != v29 )
              KiAdjustRescheduleContextEntryForThreadRemoval(v32, v27, 0, 1u);
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < StaticRescheduleContext->ProcessorCount );
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
LABEL_5:
    *(_QWORD *)(CurrentThread + 64) = 0LL;
    v9 = (__int64)v4->NextThread;
    if ( v9 && !KiCheckThreadAffinity(v9) )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 0xCu);
      v17 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v4);
      v17->___u5[0] |= 2u;
      AllCompareThreadStateFlags = v17->AllCompareThreadStateFlags;
      Prcb = (struct _KTHREAD *)v17->Prcb;
      v17->CompareThread = v17->Prcb->IdleThread;
      v17->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      SListFaultAddress = (_KTHREAD *)Prcb->SListFaultAddress;
      *((_BYTE *)&v17->0 + 1) &= ~1u;
      v17->NewThread = SListFaultAddress;
      if ( (AllCompareThreadStateFlags & 2) != 0 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
        {
          v22 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                               + 32 * i
                                               + 8 * (unsigned int)i);
          if ( v22 != v17 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v22, Prcb, 0, 1u);
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
LABEL_32:
      KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, a1);
      v7 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, a1);
      goto LABEL_7;
    }
    if ( v7 )
      goto LABEL_32;
LABEL_7:
    v10 = (xmmword_140FC6B50 & 0x8000000) != 0 && v6 != v8;
    if ( v34 || v10 )
      _InterlockedAdd16((volatile signed __int16 *)(CurrentThread + 868), 1u);
    KiReleasePrcbLocksForIsolationUnit(&v35);
    if ( v7 )
    {
      for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                + 32 * j
                                                + 8 * (unsigned int)j),
          CurrentPrcb,
          0LL,
          0LL);
    }
    if ( v34 )
    {
      EtwTraceThreadAffinity(
        CurrentThread,
        *(_WORD *)(CurrentThread + 584),
        (*(_DWORD *)(CurrentThread + 116) & 8) != 0,
        0,
        *(unsigned __int16 **)(CurrentThread + 576),
        1334);
      if ( v10 )
      {
LABEL_48:
        if ( (xmmword_140FC6B50 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL);
      }
      _InterlockedDecrement16((volatile signed __int16 *)(CurrentThread + 868));
      goto LABEL_14;
    }
    if ( v10 )
      goto LABEL_48;
LABEL_14:
    v2 = (unsigned int)(v2 + 1);
  }
  return KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
}
