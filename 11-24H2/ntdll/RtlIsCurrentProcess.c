/*
 * XREFs of RtlIsCurrentProcess @ 0x1800E15A0
 * Callers:
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E1430 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlpWow64SuspendProcess @ 0x180130618 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtCompareObjects @ 0x180161420 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
