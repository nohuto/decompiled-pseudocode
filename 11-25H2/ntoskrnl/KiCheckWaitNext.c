/*
 * XREFs of KiCheckWaitNext @ 0x14027DB60
 * Callers:
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x140305CB0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 */

__int64 __fastcall KiCheckWaitNext(
        struct _KPRCB *a1,
        __int64 a2,
        unsigned __int64 SchedulerAssist,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  char v7; // bp
  __int64 v8; // r14
  struct _KPRCB *v9; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int64 GraceSequenceQuiescent; // rdx
  __int64 v14; // rax
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LONGLONG v16; // rcx
  _DWORD *v17; // rax
  unsigned __int64 *v18; // rcx
  char v19; // r8
  struct _KPRCB *v20; // rcx
  signed __int32 *v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  unsigned __int8 v24; // al
  _LIST_ENTRY *AwaitingCompletion; // r12
  unsigned __int32 v26; // eax
  unsigned __int32 v27; // ett
  struct _KPRCB *Flink; // rax
  _KTHREAD *Blink; // rax
  struct _LIST_ENTRY *v30; // rax
  unsigned __int32 *v31; // r8
  unsigned __int32 v32; // eax
  unsigned __int32 v33; // ett
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *v35; // rdx
  _LIST_ENTRY *v36; // rax
  unsigned __int32 v37; // ett
  signed __int32 v38[18]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = SchedulerAssist;
  v8 = a2;
  v9 = a1;
  if ( _bittestandreset((signed __int32 *)&a1->HalReserved[5] + 1, 2u) )
  {
    v5 = (2 * _bittestandreset((signed __int32 *)&a1->HalReserved[5] + 1, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    BYTE6(v9->ProcessorState.SpecialRegisters.LastBranchToRip) = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_7;
    v24 = KeDisableInterrupts(a1, a2, SchedulerAssist);
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    SchedulerAssist = v24;
    if ( !AwaitingCompletion )
    {
      if ( v24 )
      {
        a1 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int64)a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw((const void *)SchedulerAssist);
          v26 = *(_DWORD *)SchedulerAssist;
          do
          {
            a2 = v26;
            LODWORD(a2) = v26 & 0xFFDFFFFF;
            v27 = v26;
            v26 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v26 & 0xFFDFFFFF, v26);
          }
          while ( v27 != v26 );
          goto LABEL_38;
        }
        goto LABEL_40;
      }
      goto LABEL_7;
    }
    Flink = (struct _KPRCB *)AwaitingCompletion->Flink;
    if ( AwaitingCompletion[-1].Blink )
    {
      if ( AwaitingCompletion != (_LIST_ENTRY *)Flink )
        CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)Flink;
    }
    else
    {
      if ( Flink == (struct _KPRCB *)AwaitingCompletion )
      {
        CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
      }
      else
      {
        CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)Flink;
        a1 = (struct _KPRCB *)AwaitingCompletion->Flink;
        Blink = (_KTHREAD *)AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion
          || *(_LIST_ENTRY **)&Blink->Header.Lock != AwaitingCompletion )
        {
          goto LABEL_69;
        }
        *(_QWORD *)&Blink->Header.Lock = a1;
        a1->CurrentThread = Blink;
      }
      v30 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v30[3].Blink;
    }
    if ( (_BYTE)SchedulerAssist )
    {
      a1 = KeGetCurrentPrcb();
      v31 = (unsigned __int32 *)a1->SchedulerAssist;
      if ( v31 )
      {
        _m_prefetchw(v31);
        v32 = *v31;
        do
        {
          a2 = v32;
          LODWORD(a2) = v32 & 0xFFDFFFFF;
          v33 = v32;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)v31, v32 & 0xFFDFFFFF, v32);
        }
        while ( v33 != v32 );
        if ( (v32 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(a1);
      }
      _enable();
    }
    SchedulerAssist = (unsigned __int64)AwaitingCompletion[1].Flink;
    if ( (struct _LIST_ENTRY *)SchedulerAssist == AwaitingCompletion[1].Blink )
      goto LABEL_7;
    v34 = AwaitingCompletion[2].Blink;
    v35 = AwaitingCompletion[2].Flink;
    if ( ((__int64)v34->Flink & (__int64)v35[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_7;
    }
    SchedulerAssist = (unsigned __int8)KeDisableInterrupts(v34->Flink, v35, SchedulerAssist);
    if ( AwaitingCompletion->Flink )
    {
LABEL_62:
      if ( (_BYTE)SchedulerAssist )
      {
        a1 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int64)a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw((const void *)SchedulerAssist);
          v26 = *(_DWORD *)SchedulerAssist;
          do
          {
            a2 = v26;
            LODWORD(a2) = v26 & 0xFFDFFFFF;
            v37 = v26;
            v26 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v26 & 0xFFDFFFFF, v26);
          }
          while ( v37 != v26 );
LABEL_38:
          if ( (v26 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(a1);
        }
LABEL_40:
        _enable();
      }
LABEL_7:
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        v19 = KeDisableInterrupts(a1, a2, SchedulerAssist);
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          CurrentPrcb->RcuData.GracePeriodNeeded = 0;
          _InterlockedOr(v38, 0);
          CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
        }
        if ( v19 )
        {
          v20 = KeGetCurrentPrcb();
          v21 = (signed __int32 *)v20->SchedulerAssist;
          if ( v21 )
          {
            _m_prefetchw(v21);
            v22 = *v21;
            do
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange(v21, v22 & 0xFFDFFFFF, v22);
            }
            while ( v23 != v22 );
            if ( (v22 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
          _enable();
        }
      }
      GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
      if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
      {
        v18 = (unsigned __int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
        if ( (*(_QWORD *)(v18[1] + 56) & *v18) == 0 )
        {
          if ( (unsigned int)KiRcuReportQuiescentState(v18, GraceSequenceQuiescent) )
            KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
        }
      }
      goto LABEL_9;
    }
    v36 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v36 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
      goto LABEL_62;
    }
    a1 = (struct _KPRCB *)v36->Blink;
    if ( *(_LIST_ENTRY **)&a1->MxCsr == v36 )
    {
      AwaitingCompletion->Flink = v36;
      AwaitingCompletion->Blink = (struct _LIST_ENTRY *)a1;
      *(_QWORD *)&a1->MxCsr = AwaitingCompletion;
      v36->Blink = AwaitingCompletion;
      goto LABEL_62;
    }
LABEL_69:
    __fastfail(3u);
  }
LABEL_9:
  if ( v8 )
  {
    if ( *(int *)(v8 + 4) < 0 )
    {
      if ( v7 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v14 = MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        v14 = MEMORY[0xFFFFF780000003B0];
        InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
      }
      v16 = InterruptTimePrecise.QuadPart - v14;
      v17 = a5;
      *a4 = v16 - *(_QWORD *)v8 - v9->PrcbPad11[1];
      *v17 = 2;
    }
    else
    {
      *a4 = *(_QWORD *)v8;
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v5;
}
