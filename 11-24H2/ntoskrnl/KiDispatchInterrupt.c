/*
 * XREFs of KiDispatchInterrupt @ 0x1402A32B0
 * Callers:
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeIsUserVaAccessAllowed @ 0x140421850 (KeIsUserVaAccessAllowed.c)
 *     KiSwapStacksAndRetireDpcList @ 0x1406B39C0 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
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
      if ( v3 > qword_140FC7508 && v3 <= qword_140FC74F8 )
        *(_QWORD *)(a2 + 360) = qword_140FC7508;
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
      KiRcuCheckQuiescent(CurrentPrcb);
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
      return KiAbProcessPostContextSwitch(CurrentThread);
    }
  }
  return result;
}
