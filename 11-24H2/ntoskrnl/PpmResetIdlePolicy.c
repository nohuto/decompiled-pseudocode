/*
 * XREFs of PpmResetIdlePolicy @ 0x14032CFA8
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x14032C6C0 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x14032C8F0 (PpmInstallNewIdleStates.c)
 * Callees:
 *     PpmApplyIdlePolicy @ 0x14032CFE8 (PpmApplyIdlePolicy.c)
 *     PpmResetProcessorIdleAccounting @ 0x14032D0D4 (PpmResetProcessorIdleAccounting.c)
 *     PpmScaleIdleStateValues @ 0x14032D1B4 (PpmScaleIdleStateValues.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
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
