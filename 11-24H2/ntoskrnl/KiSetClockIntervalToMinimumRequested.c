/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1402A0A58
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x14029D85C (KiSetClockIntervalOneShot.c)
 *     KiResetClockIntervalOneShot @ 0x14029EB4C (KiResetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14029FDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetClockTickRate @ 0x1402A07B0 (KiSetClockTickRate.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiGetClockIntervalOneShot @ 0x1404446C0 (KiGetClockIntervalOneShot.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  char v5; // si
  __int64 InterruptTimePrecise; // rax
  __int64 v7; // r8
  unsigned int v8; // r10d
  unsigned __int64 v9; // r11
  __int64 ClockIntervalOneShot; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char v14; // dl
  char v15; // di
  unsigned int v16; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v22 = 0LL;
  if ( (qword_140E66758 & 1) != 0 )
  {
    if ( qword_140E66758 == 1 )
      v3 = 0LL;
    else
      v3 = qword_140E66758 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v3 = qword_140E66758;
  }
  v4 = *(_DWORD *)(v3 + 28);
  v5 = KeDisableInterrupts(qword_140E66758, a2, a3);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
  v8 = -1;
  v9 = InterruptTimePrecise;
  ClockIntervalOneShot = 0xFFFFFFFFLL;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise);
  v11 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > v9
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v12 = KePseudoHrTimeIncrement;
    v13 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v13 = KiLastNonHrTimerExpiration;
      v12 = KeNonHrTimeIncrement;
    }
    v8 = KiGetClockIntervalOneShot(v9 + v12 - (v9 - v13) % v12, v9);
  }
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)ClockIntervalOneShot > v4 || (unsigned int)ClockIntervalOneShot > v8 )
  {
    if ( v8 >= v4 )
    {
      ClockIntervalOneShot = v4;
      KiClockOwnerOneShotCorrectiveRequest = v9;
    }
    else
    {
      v14 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v11;
      v15 = 1;
      ClockIntervalOneShot = v8;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v14 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && ((_DWORD)ClockIntervalOneShot == KiLastRequestedTimeIncrement || (_DWORD)ClockIntervalOneShot == KeTimeIncrement) )
  {
    v16 = KeTimeIncrement;
  }
  else
  {
    v16 = KiSetClockTickRate(ClockIntervalOneShot, v14, v7, ClockIntervalOneShot);
  }
  if ( v15 )
  {
    LOBYTE(v7) = 1;
    PoTraceSystemTimerResolutionKernel(v16, 1129271880LL, v7);
  }
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v19 = *SchedulerAssist;
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v16;
}
