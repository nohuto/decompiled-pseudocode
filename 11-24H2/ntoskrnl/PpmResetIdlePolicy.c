/*
 * XREFs of PpmResetIdlePolicy @ 0x1404372B8
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x1404369D0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x140436C00 (PpmInstallNewIdleStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PpmApplyIdlePolicy @ 0x1404372F8 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x1404373E4 (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x1404374C4 (PpmScaleIdleStateValues.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues(a1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
