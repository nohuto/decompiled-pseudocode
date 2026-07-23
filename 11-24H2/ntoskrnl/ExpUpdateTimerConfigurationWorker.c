/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x140317740
 * Callers:
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KeSetTimeAdjustment @ 0x140317AD8 (KeSetTimeAdjustment.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 CurrentIrql; // rcx
  unsigned int v6; // esi
  unsigned __int64 Root; // rdx
  BOOLEAN v8; // r8
  unsigned __int64 v9; // rax
  LARGE_INTEGER InterruptTimePrecise; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  int v14; // edi
  _QWORD *v15; // rcx
  _BYTE *v16; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

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
    v6 = ExpLastRequestedTime;
    if ( byte_140EFED78 )
      RtlRbRemoveNode(&KiClockIntervalRequests, &ExpClockIntervalRequest);
    dword_140EFED7C = v6;
    if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
    {
      if ( KiClockIntervalRequests.Root )
        Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
      else
        Root = 0LL;
    }
    else
    {
      Root = (unsigned __int64)KiClockIntervalRequests.Root;
    }
    v8 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v6 >= *(_DWORD *)(Root + 28) )
        {
          v9 = *(_QWORD *)(Root + 8);
          if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_17;
            v9 ^= Root;
          }
          if ( !v9 )
          {
LABEL_17:
            v8 = 1;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)Root;
          if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
          {
            if ( !v9 )
              break;
            v9 ^= Root;
          }
          if ( !v9 )
            break;
        }
        Root = v9;
      }
    }
    RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v8, &ExpClockIntervalRequest);
    byte_140EFED78 = 1;
    KePseudoHrTimeIncrement = v6;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      else
        InterruptTimePrecise.QuadPart = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiSetClockTimerKTimerDeadlines)(
        KeGetCurrentPrcb(),
        (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
        0LL);
      LOBYTE(v11) = 1;
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiSetNextClockTickDueTime)(
              (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
              v11);
    }
    else
    {
      v12 = KiSetClockIntervalToMinimumRequested();
    }
    v14 = v12;
    if ( dword_140EFED80 )
    {
      LOBYTE(v13) = 1;
      PoTraceSystemTimerResolutionKernel(v6, (unsigned int)dword_140EFED80, v13);
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
