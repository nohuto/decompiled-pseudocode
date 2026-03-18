/*
 * XREFs of KeRemovePriQueue @ 0x140208340
 * Callers:
 *     ExpWorkerThread @ 0x140207CC0 (ExpWorkerThread.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KiCheckWaitNext @ 0x1402092E0 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x140324448 (KiAdjustRealtimePriorityFloor.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAttemptFastRemovePriQueue @ 0x140433950 (KiAttemptFastRemovePriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140452644 (KiSetBasePriorityAndClearDecrement.c)
 *     KiSwitchPriQueue @ 0x140493CB4 (KiSwitchPriQueue.c)
 *     EtwTracePriQDequeueWork @ 0x1404BD0D4 (EtwTracePriQDequeueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRemovePriQueue(_DISPATCHER_HEADER *BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  $170BED6759C51D14495B6D160899A925 *v6; // r12
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
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 CurrentIrql; // si
  unsigned int v24; // esi
  __int64 v25; // r14
  unsigned __int8 v26; // si
  __int64 QueuePriority; // rax
  unsigned int v28; // eax
  int Priority; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 updated; // rax
  struct _KPRCB *v32; // r8
  unsigned __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  struct _KPRCB *v37; // rsi
  unsigned int v38; // esi
  int v39; // r8d
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  unsigned int v45; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v46; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v47 = 0LL;
  v45 = 0;
  v46 = 0;
  v6 = &CurrentThread->320;
  v7 = KiCheckWaitNext((_DWORD)CurrentThread, a4, 0, (unsigned int)&v47, (__int64)&v46);
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
    KiAcquireKobjectLockSafe(BugCheckParameter2);
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
      v25 = KiAttemptFastRemovePriQueue((ULONG_PTR)BugCheckParameter2);
      if ( v25 )
      {
        v26 = v45;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v45 )
        {
          v39 = CurrentThread->QueuePriority & 0x100;
          if ( !v39 )
          {
            Queue = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&Queue[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (int)v45);
            v26 = v45;
          }
          CurrentThread->QueuePriority = v26 | v39;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v45);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread);
        v28 = KiComputeThreadPriority(CurrentThread, 0LL, 0LL);
        Priority = CurrentThread->Priority;
        v45 = v28;
        if ( v28 != Priority )
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
            v32 = KeGetCurrentPrcb();
            CycleTime = updated;
            SchedulerAssist = (signed __int32 *)v32->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v40 = *SchedulerAssist;
              do
              {
                v41 = v40;
                v40 = _InterlockedCompareExchange(SchedulerAssist, v40 & 0xFFDFFFFF, v40);
              }
              while ( v41 != v40 );
              if ( (v40 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
            _enable();
          }
          v35 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(CurrentThread);
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v36 = v45;
          CurrentThread->QuantumTarget = v35;
          KiSetPriorityThread(CurrentThread, 0LL, v36);
        }
LABEL_51:
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_52;
      }
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (BugCheckParameter2->Signalling & 1) != 0 )
    {
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v38 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v38);
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
    v11 = v46;
    v12 = v47;
    if ( v46 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v11 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v12 = v47;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && ThreadTimerDelay )
      {
        v12 = v47 + ThreadTimerDelay;
      }
      goto LABEL_11;
    }
    if ( v46 )
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
    CurrentThread->WaitBlockCount = 1;
    v18 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v7, 0LL);
    v7 = 0;
    v9 = v18;
    CurrentThread->WaitReason = 0;
    if ( v18 != 256 )
      goto LABEL_30;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v19) = 2;
      LOBYTE(v20) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v20, v19, v21);
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( !v47 )
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
  v37 = KeGetCurrentPrcb();
  if ( v37->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v37, 1LL);
  KiFastExitThreadWait(v37, (ULONG_PTR)CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTracePriQDequeueWork(CurrentThread, v25);
  return v25;
}
