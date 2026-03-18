/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x140277560
 * Callers:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     KeSetTimeAdjustment @ 0x1402778F4 (KeSetTimeAdjustment.c)
 *     KiSetNextClockTickDueTime @ 0x140277974 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // r8
  __int64 CurrentIrql; // rcx
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 InterruptTimePrecise; // rdi
  __int64 v11; // rdx
  int ClockTickDueTime; // eax
  int v13; // edi
  _QWORD *v14; // rcx
  _BYTE *v15; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  char v18; // [rsp+48h] [rbp+10h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v7 = ExpLastRequestedTime;
    if ( byte_140EFE598 )
      RtlRbRemoveNode(&KiClockIntervalRequests, &ExpClockIntervalRequest);
    dword_140EFE59C = v7;
    if ( (qword_140E66478 & 1) != 0 )
    {
      if ( KiClockIntervalRequests )
        v8 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = KiClockIntervalRequests;
    }
    LOBYTE(v5) = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v7 >= *(_DWORD *)(v8 + 28) )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( (qword_140E66478 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_17;
            v9 ^= v8;
          }
          if ( !v9 )
          {
LABEL_17:
            LOBYTE(v5) = 1;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)v8;
          if ( (qword_140E66478 & 1) != 0 )
          {
            if ( !v9 )
              break;
            v9 ^= v8;
          }
          if ( !v9 )
            break;
        }
        v8 = v9;
      }
    }
    RtlRbInsertNodeEx(&KiClockIntervalRequests, v8, v5, &ExpClockIntervalRequest);
    byte_140EFE598 = 1;
    KePseudoHrTimeIncrement = v7;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v18);
      else
        InterruptTimePrecise = 0LL;
      KiSetClockTimerKTimerDeadlines(KeGetCurrentPrcb(), InterruptTimePrecise, 0LL);
      LOBYTE(v11) = 1;
      ClockTickDueTime = KiSetNextClockTickDueTime(InterruptTimePrecise, v11);
    }
    else
    {
      ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
    }
    v13 = ClockTickDueTime;
    if ( dword_140EFE5A0 )
      PoTraceSystemTimerResolutionKernel(v7, dword_140EFE5A0, 1);
    KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
    **(_DWORD **)a2 = v13;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&ExpKernelResolutionLock, 0LL);
  else
    KiReleaseSpinLockInstrumented(&ExpKernelResolutionLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 15;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(0xFuLL);
  v14 = *(_QWORD **)(a2 + 8);
  if ( v14 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v14);
  v15 = *(_BYTE **)(a2 + 16);
  if ( v15 )
  {
    LOBYTE(v15) = *v15;
    KeTimeSynchronization = (char)v15;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = v4;
    LOBYTE(v15) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(v4);
  return (char)v15;
}
