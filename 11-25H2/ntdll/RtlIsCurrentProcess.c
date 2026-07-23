/*
 * XREFs of RtlIsCurrentProcess @ 0x1800E50C0
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x1801645F0 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
