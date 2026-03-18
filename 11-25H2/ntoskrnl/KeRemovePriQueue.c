/*
 * XREFs of KeRemovePriQueue @ 0x140305410
 * Callers:
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14020D7F0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402A1AE0 (KiAttemptFastRemovePriQueue.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402E673C (KiAdjustRealtimePriorityFloor.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSwitchPriQueue @ 0x140494D80 (KiSwitchPriQueue.c)
 *     EtwTracePriQDequeueWork @ 0x1404BE5B4 (EtwTracePriQDequeueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRemovePriQueue(_DISPATCHER_HEADER *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  $748129697366ACACF652522F4AB73961 *v6; // r12
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rcx
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v16; // rcx
  volatile unsigned int ThreadTimerDelay; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v24; // esi
  __int64 v25; // r14
  int v26; // esi
  __int64 QueuePriority; // rax
  int v28; // eax
  char v29; // dl
  int Priority; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 updated; // rax
  struct _KPRCB *v33; // r8
  unsigned __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // rdx
  unsigned __int64 v36; // rcx
  int v37; // r8d
  struct _KPRCB *v38; // rsi
  unsigned int v39; // esi
  int v40; // r8d
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  int v46; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v48; // [rsp+38h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v48 = 0LL;
  v46 = 0;
  v47 = 0;
  v6 = &CurrentThread->320;
  v7 = KiCheckWaitNext((struct _KPRCB *)CurrentThread, a4, 0LL, &v48, &v47);
  while ( 1 )
  {
    v8 = KiBeginThreadWait((ULONG_PTR)CurrentThread, v7);
    v9 = v8;
    if ( v8 )
    {
LABEL_27:
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
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v25 = (__int64)KiAttemptFastRemovePriQueue(
                       (ULONG_PTR)BugCheckParameter2,
                       &v46,
                       (unsigned __int8)CurrentThread->QueuePriority);
      if ( v25 )
      {
        v26 = v46;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v46 )
        {
          v40 = CurrentThread->QueuePriority & 0x100;
          if ( !v40 )
          {
            Queue = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&Queue[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + v46);
            v26 = v46;
          }
          CurrentThread->QueuePriority = (unsigned __int8)v26 | v40;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, &v46);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread, v26);
        v28 = KiComputeThreadPriority((__int64)CurrentThread, 0);
        Priority = CurrentThread->Priority;
        v46 = v28;
        if ( v28 != Priority )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( CurrentPrcb->NestingLevel == v29 )
          {
            _disable();
            updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, CurrentThread, 0LL);
            v33 = KeGetCurrentPrcb();
            CycleTime = updated;
            SchedulerAssist = (signed __int32 *)v33->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v41 = *SchedulerAssist;
              do
              {
                v42 = v41;
                v41 = _InterlockedCompareExchange(SchedulerAssist, v41 & 0xFFDFFFFF, v41);
              }
              while ( v42 != v41 );
              if ( (v41 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v33);
            }
            _enable();
          }
          else
          {
            CycleTime = CurrentThread->CycleTime;
          }
          v36 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)CurrentThread);
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v37 = v46;
          CurrentThread->QuantumTarget = v36;
          KiSetPriorityThread(CurrentThread, 0LL, v37);
        }
LABEL_51:
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_52;
      }
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (BugCheckParameter2->Signalling & 1) != 0 )
    {
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v39 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v39);
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
      v25 = 128LL;
      goto LABEL_51;
    }
    v11 = v47;
    v12 = v48;
    if ( v47 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v11 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v12 = v48;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && ThreadTimerDelay )
      {
        v12 = v48 + ThreadTimerDelay;
      }
      goto LABEL_11;
    }
    if ( v47 )
      break;
LABEL_12:
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
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
    v18 = v48;
    v19 = v47;
    CurrentThread->WaitBlockCount = 1;
    v20 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v19, v18, v7, 0LL);
    v7 = 0;
    v9 = v20;
    CurrentThread->WaitReason = 0;
    if ( v20 != 256 )
      goto LABEL_27;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v21);
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( !v48 )
    goto LABEL_83;
  v11 = MEMORY[0xFFFFF78000000014];
LABEL_11:
  if ( v11 <= v12 )
    goto LABEL_12;
LABEL_83:
  v25 = 258LL;
LABEL_52:
  _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v38 = KeGetCurrentPrcb();
  if ( v38->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64 *)v38, 1u, 0, 2u);
  KiFastExitThreadWait(v38, (ULONG_PTR)CurrentThread, v7);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTracePriQDequeueWork(CurrentThread, v25);
  return v25;
}
