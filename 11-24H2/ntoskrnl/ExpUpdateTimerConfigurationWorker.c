/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14029FDD0
 * Callers:
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 *     KeSetTimeAdjustment @ 0x1402A0168 (KeSetTimeAdjustment.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v13; // r8
  int v14; // edi
  _QWORD *v15; // rcx
  _BYTE *v16; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  char v19; // [rsp+48h] [rbp+10h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
  }
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v7 = ExpLastRequestedTime;
    if ( byte_140EFE8F8 )
      RtlRbRemoveNode(&KiClockIntervalRequests, &ExpClockIntervalRequest);
    dword_140EFE8FC = v7;
    if ( (qword_140E66758 & 1) != 0 )
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
          if ( (qword_140E66758 & 1) != 0 )
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
          if ( (qword_140E66758 & 1) != 0 )
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
    byte_140EFE8F8 = 1;
    KePseudoHrTimeIncrement = v7;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
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
    v14 = ClockTickDueTime;
    if ( dword_140EFE900 )
    {
      LOBYTE(v13) = 1;
      PoTraceSystemTimerResolutionKernel(v7, (unsigned int)dword_140EFE900, v13);
    }
    KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
    **(_DWORD **)a2 = v14;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&ExpKernelResolutionLock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&ExpKernelResolutionLock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 15;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(0xFuLL);
  v15 = *(_QWORD **)(a2 + 8);
  if ( v15 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v15);
  v16 = *(_BYTE **)(a2 + 16);
  if ( v16 )
  {
    LOBYTE(v16) = *v16;
    KeTimeSynchronization = (char)v16;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = v4;
    LOBYTE(v16) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(v4);
  return (char)v16;
}
