/*
 * XREFs of HalpScanForProfilingCorruption @ 0x140435878
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1403189B0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14031A2C0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x1404358DC (HalpScanForProfilingCorruptionInternal.c)
 */

__int64 __fastcall HalpScanForProfilingCorruption(unsigned int a1)
{
  LARGE_INTEGER PerformanceCounter; // rbx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    0LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    1LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
    100LL,
    a1,
    (LARGE_INTEGER)PerformanceCounter.QuadPart);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpScanForProfilingCorruptionInternal)(
           101LL,
           a1,
           (LARGE_INTEGER)PerformanceCounter.QuadPart);
}
