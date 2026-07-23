/*
 * XREFs of HalpTimerSetProblemEx @ 0x1404F71C4
 * Callers:
 *     HalpTimerClockArm @ 0x140375660 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x140375A30 (HalpSetTimer.c)
 *     HalpInitializePnTimers @ 0x140537D90 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x140537E50 (HalpInitializeTimers.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C4C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerReinitializeThisProcessor @ 0x140538F60 (HalpTimerReinitializeThisProcessor.c)
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 *     HalpTimerClockInitialize @ 0x1405442C0 (HalpTimerClockInitialize.c)
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140547834 (HalpTimerRestartProfileInterrupt.c)
 *     HalUpdateTimerCapabilities @ 0x14055DBE0 (HalUpdateTimerCapabilities.c)
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
