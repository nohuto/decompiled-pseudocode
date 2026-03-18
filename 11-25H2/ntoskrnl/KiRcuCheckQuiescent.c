/*
 * XREFs of KiRcuCheckQuiescent @ 0x14027DA00
 * Callers:
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B1BE8 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 */

void __fastcall KiRcuCheckQuiescent(struct _KPRCB *CurrentPrcb, __int64 a2, unsigned __int64 SchedulerAssist)
{
  struct _KPRCB *v3; // rbx
  signed __int64 GraceSequenceQuiescent; // rdx
  unsigned __int64 *v5; // rcx
  char v6; // al
  struct _KPRCB *v7; // rcx
  signed __int32 *v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned __int8 v11; // al
  struct _KPRCB **AwaitingCompletion; // rdi
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ett
  struct _KPRCB *v15; // rax
  _KTHREAD *v16; // rax
  struct _KPRCB *v17; // rax
  unsigned __int32 *v18; // r8
  unsigned __int32 v19; // eax
  unsigned __int32 v20; // ett
  struct _KPRCB *v21; // rax
  struct _KPRCB *v22; // rdx
  unsigned __int32 v23; // ett
  _KTHREAD *CurrentThread; // rax
  signed __int32 v25[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = CurrentPrcb;
  if ( CurrentPrcb->NestingLevel > 1u )
    return;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v11 = KeDisableInterrupts(CurrentPrcb, a2, SchedulerAssist);
    AwaitingCompletion = (struct _KPRCB **)v3->RcuData.AwaitingCompletion;
    SchedulerAssist = v11;
    if ( !AwaitingCompletion )
    {
      if ( !v11 )
        goto LABEL_3;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_27;
      _m_prefetchw((const void *)SchedulerAssist);
      v13 = *(_DWORD *)SchedulerAssist;
      do
      {
        a2 = v13;
        LODWORD(a2) = v13 & 0xFFDFFFFF;
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      goto LABEL_25;
    }
    v15 = *AwaitingCompletion;
    if ( *(AwaitingCompletion - 1) )
    {
      if ( AwaitingCompletion != (struct _KPRCB **)v15 )
        v3->RcuData.AwaitingCompletion = (_LIST_ENTRY *)v15;
    }
    else
    {
      a2 = 0LL;
      if ( v15 == (struct _KPRCB *)AwaitingCompletion )
      {
        v3->RcuData.AwaitingCompletion = 0LL;
      }
      else
      {
        v3->RcuData.AwaitingCompletion = (_LIST_ENTRY *)v15;
        CurrentPrcb = *AwaitingCompletion;
        v16 = (_KTHREAD *)AwaitingCompletion[1];
        if ( (struct _KPRCB **)(*AwaitingCompletion)->CurrentThread != AwaitingCompletion
          || *(struct _KPRCB ***)&v16->Header.Lock != AwaitingCompletion )
        {
          goto LABEL_56;
        }
        *(_QWORD *)&v16->Header.Lock = CurrentPrcb;
        CurrentPrcb->CurrentThread = v16;
      }
      v17 = AwaitingCompletion[6];
      *AwaitingCompletion = 0LL;
      AwaitingCompletion[2] = (struct _KPRCB *)v17->PriorityState;
    }
    if ( (_BYTE)SchedulerAssist )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v18 )
      {
        _m_prefetchw(v18);
        v19 = *v18;
        do
        {
          a2 = v19;
          LODWORD(a2) = v19 & 0xFFDFFFFF;
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)v18, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    SchedulerAssist = (unsigned __int64)AwaitingCompletion[2];
    if ( (struct _KPRCB *)SchedulerAssist == AwaitingCompletion[3] )
      goto LABEL_3;
    v21 = AwaitingCompletion[5];
    v22 = AwaitingCompletion[4];
    if ( (*(_QWORD *)&v21->MxCsr & v22->RspBase) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(AwaitingCompletion - 1, AwaitingCompletion[2]) )
        KiSrcuFlushCompleted(AwaitingCompletion[6]);
      goto LABEL_3;
    }
    SchedulerAssist = (unsigned __int8)KeDisableInterrupts(*(_QWORD *)&v21->MxCsr, v22, SchedulerAssist);
    if ( *AwaitingCompletion )
      goto LABEL_49;
    CurrentPrcb = (struct _KPRCB *)v3->RcuData.AwaitingCompletion;
    if ( !CurrentPrcb )
    {
      AwaitingCompletion[1] = (struct _KPRCB *)AwaitingCompletion;
      *AwaitingCompletion = (struct _KPRCB *)AwaitingCompletion;
      v3->RcuData.AwaitingCompletion = (_LIST_ENTRY *)AwaitingCompletion;
LABEL_49:
      if ( !(_BYTE)SchedulerAssist )
        goto LABEL_3;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
      if ( !SchedulerAssist )
      {
LABEL_27:
        _enable();
        goto LABEL_3;
      }
      _m_prefetchw((const void *)SchedulerAssist);
      v13 = *(_DWORD *)SchedulerAssist;
      do
      {
        a2 = v13;
        LODWORD(a2) = v13 & 0xFFDFFFFF;
        v23 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v23 != v13 );
LABEL_25:
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_27;
    }
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( *(struct _KPRCB **)&CurrentThread->Header.Lock == CurrentPrcb )
    {
      *AwaitingCompletion = CurrentPrcb;
      AwaitingCompletion[1] = (struct _KPRCB *)CurrentThread;
      *(_QWORD *)&CurrentThread->Header.Lock = AwaitingCompletion;
      CurrentPrcb->CurrentThread = (_KTHREAD *)AwaitingCompletion;
      goto LABEL_49;
    }
LABEL_56:
    __fastfail(3u);
  }
LABEL_3:
  if ( v3->RcuData.GracePeriodNeeded && !v3->RcuData.NestingLevel )
  {
    v6 = KeDisableInterrupts(CurrentPrcb, a2, SchedulerAssist);
    if ( v3->RcuData.GracePeriodNeeded && !v3->RcuData.NestingLevel )
    {
      v3->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v25, 0);
      v3->RcuData.GraceSequenceQuiescent = qword_140F204A8;
    }
    if ( v6 )
    {
      v7 = KeGetCurrentPrcb();
      v8 = (signed __int32 *)v7->SchedulerAssist;
      if ( v8 )
      {
        _m_prefetchw(v8);
        v9 = *v8;
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange(v8, v9 & 0xFFDFFFFF, v9);
        }
        while ( v10 != v9 );
        if ( (v9 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
      _enable();
    }
  }
  GraceSequenceQuiescent = v3->RcuData.GraceSequenceQuiescent;
  if ( GraceSequenceQuiescent != v3->RcuData.GraceSequenceReported )
  {
    v5 = (unsigned __int64 *)((char *)&KiRcuData + 32 * v3->Number);
    if ( (*(_QWORD *)(v5[1] + 56) & *v5) == 0 )
    {
      if ( (unsigned int)KiRcuReportQuiescentState(v5, GraceSequenceQuiescent) )
        KiRcuFlushCompleted(v3->RcuData.ExpediteReporting);
    }
  }
}
