/*
 * XREFs of KiSetClockTimerKTimerDeadlines @ 0x140277BC0
 * Callers:
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KiResumeClockTimer @ 0x1404F2E04 (KiResumeClockTimer.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall KiSetClockTimerKTimerDeadlines(__int64 a1, LARGE_INTEGER a2, char a3)
{
  __int64 v4; // rbx
  char v7; // r14
  char result; // al

  v4 = KiLastPseudoHrTimerExpiration + KePseudoHrTimeIncrement;
  v7 = (unsigned int)Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline() == 0;
  result = KiSetClockTimer(a1, a2, v4, KeMinimumIncrement, 1, v7, 0);
  if ( a3 )
  {
    if ( KiClockOwnerOneShotRequest )
      return KiSetClockTimer(a1, a2, KiClockOwnerOneShotRequest, 0, 2, v7, 0);
  }
  return result;
}
