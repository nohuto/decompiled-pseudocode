/*
 * XREFs of KeRebaselineInterruptTime @ 0x1404D8E4C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6B5B0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
