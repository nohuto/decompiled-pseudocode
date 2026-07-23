/*
 * XREFs of KeRemovePriQueue @ 0x14032F920
 * Callers:
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402CCFD8 (KiAdjustRealtimePriorityFloor.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402D6CB0 (KiAttemptFastRemovePriQueue.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x1403308C0 (KiCheckWaitNext.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1404476F4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiSwitchPriQueue @ 0x14048E740 (KiSwitchPriQueue.c)
 *     EtwTracePriQDequeueWork @ 0x1404B8244 (EtwTracePriQDequeueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRemovePriQueue(_DISPATCHER_HEADER *BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  $0C9BAADE586F3878B709A13404AA1ECE *v6; // r12
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v16; // rcx
  volatile unsigned int ThreadTimerDelay; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v25; // esi
  __int64 v26; // r14
  int v27; // esi
  __int64 QueuePriority; // rax
  unsigned int v29; // eax
  int Priority; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 updated; // rax
  struct _KPRCB *v33; // r8
  unsigned __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r8
  struct _KPRCB *v39; // rsi
  unsigned int v40; // esi
  int v41; // r8d
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  unsigned int v47; // [rsp+30h] [rbp-10h] BYREF
  int v48; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v49; // [rsp+38h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v49 = 0LL;
  v47 = 0;
  v48 = 0;
  v6 = &CurrentThread->320;
  v7 = KiCheckWaitNext((_DWORD)CurrentThread, a4, 0, (unsigned int)&v49, (__int64)&v48);
  while ( 1 )
  {
    v8 = KiBeginThreadWait((ULONG_PTR)CurrentThread, v7);
    v9 = v8;
    if ( v8 )
    {
LABEL_30:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTracePriQDequeueWork(CurrentThread, v9);
      return v9;
    }
    if ( BugCheckParameter2 != CurrentThread->Queue )
      KiSwitchPriQueue(CurrentThread, BugCheckParameter2);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    KiAcquireKobjectLockSafe(&BugCheckParameter2->Lock);
    if ( BugCheckParameter2->SignalState )
    {
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v25 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v25);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v26 = (__int64)KiAttemptFastRemovePriQueue(
                       (ULONG_PTR)BugCheckParameter2,
                       (int *)&v47,
                       (unsigned __int8)CurrentThread->QueuePriority);
      if ( v26 )
      {
        v27 = v47;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v47 )
        {
          v41 = CurrentThread->QueuePriority & 0x100;
          if ( !v41 )
          {
            Queue = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&Queue[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (int)v47);
            v27 = v47;
          }
          CurrentThread->QueuePriority = (unsigned __int8)v27 | v41;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v47);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread, v27);
        v29 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
        Priority = CurrentThread->Priority;
        v47 = v29;
        if ( v29 != Priority )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( CurrentPrcb->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, CurrentThread, 0LL);
            v33 = KeGetCurrentPrcb();
            CycleTime = updated;
            SchedulerAssist = (signed __int32 *)v33->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v42 = *SchedulerAssist;
              do
              {
                v43 = v42;
                v42 = _InterlockedCompareExchange(SchedulerAssist, v42 & 0xFFDFFFFF, v42);
              }
              while ( v43 != v42 );
              if ( (v42 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v33);
            }
            _enable();
          }
          v36 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)CurrentThread);
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v38 = v47;
          CurrentThread->QuantumTarget = v36;
          KiSetPriorityThread(CurrentThread, 0LL, v38, v37);
        }
LABEL_51:
        v10 = 2LL;
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_52;
      }
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (BugCheckParameter2->Signalling & 1) != 0 )
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
      if ( CurrentThread->Queue == BugCheckParameter2 )
      {
        CurrentThread->Queue = 0LL;
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_19:
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      v26 = 128LL;
      goto LABEL_51;
    }
    v10 = 2LL;
    v11 = v49;
    if ( v48 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v12 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v11 = v49;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && ThreadTimerDelay )
      {
        v11 = v49 + ThreadTimerDelay;
      }
      goto LABEL_11;
    }
    if ( v48 )
      break;
LABEL_12:
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    v14 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = v14 | 0x100;
    p_WaitListHead = &BugCheckParameter2->WaitListHead;
    _InterlockedDecrement((volatile signed __int32 *)&BugCheckParameter2[22].WaitListHead + v14);
    CurrentThread->ThreadLock = 0LL;
    v16 = BugCheckParameter2->WaitListHead.Flink;
    if ( v16->Blink != &BugCheckParameter2->WaitListHead )
      goto LABEL_19;
    v6->WaitBlock[0].WaitListEntry.Flink = v16;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v16->Blink = (struct _LIST_ENTRY *)v6;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v6;
    _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
    v18 = v49;
    v19 = v48;
    CurrentThread->WaitBlockCount = 1;
    v20 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v19, v18, v7, 0LL);
    v7 = 0;
    v9 = v20;
    CurrentThread->WaitReason = 0;
    if ( v20 != 256 )
      goto LABEL_30;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = 2;
      LOBYTE(v22) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v22, v21);
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( !v49 )
    goto LABEL_83;
  v12 = MEMORY[0xFFFFF78000000014];
LABEL_11:
  if ( v12 <= v11 )
    goto LABEL_12;
LABEL_83:
  v26 = 258LL;
LABEL_52:
  _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v39 = KeGetCurrentPrcb();
  if ( v39->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v39, 1u, 0, 2u);
  KiFastExitThreadWait(v39, (ULONG_PTR)CurrentThread, v7, v10);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTracePriQDequeueWork(CurrentThread, v26);
  return v26;
}
