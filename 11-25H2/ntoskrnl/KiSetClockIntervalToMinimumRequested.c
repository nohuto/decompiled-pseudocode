/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140277C78
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x140274DA0 (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x140274F28 (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockTickRate @ 0x140276FBC (KiSetClockTickRate.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetClockIntervalOneShot @ 0x1404435F0 (KiGetClockIntervalOneShot.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  char v5; // si
  __int64 InterruptTimePrecise; // rax
  unsigned int v7; // r10d
  unsigned __int64 v8; // r11
  unsigned int ClockIntervalOneShot; // r9d
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned __int8 v13; // dl
  char v14; // di
  unsigned int v15; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0LL;
  if ( (qword_140E66478 & 1) != 0 )
  {
    if ( qword_140E66478 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140E66478 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v3 = qword_140E66478;
  }
  v4 = *(_DWORD *)(v3 + 28);
  v5 = KeDisableInterrupts(qword_140E66478, a2, a3);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v21);
  v7 = -1;
  v8 = InterruptTimePrecise;
  ClockIntervalOneShot = -1;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise);
  v10 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > v8
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v11 = KePseudoHrTimeIncrement;
    v12 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v12 = KiLastNonHrTimerExpiration;
      v11 = KeNonHrTimeIncrement;
    }
    v7 = KiGetClockIntervalOneShot(v8 + v11 - (v8 - v12) % v11, v8);
  }
  v13 = 0;
  v14 = 0;
  if ( ClockIntervalOneShot > v4 || ClockIntervalOneShot > v7 )
  {
    if ( v7 >= v4 )
    {
      ClockIntervalOneShot = v4;
      KiClockOwnerOneShotCorrectiveRequest = v8;
    }
    else
    {
      v13 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v10;
      v14 = 1;
      ClockIntervalOneShot = v7;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v13 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && (ClockIntervalOneShot == KiLastRequestedTimeIncrement || ClockIntervalOneShot == KeTimeIncrement) )
  {
    v15 = KeTimeIncrement;
  }
  else
  {
    v15 = KiSetClockTickRate(ClockIntervalOneShot, v13);
  }
  if ( v14 )
    PoTraceSystemTimerResolutionKernel(v15, 1129271880, 1);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return v15;
}
