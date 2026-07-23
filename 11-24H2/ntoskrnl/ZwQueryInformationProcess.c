/*
 * XREFs of ZwQueryInformationProcess @ 0x1406A76D0
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x1406438F0 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406987FC (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
