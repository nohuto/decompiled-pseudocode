/*
 * XREFs of HalpTimerSetProblemEx @ 0x1404F98E4
 * Callers:
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpInitializePnTimers @ 0x14053A550 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14053B40C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 *     HalpTimerClockInitialize @ 0x140546A00 (HalpTimerClockInitialize.c)
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140549F74 (HalpTimerRestartProfileInterrupt.c)
 *     HalUpdateTimerCapabilities @ 0x14055FFB0 (HalUpdateTimerCapabilities.c)
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
