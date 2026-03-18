/*
 * XREFs of KiCheckWaitNext @ 0x1402092E0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  char v7; // bp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v13; // rax
  __int64 InterruptTimePrecise; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _QWORD *v17; // rcx
  char v18; // r8
  struct _KPRCB *v19; // rcx
  signed __int32 *v20; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  char v23; // al
  _LIST_ENTRY *AwaitingCompletion; // r12
  char v25; // r8
  struct _KPRCB *v26; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v31; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v33; // rax
  struct _KPRCB *v34; // rcx
  signed __int32 *v35; // r8
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  char v38; // r8
  _LIST_ENTRY *v39; // rax
  signed __int32 *v40; // r8
  signed __int32 v41; // ett
  struct _LIST_ENTRY *v42; // rcx
  signed __int32 v43[18]; // [rsp+0h] [rbp-48h] BYREF
  char v44; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = a3;
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 2u) )
  {
    v5 = (2 * _bittestandreset((signed __int32 *)(a1 + 116), 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_7;
    v23 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v25 = v23;
    if ( !AwaitingCompletion )
    {
      if ( v23 )
      {
        v26 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v26->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
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
        v31 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_69;
        Blink->Flink = v31;
        v31->Blink = Blink;
      }
      v33 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v33[3].Blink;
    }
    if ( v25 )
    {
      v34 = KeGetCurrentPrcb();
      v35 = (signed __int32 *)v34->SchedulerAssist;
      if ( v35 )
      {
        _m_prefetchw(v35);
        v36 = *v35;
        do
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange(v35, v36 & 0xFFDFFFFF, v36);
        }
        while ( v37 != v36 );
        if ( (v36 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v34);
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
    v38 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
    {
LABEL_62:
      if ( v38 )
      {
        v26 = KeGetCurrentPrcb();
        v40 = (signed __int32 *)v26->SchedulerAssist;
        if ( v40 )
        {
          _m_prefetchw(v40);
          v28 = *v40;
          do
          {
            v41 = v28;
            v28 = _InterlockedCompareExchange(v40, v28 & 0xFFDFFFFF, v28);
          }
          while ( v41 != v28 );
LABEL_38:
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
LABEL_40:
        _enable();
      }
LABEL_7:
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        v18 = KeDisableInterrupts();
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          CurrentPrcb->RcuData.GracePeriodNeeded = 0;
          _InterlockedOr(v43, 0);
          CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
        }
        if ( v18 )
        {
          v19 = KeGetCurrentPrcb();
          v20 = (signed __int32 *)v19->SchedulerAssist;
          if ( v20 )
          {
            _m_prefetchw(v20);
            v21 = *v20;
            do
            {
              v22 = v21;
              v21 = _InterlockedCompareExchange(v20, v21 & 0xFFDFFFFF, v21);
            }
            while ( v22 != v21 );
            if ( (v21 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
          _enable();
        }
      }
      if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
      {
        v17 = (_QWORD *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
        if ( (*(_QWORD *)(v17[1] + 56LL) & *v17) == 0LL )
        {
          if ( (unsigned int)KiRcuReportQuiescentState() )
            KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
        }
      }
      goto LABEL_9;
    }
    v39 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v39 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
      goto LABEL_62;
    }
    v42 = v39->Blink;
    if ( v42->Flink == v39 )
    {
      AwaitingCompletion->Flink = v39;
      AwaitingCompletion->Blink = v42;
      v42->Flink = AwaitingCompletion;
      v39->Blink = AwaitingCompletion;
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
      if ( v7 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v44);
        v13 = MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        v13 = MEMORY[0xFFFFF780000003B0];
        InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
      }
      v15 = InterruptTimePrecise - v13;
      v16 = a5;
      *a4 = v15 - *(_QWORD *)a2 - *(_QWORD *)(a1 + 248);
      *v16 = 2;
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
