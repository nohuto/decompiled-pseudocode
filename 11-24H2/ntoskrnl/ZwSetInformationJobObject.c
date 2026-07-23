/*
 * XREFs of ZwSetInformationJobObject @ 0x1406AA8D0
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x140646A40 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
