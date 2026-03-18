/*
 * XREFs of KeRemoveQueueEx @ 0x1402A49D0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1402A60E0 (KeRemoveQueue.c)
 *     FsRtlWorkerThread @ 0x140582110 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1405A5850 (IopPassiveInterruptRealtimeWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x140A712D0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402A5864 (KiActivateWaiterQueueWithNoLocks.c)
 *     EtwTraceDequeueWork @ 0x1402A6048 (EtwTraceDequeueWork.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiAttemptFastRemoveQueue @ 0x140419390 (KiAttemptFastRemoveQueue.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  BOOLEAN v8; // r13
  KPROCESSOR_MODE v9; // bp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG v15; // r12d
  ULONG_PTR WobPriority; // r9
  unsigned __int64 v17; // rbp
  unsigned int v18; // esi
  ULONG v19; // r13d
  __int64 v20; // rsi
  int v21; // eax
  int v22; // eax
  struct _KQUEUE *v23; // rdx
  struct _LIST_ENTRY *p_QueueListEntry; // rsi
  struct _LIST_ENTRY *v25; // rcx
  unsigned int v26; // esi
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  ULONG v29; // esi
  struct _LIST_ENTRY *v30; // rax
  unsigned int v31; // esi
  __int64 v32; // rax
  PLIST_ENTRY *v33; // r15
  unsigned __int64 WaitIrql; // rbx
  _QWORD *v36; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned int v40; // ebp
  ULONG_PTR v41; // rcx
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  unsigned int v44; // esi
  unsigned __int8 v45; // al
  $170BED6759C51D14495B6D160899A925 *v46; // r10
  unsigned int v47; // esi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v51; // rcx
  struct _LIST_ENTRY *v52; // rax
  unsigned __int8 v53; // bl
  __int64 ThreadTimerDelay; // rdx
  unsigned __int8 v55; // si
  struct _LIST_ENTRY *v56; // rdx
  LIST_ENTRY *v57; // rcx
  ULONG v58; // ebp
  struct _LIST_ENTRY *v59; // rax
  struct _LIST_ENTRY *v60; // r8
  __int64 v61; // rax
  struct _KPRCB *v62; // rsi
  __int64 v63; // r9
  unsigned __int8 v64; // al
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned __int8 v67; // al
  unsigned int v68; // edx
  unsigned int v69; // eax
  struct _LIST_ENTRY *v70; // rdx
  struct _LIST_ENTRY *v71; // rcx
  char v72; // al
  struct _KPRCB *v73; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  unsigned __int8 v77; // al
  _LIST_ENTRY *v78; // r9
  __int64 *AwaitingCompletion; // rbp
  unsigned __int32 v80; // eax
  __int64 v81; // rdx
  unsigned __int32 v82; // ett
  _LIST_ENTRY *v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rax
  unsigned __int32 *v86; // r8
  unsigned __int32 v87; // eax
  __int64 v88; // rdx
  unsigned __int32 v89; // ett
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 **v92; // rax
  unsigned __int32 v93; // eax
  __int64 v94; // rdx
  unsigned __int32 v95; // ett
  signed __int32 v96[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v97; // [rsp+28h] [rbp-70h]
  int v98; // [rsp+30h] [rbp-68h]
  __int64 v99; // [rsp+40h] [rbp-58h] BYREF
  __int64 v100; // [rsp+48h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-48h]
  KPROCESSOR_MODE v103; // [rsp+A8h] [rbp+10h]
  BOOLEAN v104; // [rsp+B0h] [rbp+18h]

  v104 = Alertable;
  v103 = WaitMode;
  v8 = Alertable;
  v99 = 0LL;
  v9 = WaitMode;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  QuadPart = 0LL;
  v12 = 2LL;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v11 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( CurrentPrcb->RcuData.AwaitingCompletion )
    {
      v77 = KeDisableInterrupts(v12, WaitMode, Alertable);
      AwaitingCompletion = (__int64 *)CurrentPrcb->RcuData.AwaitingCompletion;
      *(_QWORD *)&Alertable = v77;
      if ( AwaitingCompletion )
      {
        v83 = (_LIST_ENTRY *)*AwaitingCompletion;
        if ( *(AwaitingCompletion - 1) )
        {
          if ( AwaitingCompletion != (__int64 *)v83 )
            CurrentPrcb->RcuData.AwaitingCompletion = v83;
        }
        else
        {
          if ( v83 == (_LIST_ENTRY *)AwaitingCompletion )
          {
            CurrentPrcb->RcuData.AwaitingCompletion = v78;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = v83;
            v12 = *AwaitingCompletion;
            v84 = (__int64 *)AwaitingCompletion[1];
            if ( *(__int64 **)(*AwaitingCompletion + 8) != AwaitingCompletion || (__int64 *)*v84 != AwaitingCompletion )
              goto LABEL_44;
            *v84 = v12;
            *(_QWORD *)(v12 + 8) = v84;
          }
          v85 = AwaitingCompletion[6];
          *AwaitingCompletion = (__int64)v78;
          AwaitingCompletion[2] = *(_QWORD *)(v85 + 56);
        }
        if ( Alertable )
        {
          v12 = (__int64)KeGetCurrentPrcb();
          v86 = *(unsigned __int32 **)(v12 + 36536);
          if ( v86 )
          {
            _m_prefetchw(v86);
            v87 = *v86;
            do
            {
              v88 = v87;
              *(_DWORD *)&WaitMode = v87 & 0xFFDFFFFF;
              v89 = v87;
              v87 = _InterlockedCompareExchange((volatile signed __int32 *)v86, v87 & 0xFFDFFFFF, v87);
            }
            while ( v89 != v87 );
            if ( (v87 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
          _enable();
        }
        *(_QWORD *)&Alertable = AwaitingCompletion[2];
        if ( Alertable != AwaitingCompletion[3] )
        {
          v90 = (_QWORD *)AwaitingCompletion[5];
          v91 = AwaitingCompletion[4];
          if ( (*v90 & *(_QWORD *)(v91 + 40)) != 0LL )
          {
            *(_QWORD *)&Alertable = (unsigned __int8)KeDisableInterrupts(*v90, v91, Alertable);
            if ( !*AwaitingCompletion )
            {
              v12 = (__int64)CurrentPrcb->RcuData.AwaitingCompletion;
              if ( v12 )
              {
                v92 = *(__int64 ***)(v12 + 8);
                if ( *v92 != (__int64 *)v12 )
                  goto LABEL_44;
                *AwaitingCompletion = v12;
                AwaitingCompletion[1] = (__int64)v92;
                *v92 = AwaitingCompletion;
                *(_QWORD *)(v12 + 8) = AwaitingCompletion;
              }
              else
              {
                AwaitingCompletion[1] = (__int64)AwaitingCompletion;
                *AwaitingCompletion = (__int64)AwaitingCompletion;
                CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)AwaitingCompletion;
              }
            }
            if ( Alertable )
            {
              v12 = (__int64)KeGetCurrentPrcb();
              *(_QWORD *)&Alertable = *(_QWORD *)(v12 + 36536);
              if ( Alertable )
              {
                _m_prefetchw((const void *)Alertable);
                v93 = *(_DWORD *)Alertable;
                do
                {
                  v94 = v93;
                  *(_DWORD *)&WaitMode = v93 & 0xFFDFFFFF;
                  v95 = v93;
                  v93 = _InterlockedCompareExchange((volatile signed __int32 *)Alertable, v93 & 0xFFDFFFFF, v93);
                }
                while ( v95 != v93 );
                if ( (v93 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(v12);
              }
              _enable();
            }
          }
          else if ( (unsigned int)KiSrcuReportQuiescent(AwaitingCompletion - 1, AwaitingCompletion[2]) )
          {
            KiSrcuFlushCompleted(AwaitingCompletion[6]);
          }
        }
        v8 = v104;
      }
      else if ( v77 )
      {
        v12 = (__int64)KeGetCurrentPrcb();
        *(_QWORD *)&Alertable = *(_QWORD *)(v12 + 36536);
        if ( Alertable )
        {
          _m_prefetchw((const void *)Alertable);
          v80 = *(_DWORD *)Alertable;
          do
          {
            v81 = v80;
            *(_DWORD *)&WaitMode = v80 & 0xFFDFFFFF;
            v82 = v80;
            v80 = _InterlockedCompareExchange((volatile signed __int32 *)Alertable, v80 & 0xFFDFFFFF, v80);
          }
          while ( v82 != v80 );
          if ( (v80 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
        _enable();
      }
      v9 = v103;
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v72 = KeDisableInterrupts(v12, WaitMode, Alertable);
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v96, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
      }
      if ( v72 )
      {
        v73 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v73->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v75 = *SchedulerAssist;
          do
          {
            v76 = v75;
            v75 = _InterlockedCompareExchange(SchedulerAssist, v75 & 0xFFDFFFFF, v75);
          }
          while ( v76 != v75 );
          if ( (v75 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v73);
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
    {
      v36 = (_QWORD *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
      if ( (*v36 & *(_QWORD *)(v36[1] + 56LL)) == 0LL )
      {
        if ( (unsigned int)KiRcuReportQuiescentState() )
          KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
      }
    }
  }
  v15 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v98 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      WobPriority = 0LL;
      v9 = v103;
    }
    else
    {
      WobPriority = 0LL;
      QuadPart = Timeout->QuadPart;
      v98 = 1;
    }
  }
  else
  {
    WobPriority = 0LL;
    v98 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue != Queue )
    goto LABEL_16;
  if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
  {
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_16;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v33 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
    }
    else
    {
      if ( v8 )
      {
        v31 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        if ( CurrentThread->Alerted[v9] )
        {
          CurrentThread->Alerted[v9] = 0;
          WobPriority = 0LL;
          v32 = 257LL;
        }
        else if ( v9
               && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPendingAll |= 2u;
          v32 = 192LL;
          WobPriority = 0LL;
        }
        else
        {
          WobPriority = 0LL;
          if ( CurrentThread->Alerted[0] )
          {
            CurrentThread->Alerted[0] = 0;
            v32 = 257LL;
          }
          else
          {
            v32 = 0LL;
          }
        }
        if ( v32 )
        {
LABEL_69:
          v33 = EntryArray;
          *EntryArray = (PLIST_ENTRY)v32;
          if ( v8 )
            CurrentThread->ThreadLock = 0LL;
          goto LABEL_71;
        }
LABEL_68:
        QuadPart = 258LL;
        v32 = 258LL;
        goto LABEL_69;
      }
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v9 )
        goto LABEL_68;
      v33 = EntryArray;
      *EntryArray = (PLIST_ENTRY)192;
    }
LABEL_71:
    if ( v11 >= 2 )
    {
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v44 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v44);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      WobPriority = CurrentThread->WobPriority;
      v45 = CurrentThread->PriorityFloorCounts[WobPriority];
      if ( !v45 )
        KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
      v67 = v45 - 1;
      CurrentThread->PriorityFloorCounts[WobPriority] = v67;
      if ( !v67 )
      {
        v68 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
        CurrentThread->PriorityFloorSummary = v68;
        if ( v68 < 1 << WobPriority && CurrentThread->Priority <= 31 )
        {
          v69 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
          if ( (int)v69 < CurrentThread->Priority )
            KiSetPriorityThread(CurrentThread, (__int64)&v99, v69, WobPriority);
        }
      }
      CurrentThread->WobPriority = 32;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (v11 & 1) != 0 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb());
    }
    else
    {
      WaitIrql = CurrentThread->WaitIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
      __writecr8(WaitIrql);
    }
    goto LABEL_76;
  }
  v26 = 0;
  if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v26);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    WobPriority = 0LL;
  }
  if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
  {
    Flink = Queue->EntryListHead.Flink;
    p_EntryListHead = &Queue->EntryListHead;
    v29 = 0;
    do
    {
      --Queue->Header.SignalState;
      v30 = Flink->Flink;
      if ( !Flink->Flink )
        KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
      Blink = Flink->Blink;
      if ( v30->Blink != Flink || Blink->Flink != Flink )
        goto LABEL_44;
      Blink->Flink = v30;
      v30->Blink = Blink;
      v38 = v29++;
      Flink->Flink = 0LL;
      EntryArray[v38] = Flink;
      Flink = p_EntryListHead->Flink;
    }
    while ( p_EntryListHead->Flink != p_EntryListHead && v29 < Count );
    if ( v29 )
    {
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      if ( v11 >= 2 )
      {
        v40 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v40 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v40);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v41 = CurrentThread->WobPriority;
        v42 = CurrentThread->PriorityFloorCounts[v41];
        if ( !v42 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v41, 2uLL, 0LL);
        v64 = v42 - 1;
        CurrentThread->PriorityFloorCounts[v41] = v64;
        if ( !v64 )
        {
          v65 = CurrentThread->PriorityFloorSummary ^ (1 << v41);
          CurrentThread->PriorityFloorSummary = v65;
          if ( v65 < 1 << v41 && CurrentThread->Priority <= 31 )
          {
            v66 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
            if ( (int)v66 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, (__int64)&v99, v66, WobPriority);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      if ( (v11 & 1) != 0 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb());
      }
      else
      {
        v39 = CurrentThread->WaitIrql;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v39);
        __writecr8(v39);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, EntryArray, v29, WobPriority);
      return v29;
    }
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  while ( 1 )
  {
LABEL_16:
    v17 = CurrentThread->WaitIrql;
    v100 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v103;
      if ( v104 )
        CurrentThread->MiscFlags |= 0x10u;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v17 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v43, 2LL);
      CurrentThread->WaitIrql = 0;
    }
    v19 = Count;
    if ( v104 )
    {
      if ( CurrentThread->Alerted[v103] )
      {
        CurrentThread->Alerted[v103] = 0;
        v22 = 257;
        v20 = 257LL;
      }
      else if ( !v103
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v22 = 257;
          v20 = 257LL;
        }
        else
        {
          v22 = 0;
          v20 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v22 = 192;
        v20 = 192LL;
      }
      if ( !v22 )
      {
LABEL_39:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        v19 = Count;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_40;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v103 )
        goto LABEL_39;
      v20 = 192LL;
    }
    v100 = 0LL;
    v21 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v11, 1, (__int64)&v100);
    CurrentThread->ThreadLock = 0LL;
    if ( v21 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb());
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
      __writecr8(v17);
    }
    if ( v20 )
    {
      v33 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v20;
LABEL_76:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v33, v15, WobPriority);
      return v15;
    }
LABEL_40:
    v23 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v23 )
    {
      p_QueueListEntry = &CurrentThread->QueueListEntry;
      if ( v23 )
        KiActivateWaiterQueueWithNoLocks(CurrentThread, v23, &CurrentThread->QueueListEntry, 0LL);
      CurrentThread->Queue = &Queue->Header;
      _InterlockedIncrement((volatile signed __int32 *)&Queue->CurrentCount);
      KiAcquireKobjectLockSafe(Queue);
      v25 = Queue->ThreadListHead.Blink;
      if ( v25->Flink != &Queue->ThreadListHead )
        goto LABEL_44;
      p_QueueListEntry->Flink = &Queue->ThreadListHead;
      CurrentThread->QueueListEntry.Blink = v25;
      v25->Flink = p_QueueListEntry;
      Queue->ThreadListHead.Blink = p_QueueListEntry;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    }
    v46 = &CurrentThread->320;
    v47 = 0;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v47 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v47);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      v46 = &CurrentThread->320;
    }
    v33 = EntryArray;
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v56 = Queue->EntryListHead.Flink;
      v57 = &Queue->EntryListHead;
      v58 = 0;
      do
      {
        --Queue->Header.SignalState;
        v59 = v56->Flink;
        if ( !v56->Flink )
          KeBugCheckEx(0x96u, (ULONG_PTR)v56, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)v56[1].Flink);
        v60 = v56->Blink;
        if ( v59->Blink != v56 || v60->Flink != v56 )
          goto LABEL_44;
        v60->Flink = v59;
        v59->Blink = v60;
        v61 = v58++;
        v56->Flink = 0LL;
        EntryArray[v61] = v56;
        v56 = v57->Flink;
      }
      while ( v57->Flink != v57 && v58 < v19 );
      if ( v58 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_188;
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v48 = QuadPart;
    if ( v98 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v49 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v48 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v48 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v98 )
        goto LABEL_146;
      if ( !QuadPart )
        goto LABEL_200;
      v49 = MEMORY[0xFFFFF78000000014];
    }
    if ( v49 > v48 )
    {
LABEL_200:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)258;
      goto LABEL_201;
    }
LABEL_146:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v51 = Queue->Header.WaitListHead.Flink;
    if ( v51->Blink != &Queue->Header.WaitListHead )
      goto LABEL_44;
    v46->WaitBlock[0].WaitListEntry.Flink = v51;
    v46->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v51->Blink = (struct _LIST_ENTRY *)v46;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v46;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    v97 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v52 = (struct _LIST_ENTRY *)KiCommitThreadWait((ULONG_PTR)CurrentThread, v11, v97);
    WobPriority = 0LL;
    v11 = 0;
    CurrentThread->WaitReason = 0;
    if ( v52 != (struct _LIST_ENTRY *)256 )
    {
      *EntryArray = v52;
      if ( v19 > 1
        && v52 != (struct _LIST_ENTRY *)128
        && v52 != (struct _LIST_ENTRY *)192
        && (unsigned __int64)&v52[-17].Blink + 7 > 1
        && Queue->Header.SignalState )
      {
        v53 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v53, 2LL);
        KiAcquireKobjectLockSafe(Queue);
        if ( Queue->Header.SignalState )
          v15 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v53);
        __writecr8(v53);
      }
      goto LABEL_76;
    }
    v55 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v55, 2LL);
    CurrentThread->WaitIrql = v55;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_230;
  v70 = CurrentThread->QueueListEntry.Flink;
  v71 = CurrentThread->QueueListEntry.Blink;
  if ( v70->Blink != &CurrentThread->QueueListEntry || v71->Flink != &CurrentThread->QueueListEntry )
LABEL_44:
    __fastfail(3u);
  v71->Flink = v70;
  v70->Blink = v71;
  CurrentThread->Queue = 0LL;
LABEL_230:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  *EntryArray = (PLIST_ENTRY)128;
LABEL_201:
  v58 = 1;
LABEL_188:
  CurrentThread->WaitReason = 0;
  v62 = KeGetCurrentPrcb();
  if ( v62->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v62, 1LL);
  KiFastExitThreadWait(v62, (ULONG_PTR)CurrentThread, v11);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTraceDequeueWork(CurrentThread, EntryArray, v58, v63);
  return v58;
}
