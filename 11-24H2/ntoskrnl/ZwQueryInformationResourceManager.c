/*
 * XREFs of ZwQueryInformationResourceManager @ 0x1406A9EB0
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x140643AA0 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
