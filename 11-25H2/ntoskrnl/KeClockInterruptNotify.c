/*
 * XREFs of KeClockInterruptNotify @ 0x140279370
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140278260 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     PoExecuteIdleCheck @ 0x140274578 (PoExecuteIdleCheck.c)
 *     KiUpdateTimeAssist @ 0x140275E04 (KiUpdateTimeAssist.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiResetForceIdle @ 0x140404598 (KiResetForceIdle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiEventClockStateChange @ 0x14045A880 (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KeClockInterruptNotify(__int64 *a1, __int64 GraceSequenceQuiescent, __int64 SchedulerAssist)
{
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 *v5; // r15
  LARGE_INTEGER *v6; // r12
  bool v7; // cc
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // r13
  unsigned int v9; // ebx
  struct _KPRCB *v10; // rcx
  LARGE_INTEGER v11; // rbx
  unsigned __int8 v12; // bl
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ett
  __int64 ClockTickTraceIndex; // rcx
  __int64 v19; // r12
  unsigned __int8 v20; // r13
  LARGE_INTEGER *v21; // r15
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  LARGE_INTEGER v26; // rsi
  unsigned __int8 v27; // bl
  unsigned __int64 v28; // rax
  LARGE_INTEGER v29; // rbx
  LARGE_INTEGER v30; // rbx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  char v34; // bl
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  unsigned __int8 v38; // bl
  unsigned __int8 v39; // si
  char v40; // al
  unsigned __int8 v41; // si
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  unsigned __int8 v44; // al
  _LIST_ENTRY *v45; // r9
  __int64 **AwaitingCompletion; // rbx
  unsigned __int32 v47; // eax
  unsigned __int32 v48; // ett
  __int64 *v49; // rax
  __int64 **v50; // rax
  __int64 *v51; // rax
  unsigned __int32 *v52; // r8
  unsigned __int32 v53; // eax
  unsigned __int32 v54; // ett
  __int64 *v55; // rax
  __int64 *v56; // rdx
  unsigned __int32 v57; // ett
  __int64 **v58; // rax
  int v59; // eax
  signed __int32 v60; // ett
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v62[8]; // [rsp+0h] [rbp-89h] BYREF
  unsigned __int8 v63; // [rsp+30h] [rbp-59h]
  char v64; // [rsp+31h] [rbp-58h] BYREF
  LARGE_INTEGER v65; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v66; // [rsp+40h] [rbp-49h]
  int v67; // [rsp+44h] [rbp-45h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-41h] BYREF
  _KCLOCK_TIMER_STATE *v69; // [rsp+50h] [rbp-39h]
  __int64 v70; // [rsp+58h] [rbp-31h] BYREF
  __int64 v71; // [rsp+60h] [rbp-29h] BYREF
  LARGE_INTEGER *v72; // [rsp+68h] [rbp-21h]
  char v73[32]; // [rsp+70h] [rbp-19h] BYREF
  int *v74; // [rsp+90h] [rbp+7h]
  __int64 v75; // [rsp+98h] [rbp+Fh]
  char *v76; // [rsp+A0h] [rbp+17h]
  __int64 v77; // [rsp+A8h] [rbp+1Fh]

  v66 = SchedulerAssist;
  v71 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  v63 = GraceSequenceQuiescent;
  v6 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v72 = 0LL;
  v7 = CurrentPrcb->NestingLevel <= 1u;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v69 = &CurrentPrcb->ClockTimerState;
  v70 = 0LL;
  v65.QuadPart = 0LL;
  if ( !v7 )
    goto LABEL_5;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v44 = KeDisableInterrupts(a1, GraceSequenceQuiescent, SchedulerAssist);
    AwaitingCompletion = (__int64 **)CurrentPrcb->RcuData.AwaitingCompletion;
    SchedulerAssist = v44;
    if ( !AwaitingCompletion )
    {
      if ( !v44 )
        goto LABEL_3;
      a1 = (__int64 *)KeGetCurrentPrcb();
      SchedulerAssist = a1[4567];
      if ( !SchedulerAssist )
        goto LABEL_101;
      _m_prefetchw((const void *)SchedulerAssist);
      v47 = *(_DWORD *)SchedulerAssist;
      do
      {
        GraceSequenceQuiescent = v47;
        LODWORD(GraceSequenceQuiescent) = v47 & 0xFFDFFFFF;
        v48 = v47;
        v47 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v47 & 0xFFDFFFFF, v47);
      }
      while ( v48 != v47 );
      goto LABEL_99;
    }
    v49 = *AwaitingCompletion;
    if ( *(AwaitingCompletion - 1) == (__int64 *)v45 )
    {
      if ( v49 == (__int64 *)AwaitingCompletion )
      {
        CurrentPrcb->RcuData.AwaitingCompletion = v45;
      }
      else
      {
        CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)v49;
        a1 = *AwaitingCompletion;
        v50 = (__int64 **)AwaitingCompletion[1];
        if ( (__int64 **)(*AwaitingCompletion)[1] != AwaitingCompletion || *v50 != (__int64 *)AwaitingCompletion )
          goto LABEL_130;
        *v50 = a1;
        a1[1] = (__int64)v50;
      }
      v51 = AwaitingCompletion[6];
      *AwaitingCompletion = (__int64 *)v45;
      AwaitingCompletion[2] = (__int64 *)v51[7];
    }
    else if ( AwaitingCompletion != (__int64 **)v49 )
    {
      CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)v49;
    }
    if ( (_BYTE)SchedulerAssist )
    {
      a1 = (__int64 *)KeGetCurrentPrcb();
      v52 = (unsigned __int32 *)a1[4567];
      if ( v52 )
      {
        _m_prefetchw(v52);
        v53 = *v52;
        do
        {
          GraceSequenceQuiescent = v53;
          LODWORD(GraceSequenceQuiescent) = v53 & 0xFFDFFFFF;
          v54 = v53;
          v53 = _InterlockedCompareExchange((volatile signed __int32 *)v52, v53 & 0xFFDFFFFF, v53);
        }
        while ( v54 != v53 );
        if ( (v53 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(a1);
      }
      _enable();
    }
    SchedulerAssist = (__int64)AwaitingCompletion[2];
    if ( (__int64 *)SchedulerAssist == AwaitingCompletion[3] )
      goto LABEL_3;
    v55 = AwaitingCompletion[5];
    v56 = AwaitingCompletion[4];
    if ( (*v55 & v56[5]) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(AwaitingCompletion - 1, AwaitingCompletion[2]) )
        KiSrcuFlushCompleted(AwaitingCompletion[6]);
      goto LABEL_3;
    }
    SchedulerAssist = (unsigned __int8)KeDisableInterrupts(*v55, v56, SchedulerAssist);
    if ( *AwaitingCompletion )
      goto LABEL_123;
    a1 = (__int64 *)CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !a1 )
    {
      AwaitingCompletion[1] = (__int64 *)AwaitingCompletion;
      *AwaitingCompletion = (__int64 *)AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)AwaitingCompletion;
LABEL_123:
      if ( !(_BYTE)SchedulerAssist )
        goto LABEL_3;
      a1 = (__int64 *)KeGetCurrentPrcb();
      SchedulerAssist = a1[4567];
      if ( !SchedulerAssist )
      {
LABEL_101:
        _enable();
        goto LABEL_3;
      }
      _m_prefetchw((const void *)SchedulerAssist);
      v47 = *(_DWORD *)SchedulerAssist;
      do
      {
        GraceSequenceQuiescent = v47;
        LODWORD(GraceSequenceQuiescent) = v47 & 0xFFDFFFFF;
        v57 = v47;
        v47 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v47 & 0xFFDFFFFF, v47);
      }
      while ( v57 != v47 );
LABEL_99:
      if ( (v47 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(a1);
      goto LABEL_101;
    }
    v58 = (__int64 **)a1[1];
    if ( *v58 == a1 )
    {
      *AwaitingCompletion = a1;
      AwaitingCompletion[1] = (__int64 *)v58;
      *v58 = (__int64 *)AwaitingCompletion;
      a1[1] = (__int64)AwaitingCompletion;
      goto LABEL_123;
    }
LABEL_130:
    __fastfail(3u);
  }
LABEL_3:
  if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
  {
    v40 = KeDisableInterrupts(a1, GraceSequenceQuiescent, SchedulerAssist);
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      CurrentPrcb->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v62, 0);
      a1 = (__int64 *)qword_140F204A8;
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
    }
    if ( v40 )
    {
      a1 = (__int64 *)KeGetCurrentPrcb();
      SchedulerAssist = a1[4567];
      if ( SchedulerAssist )
      {
        _m_prefetchw((const void *)SchedulerAssist);
        v42 = *(_DWORD *)SchedulerAssist;
        do
        {
          v43 = v42;
          v42 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v42 & 0xFFDFFFFF, v42);
        }
        while ( v43 != v42 );
        if ( (v42 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(a1);
      }
      _enable();
    }
  }
  GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
  if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
  {
    a1 = (__int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
    SchedulerAssist = *a1;
    if ( (*a1 & *(_QWORD *)(a1[1] + 56)) == 0 )
    {
      if ( (unsigned int)KiRcuReportQuiescentState() )
        KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
    }
  }
LABEL_5:
  if ( KiForceIdleDisabled || !CurrentPrcb->ClockOwner )
    goto LABEL_33;
  _disable();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
    v15 = InterruptTimePrecise;
    v65 = InterruptTimePrecise;
    if ( !KiClockTimerPerCpuTickScheduling )
      PoExecuteIdleCheck(InterruptTimePrecise.QuadPart);
    if ( KiForceIdleWatchdogResetCount == 32 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
        (LARGE_INTEGER)v14.QuadPart,
        GraceSequenceQuiescent);
      v59 = 0;
    }
    else
    {
      v59 = KiForceIdleWatchdogResetCount + 1;
    }
    KiForceIdleWatchdogResetCount = v59;
    if ( (unsigned __int64)(v15.QuadPart - KiForceIdleActiveLastStartTime) > 0x1312D00 )
    {
      LOBYTE(GraceSequenceQuiescent) = 1;
      KiResetForceIdle(2LL, GraceSequenceQuiescent);
    }
    else
    {
      ++qword_140F209D0;
      v3 = 1;
      v6 = (LARGE_INTEGER *)((char *)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex);
      v72 = v6;
      KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
      LOBYTE(v6->LowPart) = 0;
      v6[1] = v15;
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v10 = KeGetCurrentPrcb();
  SchedulerAssist = (__int64)v10->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw((const void *)SchedulerAssist);
    v16 = *(_DWORD *)SchedulerAssist;
    do
    {
      GraceSequenceQuiescent = v16;
      LODWORD(GraceSequenceQuiescent) = v16 & 0xFFDFFFFF;
      v17 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v16 & 0xFFDFFFFF, v16);
    }
    while ( v17 != v16 );
    if ( (v16 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v10);
  }
  _enable();
  if ( !v3 )
  {
LABEL_33:
    ClockTickTraceIndex = CurrentPrcb->ClockTimerState.ClockTickTraceIndex;
    v19 = (__int64)&CurrentPrcb->ClockTimerState.ClockTickTraces[ClockTickTraceIndex];
    CurrentPrcb->ClockTimerState.ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
    *(_QWORD *)(v19 + 8) = MEMORY[0xFFFFF78000000008];
    v20 = (v5[46] & 1) != 0;
    if ( !CurrentPrcb->ClockOwner )
    {
      if ( KiSerializeTimerExpiration || !KiClockTimerPerCpuTickScheduling )
      {
        v30 = RtlGetInterruptTimePrecise(&PerformanceCounter);
      }
      else
      {
        v34 = KeDisableInterrupts(ClockTickTraceIndex, GraceSequenceQuiescent, SchedulerAssist);
        KiUpdateTimeAssist(0LL, 0, (__int64 *)&v65, &PerformanceCounter);
        if ( v34 )
        {
          v35 = KeGetCurrentPrcb();
          v36 = (signed __int32 *)v35->SchedulerAssist;
          if ( v36 )
          {
            _m_prefetchw(v36);
            v37 = *v36;
            do
            {
              v60 = v37;
              v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
            }
            while ( v60 != v37 );
            if ( (v37 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
          _enable();
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        v30 = v65;
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v65, 0);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      KiUpdateRunTime(v20, v63, v66);
      *(LARGE_INTEGER *)(v19 + 16) = v30;
      *(_QWORD *)v19 = MEMORY[0xFFFFF78000000350];
      v32 = __rdtsc();
      v33 = (unsigned __int64)HIDWORD(v32) << 32;
      *(_BYTE *)(v19 + 32) = 0;
      v22 = KiClockTimerPerCpuTickScheduling == 0;
      *(_QWORD *)(v19 + 24) = v32;
      if ( !v22 )
      {
        v39 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v39);
        if ( v69->OneShotState == KClockTimerOneShotArmed )
          v69->OneShotState = KClockTimerOneShotRearmRequired;
        LOBYTE(v33) = 1;
        KiSetNextClockTickDueTime(v30, v33, v31);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
        __writecr8(v39);
      }
      return;
    }
    v21 = (LARGE_INTEGER *)((char *)&KiClockTickTraces + 40 * (unsigned int)KiClockTickTraceIndex);
    KiClockTickTraceIndex = (KiClockTickTraceIndex + 1) & 0xF;
    v22 = KiClockTimerPerCpuTickScheduling == 0;
    v21[1].QuadPart = MEMORY[0xFFFFF78000000008];
    if ( v22 )
    {
      if ( KiClockOwnerOneShotRequestState != 1 )
        goto LABEL_36;
      v38 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v38);
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      if ( !KiIrqlFlags )
        goto LABEL_60;
    }
    else
    {
      if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotArmed )
        goto LABEL_36;
      v38 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v38);
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v67 = 2;
        v74 = &v67;
        v75 = 4LL;
        v76 = &v64;
        v64 = 0;
        v77 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, word_1400477B2, 0LL, 0LL, 4, v73);
      }
      if ( !KiIrqlFlags )
      {
LABEL_60:
        __writecr8(v38);
LABEL_36:
        KiUpdateTime(v20, v63, v66);
        v26.QuadPart = MEMORY[0xFFFFF78000000008];
        v65.QuadPart = MEMORY[0xFFFFF78000000008];
        if ( KiClockTimerPerCpuTickScheduling )
        {
          v27 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v27);
          LOBYTE(v23) = 1;
          KiSetNextClockTickDueTime(v26, v23, v25);
          if ( !KiIrqlFlags )
            goto LABEL_41;
        }
        else
        {
          if ( KiClockOwnerOneShotRequestState != 2 )
          {
LABEL_42:
            v21->QuadPart = MEMORY[0xFFFFF78000000350];
            *(_QWORD *)v19 = MEMORY[0xFFFFF78000000350];
            v21[3].QuadPart = __rdtsc();
            v21[4].LowPart = KeGetPcr()->Prcb.Number;
            v28 = __rdtsc();
            *(_BYTE *)(v19 + 32) = 1;
            *(_QWORD *)(v19 + 24) = ((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28;
            v29 = v65;
            if ( KiClockState == 2 )
            {
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiRestoreClockTickRate)(
                (LARGE_INTEGER)v65.QuadPart,
                &v70,
                &v71);
              if ( !KiClockTimerPerCpuTickScheduling )
              {
                _InterlockedExchange(&KiClockState, 0);
                KiEventClockStateChange(0LL, 2LL, &v71, &v70);
                v29 = v65;
              }
            }
            KiClockTimerNextTickTime = v29.QuadPart + (unsigned int)KeTimeIncrement;
            v69->NextTickDueTime = v29.QuadPart + v69->TimeIncrement;
            v21[2] = v29;
            *(LARGE_INTEGER *)(v19 + 16) = v29;
            return;
          }
          v27 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v27);
          KiSetClockIntervalToMinimumRequested(v24, v23, v25);
          if ( !KiIrqlFlags )
          {
LABEL_41:
            __writecr8(v27);
            goto LABEL_42;
          }
        }
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
        goto LABEL_41;
      }
    }
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
    goto LABEL_60;
  }
  v11 = v65;
  if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
  {
    v41 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v41);
    LOBYTE(GraceSequenceQuiescent) = 1;
    p_ClockTimerState->OneShotState = KClockTimerOneShotRearmRequired;
    KiSetNextClockTickDueTime(v11, GraceSequenceQuiescent, SchedulerAssist);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v41);
    __writecr8(v41);
    if ( !v6 )
      goto LABEL_80;
    goto LABEL_79;
  }
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v12);
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested((__int64)v10, GraceSequenceQuiescent, SchedulerAssist);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    if ( !v6 )
      goto LABEL_80;
LABEL_79:
    LOBYTE(v6->LowPart) = 1;
LABEL_80:
    ++qword_140F209D8;
  }
}
