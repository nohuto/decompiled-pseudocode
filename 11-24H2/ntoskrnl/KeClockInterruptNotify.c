/*
 * XREFs of KeClockInterruptNotify @ 0x140319AC0
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1403189B0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14031A2C0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C7F0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiResetForceIdle @ 0x1404048A4 (KiResetForceIdle.c)
 *     KiRestoreClockTickRate @ 0x140434EB0 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14044E99C (KiEventClockStateChange.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int64 GraceSequenceQuiescent, unsigned int a3)
{
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  LARGE_INTEGER *v6; // r12
  bool v7; // cc
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // r15
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  unsigned __int32 *v11; // r8
  LARGE_INTEGER v12; // rsi
  unsigned __int8 v13; // bl
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rsi
  _QWORD *v17; // rcx
  __int64 ClockTickTraceIndex; // rcx
  LARGE_INTEGER *v19; // r12
  unsigned __int8 v20; // r13
  LARGE_INTEGER *v21; // rsi
  bool v22; // zf
  LARGE_INTEGER v23; // r13
  unsigned __int8 v24; // di
  unsigned __int64 v25; // rax
  LARGE_INTEGER v26; // rsi
  LARGE_INTEGER v27; // rsi
  LARGE_INTEGER v28; // r9
  unsigned __int8 v29; // bl
  unsigned __int32 v30; // eax
  unsigned __int32 v31; // ett
  bool v32; // bl
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v34; // rax
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  bool v39; // al
  struct _KPRCB *v40; // rcx
  signed __int32 *v41; // r8
  _KCLOCK_TIMER_STATE *v42; // rdi
  unsigned __int8 v43; // bl
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  bool v46; // al
  _LIST_ENTRY *AwaitingCompletion; // rsi
  bool v48; // r8
  struct _KPRCB *v49; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v51; // eax
  unsigned __int8 v52; // di
  signed __int32 v53; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v55; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v57; // rax
  struct _KPRCB *v58; // rcx
  signed __int32 *v59; // r8
  signed __int32 v60; // eax
  signed __int32 v61; // ett
  bool v62; // r8
  _LIST_ENTRY *v63; // rcx
  struct _KPRCB *v64; // rcx
  signed __int32 *v65; // r8
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  struct _LIST_ENTRY *v68; // rax
  int v69; // eax
  signed __int32 v70[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned __int8 v71; // [rsp+30h] [rbp-69h]
  char v72; // [rsp+31h] [rbp-68h] BYREF
  LARGE_INTEGER v73; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v74; // [rsp+40h] [rbp-59h]
  int v75; // [rsp+44h] [rbp-55h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-51h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-49h] BYREF
  _KCLOCK_TIMER_STATE *v78; // [rsp+58h] [rbp-41h]
  __int64 v79; // [rsp+60h] [rbp-39h] BYREF
  __int64 v80; // [rsp+68h] [rbp-31h] BYREF
  LARGE_INTEGER *v81; // [rsp+70h] [rbp-29h]
  LARGE_INTEGER *v82; // [rsp+78h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+80h] [rbp-19h] BYREF
  int *v84; // [rsp+A0h] [rbp+7h]
  __int64 v85; // [rsp+A8h] [rbp+Fh]
  char *v86; // [rsp+B0h] [rbp+17h]
  __int64 v87; // [rsp+B8h] [rbp+1Fh]

  v74 = a3;
  v80 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v71 = GraceSequenceQuiescent;
  v6 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v81 = 0LL;
  v7 = CurrentPrcb->NestingLevel <= 1u;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v78 = &CurrentPrcb->ClockTimerState;
  v79 = 0LL;
  v73.QuadPart = 0LL;
  if ( !v7 )
    goto LABEL_5;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v46 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v48 = v46;
    if ( !AwaitingCompletion )
    {
      if ( v46 )
      {
        v49 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v49->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v51 = *SchedulerAssist;
          do
          {
            v53 = v51;
            v51 = _InterlockedCompareExchange(SchedulerAssist, v51 & 0xFFDFFFFF, v51);
          }
          while ( v53 != v51 );
          if ( (v51 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v49);
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
        v55 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_141;
        Blink->Flink = v55;
        v55->Blink = Blink;
      }
      v57 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v57[3].Blink;
    }
    if ( v48 )
    {
      v58 = KeGetCurrentPrcb();
      v59 = (signed __int32 *)v58->SchedulerAssist;
      if ( v59 )
      {
        _m_prefetchw(v59);
        v60 = *v59;
        do
        {
          v61 = v60;
          v60 = _InterlockedCompareExchange(v59, v60 & 0xFFDFFFFF, v60);
        }
        while ( v61 != v60 );
        if ( (v60 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v58);
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
    v62 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
    {
LABEL_132:
      if ( v62 )
      {
        v64 = KeGetCurrentPrcb();
        v65 = (signed __int32 *)v64->SchedulerAssist;
        if ( v65 )
        {
          _m_prefetchw(v65);
          v66 = *v65;
          do
          {
            v67 = v66;
            v66 = _InterlockedCompareExchange(v65, v66 & 0xFFDFFFFF, v66);
          }
          while ( v67 != v66 );
          if ( (v66 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v64);
        }
        _enable();
      }
LABEL_144:
      p_ClockTimerState = &CurrentPrcb->ClockTimerState;
      goto LABEL_3;
    }
    v63 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v63 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
      goto LABEL_132;
    }
    v68 = v63->Blink;
    if ( v68->Flink == v63 )
    {
      AwaitingCompletion->Flink = v63;
      AwaitingCompletion->Blink = v68;
      v68->Flink = AwaitingCompletion;
      v63->Blink = AwaitingCompletion;
      goto LABEL_132;
    }
LABEL_141:
    __fastfail(3u);
  }
LABEL_3:
  if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
  {
    v39 = KeDisableInterrupts();
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      CurrentPrcb->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v70, 0);
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
    }
    if ( v39 )
    {
      v40 = KeGetCurrentPrcb();
      v41 = (signed __int32 *)v40->SchedulerAssist;
      if ( v41 )
      {
        _m_prefetchw(v41);
        v44 = *v41;
        do
        {
          v45 = v44;
          v44 = _InterlockedCompareExchange(v41, v44 & 0xFFDFFFFF, v44);
        }
        while ( v45 != v44 );
        if ( (v44 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v40);
      }
      _enable();
    }
  }
  GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
  if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
  {
    v17 = (_QWORD *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
    if ( (*v17 & *(_QWORD *)(v17[1] + 56LL)) == 0LL )
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
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v16 = InterruptTimePrecise;
    v73 = InterruptTimePrecise;
    if ( !KiClockTimerPerCpuTickScheduling )
      PoExecuteIdleCheck(InterruptTimePrecise.QuadPart);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      guard_dispatch_icall_no_overrides((LARGE_INTEGER)v15.QuadPart, GraceSequenceQuiescent);
      v69 = 0;
    }
    else
    {
      v69 = KiForceIdleWatchdogResetCount + 1;
    }
    KiForceIdleWatchdogResetCount = v69;
    if ( (unsigned __int64)(v16.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
    {
      LOBYTE(GraceSequenceQuiescent) = 1;
      KiResetForceIdle(2LL, GraceSequenceQuiescent);
    }
    else
    {
      ++qword_140F21470;
      v3 = 1;
      v6 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
      v81 = v6;
      KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
      LOBYTE(v6->LowPart) = 0;
      v6[1] = v16;
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = (unsigned __int32 *)v10->SchedulerAssist;
  if ( v11 )
  {
    _m_prefetchw(v11);
    v30 = *v11;
    do
    {
      GraceSequenceQuiescent = v30;
      LODWORD(GraceSequenceQuiescent) = v30 & 0xFFDFFFFF;
      v31 = v30;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v30 & 0xFFDFFFFF, v30);
    }
    while ( v31 != v30 );
    if ( (v30 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  if ( !v3 )
  {
LABEL_26:
    ClockTickTraceIndex = p_ClockTimerState->ClockTickTraceIndex;
    p_ClockTimerState->ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
    v19 = (LARGE_INTEGER *)((char *)p_ClockTimerState->ClockTickTraces
                          + 32 * ClockTickTraceIndex
                          + 8 * ClockTickTraceIndex);
    v19[1].QuadPart = MEMORY[0xFFFFF78000000008];
    v20 = (*(_BYTE *)(a1 + 368) & 1) != 0;
    if ( !CurrentPrcb->ClockOwner )
    {
      if ( KiSerializeTimerExpiration || !KiClockTimerPerCpuTickScheduling )
      {
        v27 = RtlGetInterruptTimePrecise(&PerformanceCounter);
      }
      else
      {
        v32 = KeDisableInterrupts();
        KiUpdateTimeAssist(0LL, 0, (__int64 *)&v73, &PerformanceCounter);
        if ( v32 )
        {
          v35 = KeGetCurrentPrcb();
          v36 = (signed __int32 *)v35->SchedulerAssist;
          if ( v36 )
          {
            _m_prefetchw(v36);
            v37 = *v36;
            do
            {
              v38 = v37;
              v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
            }
            while ( v38 != v37 );
            if ( (v37 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v35);
          }
          _enable();
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
        v27 = v73;
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v73, 0);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      KiUpdateRunTime(v20, v71, v74, v28.QuadPart);
      v19[2] = v27;
      v19->QuadPart = MEMORY[0xFFFFF78000000350];
      LOBYTE(v19[4].LowPart) = 0;
      v22 = KiClockTimerPerCpuTickScheduling == 0;
      v19[3].QuadPart = __rdtsc();
      if ( !v22 )
      {
        v29 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v29, 15LL);
        if ( v78->OneShotState == KClockTimerOneShotArmed )
          v78->OneShotState = KClockTimerOneShotRearmRequired;
        KiSetNextClockTickDueTime(v27, 1u);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
        __writecr8(v29);
      }
      return;
    }
    v21 = (LARGE_INTEGER *)((char *)&KiClockTickTraces + 40 * (unsigned int)KiClockTickTraceIndex);
    v82 = v21;
    KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
    v22 = KiClockTimerPerCpuTickScheduling == 0;
    v21[1].QuadPart = MEMORY[0xFFFFF78000000008];
    if ( v22 )
    {
      if ( KiClockOwnerOneShotRequestState != 1 )
        goto LABEL_29;
      v52 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v52, 15LL);
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v52);
      v34 = v52;
    }
    else
    {
      if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotArmed )
        goto LABEL_29;
      v34 = KeGetCurrentIrql();
      v76 = v34;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v34, 15LL);
        LOBYTE(v34) = v76;
      }
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v75 = 2;
        v84 = &v75;
        v85 = 4LL;
        v86 = &v72;
        v72 = 0;
        v87 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07080,
          (unsigned __int8 *)word_14004808A,
          0LL,
          0LL,
          4u,
          &v83);
        LOBYTE(v34) = v76;
      }
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v34);
        LOBYTE(v34) = v76;
      }
      v34 = (unsigned __int8)v34;
    }
    __writecr8(v34);
LABEL_29:
    KiUpdateTime(v20, v71, v74);
    v23.QuadPart = MEMORY[0xFFFFF78000000008];
    v73.QuadPart = MEMORY[0xFFFFF78000000008];
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v24 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v24, 15LL);
      KiSetNextClockTickDueTime(v23, 1u);
      if ( !KiIrqlFlags )
        goto LABEL_34;
    }
    else
    {
      if ( KiClockOwnerOneShotRequestState != 2 )
      {
LABEL_35:
        v21->QuadPart = MEMORY[0xFFFFF78000000350];
        v19->QuadPart = MEMORY[0xFFFFF78000000350];
        v21[3].QuadPart = __rdtsc();
        v21[4].LowPart = KeGetPcr()->Prcb.Number;
        v25 = __rdtsc();
        LOBYTE(v19[4].LowPart) = 1;
        v19[3].QuadPart = ((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25;
        v26 = v73;
        if ( KiClockState == 2 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiRestoreClockTickRate)((LARGE_INTEGER)v73.QuadPart, &v79, &v80);
          if ( !KiClockTimerPerCpuTickScheduling )
          {
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0LL, 2LL, &v80, &v79);
            v26 = v73;
          }
        }
        KiClockTimerNextTickTime = v26.QuadPart + (unsigned int)KeTimeIncrement;
        v78->NextTickDueTime = v26.QuadPart + v78->TimeIncrement;
        v82[2] = v26;
        v19[2] = v26;
        return;
      }
      v24 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v24, 15LL);
      KiSetClockIntervalToMinimumRequested();
      if ( !KiIrqlFlags )
      {
LABEL_34:
        __writecr8(v24);
        goto LABEL_35;
      }
    }
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    goto LABEL_34;
  }
  v12 = v73;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    v42 = v78;
    if ( v78->OneShotState == KClockTimerOneShotArmed )
    {
      v43 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(GraceSequenceQuiescent) = 15;
        KiRaiseIrqlProcessIrqlFlags(v43, GraceSequenceQuiescent);
      }
      v42->OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime(v12, 1u);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
      __writecr8(v43);
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
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    __writecr8(v13);
    if ( !v6 )
      goto LABEL_89;
LABEL_88:
    LOBYTE(v6->LowPart) = 1;
LABEL_89:
    ++qword_140F21478;
  }
}
