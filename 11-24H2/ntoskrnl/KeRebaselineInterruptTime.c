/*
 * XREFs of KeRebaselineInterruptTime @ 0x1404D229C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
