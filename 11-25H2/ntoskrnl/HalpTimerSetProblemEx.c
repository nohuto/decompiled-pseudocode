/*
 * XREFs of HalpTimerSetProblemEx @ 0x1404F70E4
 * Callers:
 *     HalpTimerClockArm @ 0x14028F320 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpInitializePnTimers @ 0x140537DA0 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x140537E60 (HalpInitializeTimers.c)
 *     HalpTimerInitialize @ 0x140538BB8 (HalpTimerInitialize.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C5C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSelectRoles @ 0x140539098 (HalpTimerSelectRoles.c)
 *     HalpTimerClockInitialize @ 0x140544110 (HalpTimerClockInitialize.c)
 *     HalpTimerInitializeClock @ 0x140544404 (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140547684 (HalpTimerRestartProfileInterrupt.c)
 *     HalUpdateTimerCapabilities @ 0x14055D6B0 (HalUpdateTimerCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  HalpTimerLastProblem = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 272) = a5;
    *(_DWORD *)(a1 + 252) = a2;
    *(_DWORD *)(a1 + 256) = a3;
    *(_QWORD *)(a1 + 264) = a4;
  }
  return result;
}
