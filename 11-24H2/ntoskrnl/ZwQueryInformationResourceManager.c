/*
 * XREFs of ZwQueryInformationResourceManager @ 0x1406A8F10
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x1406454E0 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&ResourceManagerInformationClass);
}
