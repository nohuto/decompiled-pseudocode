/*
 * XREFs of RtlQueryThreadProfiling @ 0x180130BF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
