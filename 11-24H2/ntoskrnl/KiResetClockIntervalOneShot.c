/*
 * XREFs of KiResetClockIntervalOneShot @ 0x1402AD63C
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402AB5D0 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockIntervalToMinimumRequested @ 0x1403183C8 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiCancelClockTimer @ 0x140462E90 (KiCancelClockTimer.c)
 */

__int64 __fastcall KiResetClockIntervalOneShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8

  result = KiClockOwnerOneShotRequest;
  if ( KiClockOwnerOneShotRequest )
  {
    LOBYTE(a3) = 1;
    PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      LOBYTE(v4) = 1;
      return KiCancelClockTimer(KeGetCurrentPrcb(), 2LL, v4);
    }
    else
    {
      return KiSetClockIntervalToMinimumRequested();
    }
  }
  return result;
}
