/*
 * XREFs of KeRemoveQueueEx @ 0x14029EC50
 * Callers:
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x1402A03B0 (KeRemoveQueue.c)
 *     FsRtlWorkerThread @ 0x14057E960 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1405A20E0 (IopPassiveInterruptRealtimeWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x14064E8B0 (ExpWorkerFactoryManagerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x140893A8C (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0 (KiActivateWaiterQueueWithNoLocks.c)
 *     EtwTraceDequeueWork @ 0x1402A0318 (EtwTraceDequeueWork.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAttemptFastRemoveQueue @ 0x14041DB80 (KiAttemptFastRemoveQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE v10; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rsi
  signed __int64 GraceSequenceQuiescent; // rdx
  unsigned __int64 v14; // rcx
  ULONG v15; // r12d
  unsigned __int64 v16; // rbp
  unsigned int v17; // esi
  __int64 v18; // r13
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  struct _KQUEUE *v22; // rdx
  struct _LIST_ENTRY *p_QueueListEntry; // rsi
  __int64 *v24; // r10
  unsigned int v25; // esi
  PLIST_ENTRY *v26; // r15
  int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rax
  unsigned __int8 v33; // bl
  unsigned int v34; // esi
  struct _LIST_ENTRY *v35; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  ULONG v37; // esi
  __int64 v38; // r9
  struct _LIST_ENTRY *v39; // rax
  unsigned int v40; // esi
  __int64 v41; // rax
  unsigned __int64 WaitIrql; // rbx
  unsigned __int64 *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 ThreadTimerDelay; // rdx
  unsigned __int8 v48; // si
  unsigned int v49; // ebp
  ULONG_PTR v50; // rdx
  unsigned __int8 v51; // al
  unsigned int v52; // esi
  __int64 WobPriority; // rcx
  unsigned __int8 v54; // al
  struct _LIST_ENTRY *v55; // rdx
  LIST_ENTRY *v56; // r8
  struct _LIST_ENTRY *v57; // rax
  struct _LIST_ENTRY *v58; // rcx
  __int64 v59; // rax
  struct _KPRCB *v60; // rbp
  unsigned __int8 v61; // al
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned __int8 v64; // al
  unsigned int v65; // edx
  unsigned int v66; // eax
  struct _LIST_ENTRY *v67; // rdx
  struct _LIST_ENTRY *v68; // rcx
  bool v69; // al
  struct _KPRCB *v70; // rcx
  signed __int32 *v71; // r8
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  bool v74; // al
  _LIST_ENTRY *AwaitingCompletion; // rbp
  bool v76; // r8
  struct _KPRCB *v77; // rcx
  signed __int32 *v78; // r8
  signed __int32 v79; // eax
  signed __int32 v80; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v82; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v84; // rax
  struct _KPRCB *v85; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v87; // eax
  signed __int32 v88; // ett
  bool v89; // r8
  _LIST_ENTRY *v90; // rcx
  struct _LIST_ENTRY *v91; // rax
  signed __int32 *v92; // r8
  signed __int32 v93; // ett
  signed __int32 v94[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v95; // [rsp+28h] [rbp-70h]
  int v96; // [rsp+30h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+40h] [rbp-58h]
  _QWORD *v98; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v99; // [rsp+50h] [rbp-48h] BYREF

  v6 = 0;
  v98 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = WaitMode;
  QuadPart = 0LL;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v6 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_7;
    v74 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v76 = v74;
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
          CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
        }
        else
        {
          CurrentPrcb->RcuData.AwaitingCompletion = Flink;
          v82 = AwaitingCompletion->Flink;
          Blink = AwaitingCompletion->Blink;
          if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
            goto LABEL_75;
          Blink->Flink = v82;
          v82->Blink = Blink;
        }
        v84 = AwaitingCompletion[3].Flink;
        AwaitingCompletion->Flink = 0LL;
        AwaitingCompletion[1].Flink = v84[3].Blink;
      }
      if ( v76 )
      {
        v85 = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)v85->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v87 = *SchedulerAssist;
          do
          {
            v88 = v87;
            v87 = _InterlockedCompareExchange(SchedulerAssist, v87 & 0xFFDFFFFF, v87);
          }
          while ( v88 != v87 );
          if ( (v87 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)v85);
        }
        _enable();
      }
      if ( AwaitingCompletion[1].Flink == AwaitingCompletion[1].Blink )
        goto LABEL_279;
      if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) == 0 )
      {
        if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
          KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
        goto LABEL_279;
      }
      v89 = KeDisableInterrupts();
      if ( !AwaitingCompletion->Flink )
      {
        v90 = CurrentPrcb->RcuData.AwaitingCompletion;
        if ( v90 )
        {
          v91 = v90->Blink;
          if ( v91->Flink != v90 )
            goto LABEL_75;
          AwaitingCompletion->Flink = v90;
          AwaitingCompletion->Blink = v91;
          v91->Flink = AwaitingCompletion;
          v90->Blink = AwaitingCompletion;
        }
        else
        {
          AwaitingCompletion->Blink = AwaitingCompletion;
          AwaitingCompletion->Flink = AwaitingCompletion;
          CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
        }
      }
      if ( !v89 )
        goto LABEL_279;
      v77 = KeGetCurrentPrcb();
      v92 = (signed __int32 *)v77->SchedulerAssist;
      if ( !v92 )
        goto LABEL_248;
      _m_prefetchw(v92);
      v79 = *v92;
      do
      {
        v93 = v79;
        v79 = _InterlockedCompareExchange(v92, v79 & 0xFFDFFFFF, v79);
      }
      while ( v93 != v79 );
    }
    else
    {
      if ( !v74 )
      {
LABEL_279:
        v10 = WaitMode;
LABEL_7:
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          v69 = KeDisableInterrupts();
          if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
          {
            CurrentPrcb->RcuData.GracePeriodNeeded = 0;
            _InterlockedOr(v94, 0);
            CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
          }
          if ( v69 )
          {
            v70 = KeGetCurrentPrcb();
            v71 = (signed __int32 *)v70->SchedulerAssist;
            if ( v71 )
            {
              _m_prefetchw(v71);
              v72 = *v71;
              do
              {
                v73 = v72;
                v72 = _InterlockedCompareExchange(v71, v72 & 0xFFDFFFFF, v72);
              }
              while ( v73 != v72 );
              if ( (v72 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v70);
            }
            _enable();
          }
        }
        GraceSequenceQuiescent = CurrentPrcb->RcuData.GraceSequenceQuiescent;
        if ( GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
        {
          v44 = (unsigned __int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
          if ( (*v44 & *(_QWORD *)(v44[1] + 56)) == 0 )
          {
            if ( (unsigned int)KiRcuReportQuiescentState(v44, GraceSequenceQuiescent) )
              KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
          }
        }
        goto LABEL_9;
      }
      v77 = KeGetCurrentPrcb();
      v78 = (signed __int32 *)v77->SchedulerAssist;
      if ( !v78 )
      {
LABEL_248:
        _enable();
        goto LABEL_279;
      }
      _m_prefetchw(v78);
      v79 = *v78;
      do
      {
        v80 = v79;
        v79 = _InterlockedCompareExchange(v78, v79 & 0xFFDFFFFF, v79);
      }
      while ( v80 != v79 );
    }
    if ( (v79 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v77);
    goto LABEL_248;
  }
LABEL_9:
  v14 = 0xFFFFF78000000008uLL;
  v15 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v96 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v96 = 1;
    }
  }
  else
  {
    v96 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue != Queue )
    goto LABEL_16;
  if ( !Queue->Header.SignalState || Queue->CurrentCount > Queue->MaximumCount )
  {
    if ( !Timeout || Timeout->QuadPart )
      goto LABEL_16;
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      v26 = EntryArray;
      v14 = 128LL;
      *EntryArray = (PLIST_ENTRY)128;
    }
    else
    {
      if ( Alertable )
      {
        v40 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v40 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
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
        if ( CurrentThread->Alerted[v10] )
        {
          CurrentThread->Alerted[v10] = 0;
          v41 = 257LL;
        }
        else if ( v10
               && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPendingAll |= 2u;
          v41 = 192LL;
        }
        else if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v41 = 257LL;
        }
        else
        {
          v41 = 0LL;
        }
        if ( v41 )
        {
LABEL_94:
          v26 = EntryArray;
          *EntryArray = (PLIST_ENTRY)v41;
          if ( Alertable )
            CurrentThread->ThreadLock = 0LL;
          goto LABEL_96;
        }
LABEL_93:
        QuadPart = 258LL;
        v41 = 258LL;
        goto LABEL_94;
      }
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v10 )
        goto LABEL_93;
      v26 = EntryArray;
      *EntryArray = (PLIST_ENTRY)192;
    }
LABEL_96:
    if ( v6 >= 2 )
    {
      v52 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v52 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v52);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      WobPriority = CurrentThread->WobPriority;
      v54 = CurrentThread->PriorityFloorCounts[WobPriority];
      if ( !v54 )
        KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, CurrentThread->WobPriority, 2uLL, 0LL);
      v64 = v54 - 1;
      CurrentThread->PriorityFloorCounts[WobPriority] = v64;
      if ( !v64 )
      {
        v65 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
        CurrentThread->PriorityFloorSummary = v65;
        if ( v65 < 1 << WobPriority && CurrentThread->Priority <= 31 )
        {
          v66 = KiComputeThreadPriority(CurrentThread, 0LL);
          if ( (int)v66 < CurrentThread->Priority )
            KiSetPriorityThread(CurrentThread, &v98, v66);
        }
      }
      CurrentThread->WobPriority = 32;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (v6 & 1) != 0 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v98, CurrentThread->WaitIrql);
    }
    else
    {
      WaitIrql = CurrentThread->WaitIrql;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
      __writecr8(WaitIrql);
    }
    goto LABEL_101;
  }
  v34 = 0;
  if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
      {
        HvlNotifyLongSpinWait(v34);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
  }
  if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
  {
    v35 = Queue->EntryListHead.Flink;
    p_EntryListHead = &Queue->EntryListHead;
    v26 = EntryArray;
    v37 = 0;
    v38 = Count;
    do
    {
      --Queue->Header.SignalState;
      v39 = v35->Flink;
      if ( !v35->Flink )
        KeBugCheckEx(0x96u, (ULONG_PTR)v35, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)v35[1].Flink);
      v14 = (unsigned __int64)v35->Blink;
      if ( v39->Blink != v35 || *(struct _LIST_ENTRY **)v14 != v35 )
        goto LABEL_75;
      *(_QWORD *)v14 = v39;
      v39->Blink = (struct _LIST_ENTRY *)v14;
      v45 = v37++;
      v35->Flink = 0LL;
      EntryArray[v45] = v35;
      v35 = p_EntryListHead->Flink;
    }
    while ( p_EntryListHead->Flink != p_EntryListHead && v37 < Count );
    if ( v37 )
    {
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      if ( v6 >= 2 )
      {
        v49 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v49 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
            {
              HvlNotifyLongSpinWait(v49);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v50 = CurrentThread->WobPriority;
        v51 = CurrentThread->PriorityFloorCounts[v50];
        if ( !v51 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v50, 2uLL, 0LL);
        v61 = v51 - 1;
        CurrentThread->PriorityFloorCounts[v50] = v61;
        if ( !v61 )
        {
          v62 = CurrentThread->PriorityFloorSummary ^ (1 << v50);
          CurrentThread->PriorityFloorSummary = v62;
          if ( v62 < 1 << v50 && CurrentThread->Priority <= 31 )
          {
            v63 = KiComputeThreadPriority(CurrentThread, 0LL);
            if ( (int)v63 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, &v98, v63);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      if ( (v6 & 1) != 0 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v98, CurrentThread->WaitIrql);
      }
      else
      {
        v46 = CurrentThread->WaitIrql;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v46);
        __writecr8(v46);
      }
      goto LABEL_119;
    }
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  while ( 1 )
  {
LABEL_16:
    v16 = CurrentThread->WaitIrql;
    v99 = 0LL;
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
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
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v14);
      CurrentThread->WaitIrql = 0;
    }
    v18 = QuadPart;
    if ( Alertable )
    {
      v14 = WaitMode;
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v14 = 257LL;
        v21 = 257;
        v19 = 257LL;
      }
      else if ( !WaitMode
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          v14 = 257LL;
          CurrentThread->Alerted[0] = 0;
          v21 = 257;
          v19 = 257LL;
        }
        else
        {
          v21 = 0;
          v19 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v21 = 192;
        v19 = 192LL;
      }
      if ( !v21 )
      {
LABEL_39:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        v18 = QuadPart;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_40;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !WaitMode )
        goto LABEL_39;
      v19 = 192LL;
    }
    v99 = 0LL;
    v20 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
    CurrentThread->ThreadLock = 0LL;
    if ( v20 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v99, v16);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
      __writecr8(v16);
    }
    if ( v19 )
    {
      v26 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v19;
LABEL_101:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v26, v15, Timeout);
      return v15;
    }
LABEL_40:
    v22 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v22 )
    {
      p_QueueListEntry = &CurrentThread->QueueListEntry;
      if ( v22 )
        KiActivateWaiterQueueWithNoLocks(CurrentThread, v22, &CurrentThread->QueueListEntry);
      CurrentThread->Queue = &Queue->Header;
      _InterlockedIncrement((volatile signed __int32 *)&Queue->CurrentCount);
      KiAcquireKobjectLockSafe(&Queue->Header.Lock);
      v14 = (unsigned __int64)Queue->ThreadListHead.Blink;
      if ( *(PKQUEUE *)v14 != (PKQUEUE)&Queue->ThreadListHead )
        goto LABEL_75;
      p_QueueListEntry->Flink = &Queue->ThreadListHead;
      CurrentThread->QueueListEntry.Blink = (struct _LIST_ENTRY *)v14;
      *(_QWORD *)v14 = p_QueueListEntry;
      Queue->ThreadListHead.Blink = p_QueueListEntry;
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    }
    v24 = (__int64 *)&CurrentThread->320;
    v25 = 0;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
        {
          HvlNotifyLongSpinWait(v25);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      v24 = (__int64 *)&CurrentThread->320;
    }
    v26 = EntryArray;
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v55 = Queue->EntryListHead.Flink;
      v56 = &Queue->EntryListHead;
      v37 = 0;
      do
      {
        --Queue->Header.SignalState;
        v57 = v55->Flink;
        if ( !v55->Flink )
          KeBugCheckEx(0x96u, (ULONG_PTR)v55, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)v55[1].Flink);
        v58 = v55->Blink;
        if ( v57->Blink != v55 || v58->Flink != v55 )
          goto LABEL_75;
        v58->Flink = v57;
        v57->Blink = v58;
        v59 = v37++;
        v55->Flink = 0LL;
        EntryArray[v59] = v55;
        v55 = v56->Flink;
      }
      while ( v56->Flink != v56 && v37 < Count );
      if ( v37 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        goto LABEL_187;
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v27 = v96;
    v28 = v18;
    if ( v96 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v29 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v28 = v18;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v28 = ThreadTimerDelay + v18;
      }
      v27 = v96;
    }
    else
    {
      if ( !v96 )
        goto LABEL_53;
      if ( !v18 )
        goto LABEL_216;
      v29 = MEMORY[0xFFFFF78000000014];
    }
    if ( v29 > v28 )
    {
LABEL_216:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)258;
      goto LABEL_217;
    }
LABEL_53:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v31 = Queue->Header.WaitListHead.Flink;
    if ( v31->Blink != &Queue->Header.WaitListHead )
      goto LABEL_75;
    *v24 = (__int64)v31;
    v24[1] = (__int64)p_WaitListHead;
    v31->Blink = (struct _LIST_ENTRY *)v24;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v24;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    v95 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v32 = (_LIST_ENTRY *)KiCommitThreadWait((ULONG_PTR)CurrentThread, v24, v27, v18, v6, v95);
    v6 = 0;
    CurrentThread->WaitReason = 0;
    if ( v32 != (_LIST_ENTRY *)256 )
    {
      *EntryArray = v32;
      if ( Count > 1
        && v32 != (_LIST_ENTRY *)128
        && v32 != (_LIST_ENTRY *)192
        && (unsigned __int64)&v32[-17].Blink + 7 > 1
        && Queue->Header.SignalState )
      {
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v33);
        KiAcquireKobjectLockSafe(&Queue->Header.Lock);
        if ( Queue->Header.SignalState )
          v15 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
        __writecr8(v33);
      }
      goto LABEL_101;
    }
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v48);
    CurrentThread->WaitIrql = v48;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_228;
  v67 = CurrentThread->QueueListEntry.Flink;
  v68 = CurrentThread->QueueListEntry.Blink;
  if ( v67->Blink != &CurrentThread->QueueListEntry || v68->Flink != &CurrentThread->QueueListEntry )
LABEL_75:
    __fastfail(3u);
  v68->Flink = v67;
  v67->Blink = v68;
  CurrentThread->Queue = 0LL;
LABEL_228:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  *EntryArray = (PLIST_ENTRY)128;
LABEL_217:
  v37 = 1;
LABEL_187:
  CurrentThread->WaitReason = 0;
  v60 = KeGetCurrentPrcb();
  if ( v60->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64 *)v60, 1u, 0, 2u);
  KiFastExitThreadWait(v60, (ULONG_PTR)CurrentThread);
LABEL_119:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTraceDequeueWork(CurrentThread, v26, v37, v38);
  return v37;
}
