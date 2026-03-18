/*
 * XREFs of KiSetClockIntervalOneShot @ 0x140274DA0
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140273F20 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x1404435F0 (KiGetClockIntervalOneShot.c)
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiSetClockIntervalOneShot(__int64 a1, __int64 a2)
{
  int IsEnabledNoReportingNoInline; // eax
  unsigned int ClockIntervalOneShot; // eax
  __int64 v6; // r8

  KiClockOwnerOneShotRequest = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    IsEnabledNoReportingNoInline = Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline();
    KiSetClockTimer((__int64)KeGetCurrentPrcb(), a2, a1, 0, 2, IsEnabledNoReportingNoInline == 0, 1);
  }
  else
  {
    KiSetClockIntervalToMinimumRequested();
  }
  ClockIntervalOneShot = KiGetClockIntervalOneShot(a1, a2);
  LOBYTE(v6) = 1;
  return PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v6);
}
