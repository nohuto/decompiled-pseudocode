/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1403183C8
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x1402AC34C (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x1402AD63C (KiResetClockIntervalOneShot.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140317740 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x1405B7B04 (KiResetClockInterval.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiSetClockTickRate @ 0x140318120 (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x14043A160 (KiGetClockIntervalOneShot.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 Min; // rax
  unsigned int v1; // ebx
  bool v2; // si
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v4; // r8
  unsigned int v5; // r10d
  LARGE_INTEGER v6; // r11
  unsigned int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  char v11; // dl
  char v12; // di
  unsigned int v13; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v1 = *(_DWORD *)(Min + 28);
  v2 = KeDisableInterrupts();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = -1;
  v6 = InterruptTimePrecise;
  v7 = -1;
  if ( KiClockOwnerOneShotRequest )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockIntervalOneShot)(
           KiClockOwnerOneShotRequest,
           (LARGE_INTEGER)InterruptTimePrecise.QuadPart);
  v8 = KiClockOwnerOneShotCorrectiveRequest;
  if ( (unsigned __int64)KiClockOwnerOneShotCorrectiveRequest > v6.QuadPart
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v9 = KePseudoHrTimeIncrement;
    v10 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v10 = KiLastNonHrTimerExpiration;
      v9 = KeNonHrTimeIncrement;
    }
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockIntervalOneShot)(
           v6.QuadPart + v9 - (v6.QuadPart - v10) % (unsigned __int64)v9,
           (LARGE_INTEGER)v6.QuadPart);
  }
  v11 = 0;
  v12 = 0;
  if ( v7 > v1 || v7 > v5 )
  {
    if ( v5 >= v1 )
    {
      v7 = v1;
      KiClockOwnerOneShotCorrectiveRequest = v6.QuadPart;
    }
    else
    {
      v11 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v8;
      v12 = 1;
      v7 = v5;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v11 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2 && (v7 == KiLastRequestedTimeIncrement || v7 == KeTimeIncrement) )
    v13 = KeTimeIncrement;
  else
    v13 = KiSetClockTickRate(v7, v11);
  if ( v12 )
  {
    LOBYTE(v4.LowPart) = 1;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PoTraceSystemTimerResolutionKernel)(
      v13,
      1129271880LL,
      (LARGE_INTEGER)v4.QuadPart);
  }
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v13;
}
