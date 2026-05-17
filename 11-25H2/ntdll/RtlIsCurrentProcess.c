/*
 * XREFs of RtlIsCurrentProcess @ 0x1800E50C0
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x1801645F0 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)NtCompareObjects(-1LL, a1) >= 0;
}
