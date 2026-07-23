/*
 * XREFs of KeRemoveQueueEx @ 0x1402D4100
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1402D5810 (KeRemoveQueue.c)
 *     FsRtlWorkerThread @ 0x14057F490 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1405A2790 (IopPassiveInterruptRealtimeWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x140659160 (ExpWorkerFactoryManagerThread.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     EtwTraceDequeueWork @ 0x1402D5778 (EtwTraceDequeueWork.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiAttemptFastRemoveQueue @ 0x140409130 (KiAttemptFastRemoveQueue.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

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
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG v14; // r12d
  ULONG_PTR WobPriority; // r9
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  ULONG v18; // r13d
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // eax
  int v22; // eax
  struct _KQUEUE *v23; // rdx
  struct _LIST_ENTRY *p_QueueListEntry; // rsi
  struct _LIST_ENTRY *v25; // rcx
  unsigned int v26; // esi
  struct _LIST_ENTRY *v27; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  ULONG v29; // esi
  struct _LIST_ENTRY *v30; // rax
  unsigned int v31; // esi
  __int64 v32; // rax
  PLIST_ENTRY *v33; // r15
  unsigned __int64 WaitIrql; // rbx
  _QWORD *v36; // rcx
  struct _LIST_ENTRY *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned int v40; // ebp
  ULONG_PTR v41; // rcx
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  unsigned int v44; // esi
  unsigned __int8 v45; // al
  $0C9BAADE586F3878B709A13404AA1ECE *v46; // r10
  unsigned int v47; // esi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v51; // rcx
  _LIST_ENTRY *v52; // rax
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
  bool v72; // al
  struct _KPRCB *v73; // rcx
  signed __int32 *v74; // r8
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  bool v77; // al
  _LIST_ENTRY *v78; // r9
  _LIST_ENTRY *AwaitingCompletion; // rbp
  bool v80; // r8
  struct _KPRCB *v81; // rcx
  signed __int32 *v82; // r8
  signed __int32 v83; // eax
  signed __int32 v84; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v86; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v88; // rax
  struct _KPRCB *v89; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v91; // eax
  signed __int32 v92; // ett
  bool v93; // r8
  _LIST_ENTRY *v94; // rcx
  struct _LIST_ENTRY *v95; // rax
  struct _KPRCB *v96; // rcx
  signed __int32 *v97; // r8
  signed __int32 v98; // eax
  signed __int32 v99; // ett
  signed __int32 v100[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+28h] [rbp-70h]
  int v102; // [rsp+30h] [rbp-68h]
  _QWORD *v103; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v104; // [rsp+48h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-48h]

  v8 = Alertable;
  v103 = 0LL;
  v9 = WaitMode;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  QuadPart = 0LL;
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
      v77 = KeDisableInterrupts();
      AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
      v80 = v77;
      if ( AwaitingCompletion )
      {
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
            CurrentPrcb->RcuData.AwaitingCompletion = v78;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
            v86 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
              goto LABEL_44;
            Blink->Flink = v86;
            v86->Blink = Blink;
          }
          v88 = AwaitingCompletion[3].Flink;
          AwaitingCompletion->Flink = v78;
          AwaitingCompletion[1].Flink = v88[3].Blink;
        }
        if ( v80 )
        {
          v89 = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)v89->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v91 = *SchedulerAssist;
            do
            {
              v92 = v91;
              v91 = _InterlockedCompareExchange(SchedulerAssist, v91 & 0xFFDFFFFF, v91);
            }
            while ( v92 != v91 );
            if ( (v91 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v89);
          }
          _enable();
        }
        if ( AwaitingCompletion[1].Flink != AwaitingCompletion[1].Blink )
        {
          if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) != 0 )
          {
            v93 = KeDisableInterrupts();
            if ( !AwaitingCompletion->Flink )
            {
              v94 = CurrentPrcb->RcuData.AwaitingCompletion;
              if ( v94 )
              {
                v95 = v94->Blink;
                if ( v95->Flink != v94 )
                  goto LABEL_44;
                AwaitingCompletion->Flink = v94;
                AwaitingCompletion->Blink = v95;
                v95->Flink = AwaitingCompletion;
                v94->Blink = AwaitingCompletion;
              }
              else
              {
                AwaitingCompletion->Blink = AwaitingCompletion;
                AwaitingCompletion->Flink = AwaitingCompletion;
                CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
              }
            }
            if ( v93 )
            {
              v96 = KeGetCurrentPrcb();
              v97 = (signed __int32 *)v96->SchedulerAssist;
              if ( v97 )
              {
                _m_prefetchw(v97);
                v98 = *v97;
                do
                {
                  v99 = v98;
                  v98 = _InterlockedCompareExchange(v97, v98 & 0xFFDFFFFF, v98);
                }
                while ( v99 != v98 );
                if ( (v98 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v96);
              }
              _enable();
            }
          }
          else if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
          {
            KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
          }
        }
        v8 = Alertable;
      }
      else if ( v77 )
      {
        v81 = KeGetCurrentPrcb();
        v82 = (signed __int32 *)v81->SchedulerAssist;
        if ( v82 )
        {
          _m_prefetchw(v82);
          v83 = *v82;
          do
          {
            v84 = v83;
            v83 = _InterlockedCompareExchange(v82, v83 & 0xFFDFFFFF, v83);
          }
          while ( v84 != v83 );
          if ( (v83 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v81);
        }
        _enable();
      }
      v9 = WaitMode;
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v72 = KeDisableInterrupts();
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v100, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
      }
      if ( v72 )
      {
        v73 = KeGetCurrentPrcb();
        v74 = (signed __int32 *)v73->SchedulerAssist;
        if ( v74 )
        {
          _m_prefetchw(v74);
          v75 = *v74;
          do
          {
            v76 = v75;
            v75 = _InterlockedCompareExchange(v74, v75 & 0xFFDFFFFF, v75);
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
  v14 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v102 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      WobPriority = 0LL;
      v9 = WaitMode;
    }
    else
    {
      WobPriority = 0LL;
      QuadPart = Timeout->QuadPart;
      v102 = 1;
    }
  }
  else
  {
    WobPriority = 0LL;
    v102 = 0;
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
            KiSetPriorityThread(CurrentThread, (__int64)&v103, v69, WobPriority);
        }
      }
      CurrentThread->WobPriority = 32;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (v11 & 1) != 0 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v103, CurrentThread->WaitIrql);
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
    v27 = Queue->EntryListHead.Flink;
    p_EntryListHead = &Queue->EntryListHead;
    v29 = 0;
    do
    {
      --Queue->Header.SignalState;
      v30 = v27->Flink;
      if ( !v27->Flink )
        KeBugCheckEx(0x96u, (ULONG_PTR)v27, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)v27[1].Flink);
      v37 = v27->Blink;
      if ( v30->Blink != v27 || v37->Flink != v27 )
        goto LABEL_44;
      v37->Flink = v30;
      v30->Blink = v37;
      v38 = v29++;
      v27->Flink = 0LL;
      EntryArray[v38] = v27;
      v27 = p_EntryListHead->Flink;
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
              KiSetPriorityThread(CurrentThread, (__int64)&v103, v66, WobPriority);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      if ( (v11 & 1) != 0 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v103, CurrentThread->WaitIrql);
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
    v16 = CurrentThread->WaitIrql;
    v104 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v16 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v43, 2LL);
      CurrentThread->WaitIrql = 0;
    }
    v18 = Count;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v19 = 0LL;
        v22 = 257;
        v20 = 257LL;
      }
      else if ( !WaitMode
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v19 = 0LL;
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
        v19 = 0LL;
      }
      if ( !v22 )
      {
LABEL_39:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        v18 = Count;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_40;
      }
    }
    else
    {
      v19 = 0LL;
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !WaitMode )
        goto LABEL_39;
      v20 = 192LL;
    }
    v104 = 0LL;
    v21 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v11, 1LL, (__int64)&v104);
    CurrentThread->ThreadLock = 0LL;
    if ( v21 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v104, v16);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
      __writecr8(v16);
    }
    if ( v20 )
    {
      v33 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v20;
LABEL_76:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v33, v14, WobPriority);
      return v14;
    }
    v19 = 0LL;
LABEL_40:
    v23 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v23 )
    {
      p_QueueListEntry = &CurrentThread->QueueListEntry;
      if ( v23 )
        KiActivateWaiterQueueWithNoLocks(CurrentThread, v23, &CurrentThread->QueueListEntry, 0LL);
      CurrentThread->Queue = &Queue->Header;
      _InterlockedIncrement((volatile signed __int32 *)&Queue->CurrentCount);
      KiAcquireKobjectLockSafe(&Queue->Header.Lock);
      v25 = Queue->ThreadListHead.Blink;
      if ( v25->Flink != &Queue->ThreadListHead )
        goto LABEL_44;
      p_QueueListEntry->Flink = &Queue->ThreadListHead;
      CurrentThread->QueueListEntry.Blink = v25;
      v25->Flink = p_QueueListEntry;
      Queue->ThreadListHead.Blink = p_QueueListEntry;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v19 = 0LL;
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
      v19 = 0LL;
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
      while ( v57->Flink != v57 && v58 < v18 );
      if ( v58 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_188;
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v48 = QuadPart;
    if ( v102 == 2 )
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
      if ( !v102 )
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
    v101 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v52 = (_LIST_ENTRY *)KiCommitThreadWait((ULONG_PTR)CurrentThread, v11, v101);
    WobPriority = 0LL;
    v11 = 0;
    CurrentThread->WaitReason = 0;
    if ( v52 != (_LIST_ENTRY *)256 )
    {
      *EntryArray = v52;
      if ( v18 > 1
        && v52 != (_LIST_ENTRY *)128
        && v52 != (_LIST_ENTRY *)192
        && (unsigned __int64)&v52[-17].Blink + 7 > 1
        && Queue->Header.SignalState )
      {
        v53 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v53, 2LL);
        KiAcquireKobjectLockSafe(&Queue->Header.Lock);
        if ( Queue->Header.SignalState )
          v14 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
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
    KiProcessThreadWaitList((__int64)v62, 1u, 0, 2u);
  KiFastExitThreadWait(v62, (ULONG_PTR)CurrentThread, v11, v19);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTraceDequeueWork(CurrentThread, EntryArray, v58, v63);
  return v58;
}
