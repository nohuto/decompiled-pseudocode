/*
 * XREFs of KiDispatchInterrupt @ 0x14032E330
 * Callers:
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KeIsUserVaAccessAllowed @ 0x140434110 (KeIsUserVaAccessAllowed.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiSwapStacksAndRetireDpcList @ 0x1406A7750 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 */

char __fastcall KiDispatchInterrupt(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  unsigned __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v8; // rcx
  signed __int32 *SchedulerAssist; // r8
  char result; // al
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // edi
  _KTHREAD *NextThread; // rdi
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 GroupSetMember; // rcx
  char IsUserVaAccessAllowed; // bl
  __int64 v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett

  if ( a2 )
  {
    v4 = *(_WORD *)(a2 + 368);
    v5 = *(_QWORD *)(a2 + 360);
    if ( v4 == 51 )
    {
      if ( v5 > qword_140FC64C8 && v5 <= qword_140FC64B8 )
        *(_QWORD *)(a2 + 360) = qword_140FC64C8;
    }
    else if ( v4 == 16
           && v5 > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && v5 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a2 + 48) |= 0x10000uLL;
    }
  }
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  *(_BYTE *)(CurrentThread + 390) = a1;
  if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
    KiSwapStacksAndRetireDpcList(CurrentPrcb, CurrentPrcb->DpcStack);
  v8 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v8->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v20 = *SchedulerAssist;
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
    }
    while ( v21 != v20 );
    if ( (v20 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v8);
  }
  _enable();
  result = CurrentPrcb->QuantumEnd;
  if ( result )
  {
    CurrentPrcb->QuantumEnd = 0;
    return KiQuantumEnd();
  }
  else if ( CurrentPrcb->NextThread )
  {
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
      || (result = KiDeferGroupSchedulingPreemption(CurrentThread, CurrentPrcb)) == 0 )
    {
      KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread, (__int64)SchedulerAssist, a4);
      KiRcuCheckQuiescent(CurrentPrcb, v11, v12);
      KiAbProcessPreContextSwitch((_QWORD *)CurrentThread, 0);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
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
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NextThread->WaitBlock[2].SpareLong;
      NextThread->WaitBlockFill6[68] = 2;
      if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v13) )
      {
        SchedulerSubNode = CurrentPrcb->SchedulerSubNode;
        GroupSetMember = CurrentPrcb->GroupSetMember;
        if ( (SchedulerSubNode->StealableStandbyThreads & GroupSetMember) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)&SchedulerSubNode->StealableStandbyThreads, ~GroupSetMember);
      }
      *(_BYTE *)(CurrentThread + 643) = 31;
      KiQueueReadyThread(CurrentPrcb);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v19) = 1;
      KiSwapContext(CurrentThread, NextThread, v19);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return KiAbProcessPostContextSwitch(CurrentThread);
    }
  }
  return result;
}
