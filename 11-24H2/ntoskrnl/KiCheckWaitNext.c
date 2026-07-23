/*
 * XREFs of KiCheckWaitNext @ 0x1403308C0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int64 GraceSequenceQuiescent; // rdx
  __int64 v14; // rax
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LONGLONG v16; // rcx
  _DWORD *v17; // rax
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdx
  bool v20; // r8
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  bool v25; // al
  _LIST_ENTRY *AwaitingCompletion; // r12
  bool v27; // r8
  struct _KPRCB *v28; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v33; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v35; // rax
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r8
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  bool v40; // r8
  _LIST_ENTRY *v41; // rax
  signed __int32 *v42; // r8
  signed __int32 v43; // ett
  struct _LIST_ENTRY *v44; // rcx
  signed __int32 v45[18]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 2u) )
  {
    v5 = (2 * _bittestandreset((signed __int32 *)(a1 + 116), 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_7;
    v25 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v27 = v25;
    if ( !AwaitingCompletion )
    {
      if ( v25 )
      {
        v28 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v28->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v30 = *SchedulerAssist;
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange(SchedulerAssist, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          goto LABEL_38;
        }
        goto LABEL_40;
      }
      goto LABEL_7;
    }
    Flink = AwaitingCompletion->Flink;
    if ( AwaitingCompletion[-1].Blink )
    {
      if ( AwaitingCompletion != Flink )
        CurrentPrcb->RcuData.AwaitingCompletion = Flink;
    }
    else
    {
      if ( Flink == AwaitingCompletion )
      {
        CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
      }
      else
      {
        CurrentPrcb->RcuData.AwaitingCompletion = Flink;
        v33 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_69;
        Blink->Flink = v33;
        v33->Blink = Blink;
      }
      v35 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v35[3].Blink;
    }
    if ( v27 )
    {
      v36 = KeGetCurrentPrcb();
      v37 = (signed __int32 *)v36->SchedulerAssist;
      if ( v37 )
      {
        _m_prefetchw(v37);
        v38 = *v37;
        do
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange(v37, v38 & 0xFFDFFFFF, v38);
        }
        while ( v39 != v38 );
        if ( (v38 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v36);
      }
      _enable();
    }
    if ( AwaitingCompletion[1].Flink == AwaitingCompletion[1].Blink )
      goto LABEL_7;
    if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_7;
    }
    v40 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
    {
LABEL_62:
      if ( v40 )
      {
        v28 = KeGetCurrentPrcb();
        v42 = (signed __int32 *)v28->SchedulerAssist;
        if ( v42 )
        {
          _m_prefetchw(v42);
          v30 = *v42;
          do
          {
            v43 = v30;
            v30 = _InterlockedCompareExchange(v42, v30 & 0xFFDFFFFF, v30);
          }
          while ( v43 != v30 );
LABEL_38:
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
LABEL_40:
        _enable();
      }
LABEL_7:
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        v20 = KeDisableInterrupts();
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          CurrentPrcb->RcuData.GracePeriodNeeded = 0;
          _InterlockedOr(v45, 0);
          CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
        }
        if ( v20 )
        {
          v21 = KeGetCurrentPrcb();
          v22 = (signed __int32 *)v21->SchedulerAssist;
          if ( v22 )
          {
            _m_prefetchw(v22);
            v23 = *v22;
            do
            {
              v24 = v23;
              v23 = _InterlockedCompareExchange(v22, v23 & 0xFFDFFFFF, v23);
            }
            while ( v24 != v23 );
            if ( (v23 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v21);
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
            KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting, v19);
        }
      }
      goto LABEL_9;
    }
    v41 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v41 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
      goto LABEL_62;
    }
    v44 = v41->Blink;
    if ( v44->Flink == v41 )
    {
      AwaitingCompletion->Flink = v41;
      AwaitingCompletion->Blink = v44;
      v44->Flink = AwaitingCompletion;
      v41->Blink = AwaitingCompletion;
      goto LABEL_62;
    }
LABEL_69:
    __fastfail(3u);
  }
LABEL_9:
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) < 0 )
    {
      if ( a3 )
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
      *a4 = v16 - *(_QWORD *)a2 - *(_QWORD *)(a1 + 248);
      *v17 = 2;
    }
    else
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v5;
}
