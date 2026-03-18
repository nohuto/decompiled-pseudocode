/*
 * XREFs of HalpScanForProfilingCorruption @ 0x14043FBC8
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x140278260 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x140279B10 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x14043FC2C (HalpScanForProfilingCorruptionInternal.c)
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
