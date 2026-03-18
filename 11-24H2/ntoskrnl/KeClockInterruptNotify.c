/*
 * XREFs of KeClockInterruptNotify @ 0x14033A5E0
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1403394D0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14033ADE0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     PoExecuteIdleCheck @ 0x14029D050 (PoExecuteIdleCheck.c)
 *     KiUpdateTimeAssist @ 0x14029EBAC (KiUpdateTimeAssist.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 *     KiEventClockStateChange @ 0x140459BEC (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, __int64 GraceSequenceQuiescent, unsigned int a3)
{
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  char *v6; // r12
  bool v7; // cc
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // r15
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  unsigned __int32 *v11; // r8
  __int64 v12; // rsi
  unsigned __int8 v13; // bl
  unsigned __int64 InterruptTimePrecise; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rcx
  __int64 ClockTickTraceIndex; // rcx
  char *v21; // r12
  unsigned __int8 v22; // r13
  char *v23; // rsi
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  unsigned __int8 v29; // di
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int8 v36; // bl
  unsigned __int32 v37; // eax
  unsigned __int32 v38; // ett
  bool v39; // bl
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v41; // rax
  struct _KPRCB *v42; // rcx
  signed __int32 *v43; // r8
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  bool v46; // al
  struct _KPRCB *v47; // rcx
  signed __int32 *v48; // r8
  _KCLOCK_TIMER_STATE *v49; // rdi
  unsigned __int8 v50; // bl
  signed __int32 v51; // eax
  signed __int32 v52; // ett
  bool v53; // al
  _LIST_ENTRY *AwaitingCompletion; // rsi
  bool v55; // r8
  struct _KPRCB *v56; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v58; // eax
  unsigned __int8 v59; // di
  signed __int32 v60; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v62; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v64; // rax
  struct _KPRCB *v65; // rcx
  signed __int32 *v66; // r8
  signed __int32 v67; // eax
  signed __int32 v68; // ett
  bool v69; // r8
  _LIST_ENTRY *v70; // rcx
  struct _KPRCB *v71; // rcx
  signed __int32 *v72; // r8
  signed __int32 v73; // eax
  signed __int32 v74; // ett
  struct _LIST_ENTRY *v75; // rax
  int v76; // eax
  signed __int32 v77[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned __int8 v78; // [rsp+30h] [rbp-69h]
  char v79; // [rsp+31h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v81; // [rsp+40h] [rbp-59h]
  int v82; // [rsp+44h] [rbp-55h] BYREF
  unsigned __int64 v83; // [rsp+48h] [rbp-51h]
  __int64 v84; // [rsp+50h] [rbp-49h] BYREF
  _KCLOCK_TIMER_STATE *v85; // [rsp+58h] [rbp-41h]
  __int64 v86; // [rsp+60h] [rbp-39h] BYREF
  __int64 v87; // [rsp+68h] [rbp-31h] BYREF
  char *v88; // [rsp+70h] [rbp-29h]
  char *v89; // [rsp+78h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+80h] [rbp-19h] BYREF
  int *v91; // [rsp+A0h] [rbp+7h]
  __int64 v92; // [rsp+A8h] [rbp+Fh]
  char *v93; // [rsp+B0h] [rbp+17h]
  __int64 v94; // [rsp+B8h] [rbp+1Fh]

  v81 = a3;
  v87 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v78 = GraceSequenceQuiescent;
  v6 = 0LL;
  v84 = 0LL;
  v88 = 0LL;
  v7 = CurrentPrcb->NestingLevel <= 1u;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v85 = &CurrentPrcb->ClockTimerState;
  v86 = 0LL;
  v80 = 0LL;
  if ( !v7 )
    goto LABEL_5;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v53 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v55 = v53;
    if ( !AwaitingCompletion )
    {
      if ( v53 )
      {
        v56 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v56->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v58 = *SchedulerAssist;
          do
          {
            v60 = v58;
            v58 = _InterlockedCompareExchange(SchedulerAssist, v58 & 0xFFDFFFFF, v58);
          }
          while ( v60 != v58 );
          if ( (v58 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v56);
        }
        _enable();
      }
      goto LABEL_3;
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
        v62 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_141;
        Blink->Flink = v62;
        v62->Blink = Blink;
      }
      v64 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v64[3].Blink;
    }
    if ( v55 )
    {
      v65 = KeGetCurrentPrcb();
      v66 = (signed __int32 *)v65->SchedulerAssist;
      if ( v66 )
      {
        _m_prefetchw(v66);
        v67 = *v66;
        do
        {
          v68 = v67;
          v67 = _InterlockedCompareExchange(v66, v67 & 0xFFDFFFFF, v67);
        }
        while ( v68 != v67 );
        if ( (v67 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v65);
      }
      _enable();
    }
    if ( AwaitingCompletion[1].Flink == AwaitingCompletion[1].Blink )
      goto LABEL_144;
    if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_144;
    }
    v69 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
    {
LABEL_132:
      if ( v69 )
      {
        v71 = KeGetCurrentPrcb();
        v72 = (signed __int32 *)v71->SchedulerAssist;
        if ( v72 )
        {
          _m_prefetchw(v72);
          v73 = *v72;
          do
          {
            v74 = v73;
            v73 = _InterlockedCompareExchange(v72, v73 & 0xFFDFFFFF, v73);
          }
          while ( v74 != v73 );
          if ( (v73 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v71);
        }
        _enable();
      }
LABEL_144:
      p_ClockTimerState = &CurrentPrcb->ClockTimerState;
      goto LABEL_3;
    }
    v70 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v70 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
      goto LABEL_132;
    }
    v75 = v70->Blink;
    if ( v75->Flink == v70 )
    {
      AwaitingCompletion->Flink = v70;
      AwaitingCompletion->Blink = v75;
      v75->Flink = AwaitingCompletion;
      v70->Blink = AwaitingCompletion;
      goto LABEL_132;
    }
LABEL_141:
    __fastfail(3u);
  }
LABEL_3:
  if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
  {
    v46 = KeDisableInterrupts();
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      CurrentPrcb->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v77, 0);
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
    }
    if ( v46 )
    {
      v47 = KeGetCurrentPrcb();
      v48 = (signed __int32 *)v47->SchedulerAssist;
      if ( v48 )
      {
        _m_prefetchw(v48);
        v51 = *v48;
        do
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange(v48, v51 & 0xFFDFFFFF, v51);
        }
        while ( v52 != v51 );
        if ( (v51 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
      _enable();
    }
  }
  GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
  if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
  {
    v19 = (_QWORD *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
    if ( (*v19 & *(_QWORD *)(v19[1] + 56LL)) == 0LL )
    {
      if ( (unsigned int)KiRcuReportQuiescentState() )
        KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
    }
  }
LABEL_5:
  if ( KiForceIdleDisabled || !CurrentPrcb->ClockOwner )
    goto LABEL_26;
  _disable();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v84);
    v18 = InterruptTimePrecise;
    v80 = InterruptTimePrecise;
    if ( !KiClockTimerPerCpuTickScheduling )
      PoExecuteIdleCheck(InterruptTimePrecise);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      guard_dispatch_icall_no_overrides(v15, GraceSequenceQuiescent, v16, v17);
      v76 = 0;
    }
    else
    {
      v76 = KiForceIdleWatchdogResetCount + 1;
    }
    KiForceIdleWatchdogResetCount = v76;
    if ( v18 - KiForceIdleActiveLastStartTime > 0x1312D00 )
    {
      LOBYTE(GraceSequenceQuiescent) = 1;
      KiResetForceIdle(2LL, GraceSequenceQuiescent);
    }
    else
    {
      ++qword_140F217B0;
      v3 = 1;
      v6 = (char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
      v88 = v6;
      KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
      *v6 = 0;
      *((_QWORD *)v6 + 1) = v18;
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = (unsigned __int32 *)v10->SchedulerAssist;
  if ( v11 )
  {
    _m_prefetchw(v11);
    v37 = *v11;
    do
    {
      GraceSequenceQuiescent = v37;
      LODWORD(GraceSequenceQuiescent) = v37 & 0xFFDFFFFF;
      v38 = v37;
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v37 & 0xFFDFFFFF, v37);
    }
    while ( v38 != v37 );
    if ( (v37 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  if ( !v3 )
  {
LABEL_26:
    ClockTickTraceIndex = p_ClockTimerState->ClockTickTraceIndex;
    p_ClockTimerState->ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
    v21 = (char *)p_ClockTimerState->ClockTickTraces + 32 * ClockTickTraceIndex + 8 * ClockTickTraceIndex;
    *((_QWORD *)v21 + 1) = MEMORY[0xFFFFF78000000008];
    v22 = (*(_BYTE *)(a1 + 368) & 1) != 0;
    if ( !CurrentPrcb->ClockOwner )
    {
      if ( KiSerializeTimerExpiration || !KiClockTimerPerCpuTickScheduling )
      {
        v32 = RtlGetInterruptTimePrecise(&v84);
      }
      else
      {
        v39 = KeDisableInterrupts();
        KiUpdateTimeAssist(0LL, 0, (__int64 *)&v80, &v84);
        if ( v39 )
        {
          v42 = KeGetCurrentPrcb();
          v43 = (signed __int32 *)v42->SchedulerAssist;
          if ( v43 )
          {
            _m_prefetchw(v43);
            v44 = *v43;
            do
            {
              v45 = v44;
              v44 = _InterlockedCompareExchange(v43, v44 & 0xFFDFFFFF, v44);
            }
            while ( v45 != v44 );
            if ( (v44 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
          _enable();
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
        v32 = v80;
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v80, 0);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      KiUpdateRunTime(v22, v78, v81);
      *((_QWORD *)v21 + 2) = v32;
      *(_QWORD *)v21 = MEMORY[0xFFFFF78000000350];
      v34 = __rdtsc();
      v35 = (unsigned __int64)HIDWORD(v34) << 32;
      v21[32] = 0;
      v24 = KiClockTimerPerCpuTickScheduling == 0;
      *((_QWORD *)v21 + 3) = v34;
      if ( !v24 )
      {
        v36 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v36, 15LL);
        if ( v85->OneShotState == KClockTimerOneShotArmed )
          v85->OneShotState = KClockTimerOneShotRearmRequired;
        LOBYTE(v35) = 1;
        KiSetNextClockTickDueTime(v32, v35, v33);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
        __writecr8(v36);
      }
      return;
    }
    v23 = (char *)&KiClockTickTraces + 40 * (unsigned int)KiClockTickTraceIndex;
    v89 = v23;
    KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
    v24 = KiClockTimerPerCpuTickScheduling == 0;
    *((_QWORD *)v23 + 1) = MEMORY[0xFFFFF78000000008];
    if ( v24 )
    {
      if ( KiClockOwnerOneShotRequestState != 1 )
        goto LABEL_29;
      v59 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v59, 15LL);
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v59);
      v41 = v59;
    }
    else
    {
      if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotArmed )
        goto LABEL_29;
      v41 = KeGetCurrentIrql();
      v83 = v41;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v41, 15LL);
        LOBYTE(v41) = v83;
      }
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E070B8 > 5 )
      {
        v82 = 2;
        v91 = &v82;
        v92 = 4LL;
        v93 = &v79;
        v79 = 0;
        v94 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E070B8,
          (unsigned __int8 *)word_140047BFA,
          0LL,
          0LL,
          4u,
          &v90);
        LOBYTE(v41) = v83;
      }
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v41);
        LOBYTE(v41) = v83;
      }
      v41 = (unsigned __int8)v41;
    }
    __writecr8(v41);
LABEL_29:
    KiUpdateTime(v22, v78, v81);
    v28 = MEMORY[0xFFFFF78000000008];
    v80 = MEMORY[0xFFFFF78000000008];
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v29 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v29, 15LL);
      LOBYTE(v25) = 1;
      KiSetNextClockTickDueTime(v28, v25, v27);
      if ( !KiIrqlFlags )
        goto LABEL_34;
    }
    else
    {
      if ( KiClockOwnerOneShotRequestState != 2 )
      {
LABEL_35:
        *(_QWORD *)v23 = MEMORY[0xFFFFF78000000350];
        *(_QWORD *)v21 = MEMORY[0xFFFFF78000000350];
        *((_QWORD *)v23 + 3) = __rdtsc();
        *((_DWORD *)v23 + 8) = KeGetPcr()->Prcb.Number;
        v30 = __rdtsc();
        v21[32] = 1;
        *((_QWORD *)v21 + 3) = ((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30;
        v31 = v80;
        if ( KiClockState == 2 )
        {
          KiRestoreClockTickRate(v80, &v86, &v87);
          if ( !KiClockTimerPerCpuTickScheduling )
          {
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0LL, 2LL, &v87, &v86);
            v31 = v80;
          }
        }
        KiClockTimerNextTickTime = v31 + (unsigned int)KeTimeIncrement;
        v85->NextTickDueTime = v31 + v85->TimeIncrement;
        *((_QWORD *)v89 + 2) = v31;
        *((_QWORD *)v21 + 2) = v31;
        return;
      }
      v29 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v29, 15LL);
      KiSetClockIntervalToMinimumRequested(v26, v25, v27);
      if ( !KiIrqlFlags )
      {
LABEL_34:
        __writecr8(v29);
        goto LABEL_35;
      }
    }
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
    goto LABEL_34;
  }
  v12 = v80;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    v49 = v85;
    if ( v85->OneShotState == KClockTimerOneShotArmed )
    {
      v50 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(GraceSequenceQuiescent) = 15;
        KiRaiseIrqlProcessIrqlFlags(v50, GraceSequenceQuiescent);
      }
      LOBYTE(GraceSequenceQuiescent) = 1;
      v49->OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime(v12, GraceSequenceQuiescent, (__int64)v11);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v50);
      __writecr8(v50);
      if ( !v6 )
        goto LABEL_89;
      goto LABEL_88;
    }
  }
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v13 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(GraceSequenceQuiescent) = 15;
      KiRaiseIrqlProcessIrqlFlags(v13, GraceSequenceQuiescent);
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested((__int64)v10, GraceSequenceQuiescent, (__int64)v11);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    __writecr8(v13);
    if ( !v6 )
      goto LABEL_89;
LABEL_88:
    *v6 = 1;
LABEL_89:
    ++qword_140F217B8;
  }
}
