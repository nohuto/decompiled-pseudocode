/*
 * XREFs of KiDispatchInterrupt @ 0x1402936B0
 * Callers:
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x140206480 (KiRcuCheckQuiescent.c)
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeIsUserVaAccessAllowed @ 0x14042FDA0 (KeIsUserVaAccessAllowed.c)
 *     KiSwapStacksAndRetireDpcList @ 0x1406B2A20 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 */

__int64 __fastcall KiDispatchInterrupt(unsigned __int8 a1, __int64 a2)
{
  __int16 v2; // r8
  unsigned __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // rsi
  struct _KPRCB *v6; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  unsigned int v9; // edi
  _KTHREAD *NextThread; // rdi
  char IsUserVaAccessAllowed; // bl
  __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett

  if ( a2 )
  {
    v2 = *(_WORD *)(a2 + 368);
    v3 = *(_QWORD *)(a2 + 360);
    if ( v2 == 51 )
    {
      if ( v3 > qword_140FC6488 && v3 <= qword_140FC6478 )
        *(_QWORD *)(a2 + 360) = qword_140FC6488;
    }
    else if ( v2 == 16
           && v3 > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && v3 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a2 + 48) |= 0x10000uLL;
    }
  }
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  CurrentThread->WaitIrql = a1;
  if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
    KiSwapStacksAndRetireDpcList(CurrentPrcb, CurrentPrcb->DpcStack);
  v6 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v6->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v13 = *SchedulerAssist;
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v6);
  }
  _enable();
  result = CurrentPrcb->QuantumEnd;
  if ( (_BYTE)result )
  {
    CurrentPrcb->QuantumEnd = 0;
    return KiQuantumEnd();
  }
  else if ( CurrentPrcb->NextThread )
  {
    if ( (CurrentThread->Header.Size & 4) == 0
      || (result = KiDeferGroupSchedulingPreemption(CurrentThread, CurrentPrcb), !(_BYTE)result) )
    {
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, CurrentThread);
      KiRcuCheckQuiescent((__int64)CurrentPrcb);
      KiAbProcessPreContextSwitch(CurrentThread, 0LL);
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
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
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
      CurrentThread->WaitReason = 31;
      KiQueueReadyThread(CurrentPrcb);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v12) = 1;
      KiSwapContext(CurrentThread, NextThread, v12);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return KiAbProcessPostContextSwitch((__int64)CurrentThread);
    }
  }
  return result;
}
