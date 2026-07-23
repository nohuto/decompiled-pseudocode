/*
 * XREFs of RtlQueryThreadProfiling @ 0x1801344A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
