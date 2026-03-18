/*
 * XREFs of KiResetClockIntervalOneShot @ 0x140274F28
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140273F20 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
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
