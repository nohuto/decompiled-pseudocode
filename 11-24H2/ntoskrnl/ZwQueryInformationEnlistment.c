/*
 * XREFs of ZwQueryInformationEnlistment @ 0x1406A9E50
 * Callers:
 *     DifZwQueryInformationEnlistmentWrapper @ 0x1406433F0 (DifZwQueryInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
