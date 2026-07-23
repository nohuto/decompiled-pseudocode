/*
 * XREFs of RtlWow64ChangeThreadState @ 0x180115610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64ChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  if ( StateChangeType )
    return NtChangeThreadState(
             ThreadStateChangeHandle,
             ThreadHandle,
             StateChangeType,
             ExtendedInformation,
             ExtendedInformationLength,
             Reserved);
  else
    return RtlpWow64SuspendThread(ThreadHandle, ThreadStateChangeHandle, 0LL);
}
