/*
 * XREFs of HalpScanForProfilingCorruption @ 0x140441980
 * Callers:
 *     HalpTimerClockIpiRoutine @ 0x1403394D0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerClockInterrupt @ 0x14033ADE0 (HalpTimerClockInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpScanForProfilingCorruptionInternal @ 0x1404419E4 (HalpScanForProfilingCorruptionInternal.c)
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
