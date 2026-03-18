/*
 * XREFs of KiSetClockIntervalOneShot @ 0x14029D85C
 * Callers:
 *     KiCheckForTimerExpiration @ 0x14029CAE0 (KiCheckForTimerExpiration.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x14029D018 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x1404446C0 (KiGetClockIntervalOneShot.c)
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
    KiSetClockTimer((unsigned int)KeGetCurrentPrcb(), a2, a1, 0, 2, IsEnabledNoReportingNoInline == 0, 1);
  }
  else
  {
    KiSetClockIntervalToMinimumRequested();
  }
  ClockIntervalOneShot = KiGetClockIntervalOneShot(a1, a2);
  LOBYTE(v6) = 1;
  return PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v6);
}
