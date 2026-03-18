/*
 * XREFs of PpmResetIdlePolicy @ 0x1403E7B88
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x1403E72A0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x1403E74D0 (PpmInstallNewIdleStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PpmApplyIdlePolicy @ 0x1403E7BC8 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403E7CB0 (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x1403E955C (PpmScaleIdleStateValues.c)
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
