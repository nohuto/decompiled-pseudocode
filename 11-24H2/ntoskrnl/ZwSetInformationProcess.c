/*
 * XREFs of ZwSetInformationProcess @ 0x1406A7730
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x140646EF0 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409E050C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A130B8 (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
