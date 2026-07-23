/*
 * XREFs of ZwQueryInformationJobObject @ 0x1406A9E70
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x140643740 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
