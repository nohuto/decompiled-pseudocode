/*
 * XREFs of RtlWow64SetThreadContext @ 0x1801305C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64SetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return NtSetInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu);
}
