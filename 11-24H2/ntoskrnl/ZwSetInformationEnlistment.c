/*
 * XREFs of ZwSetInformationEnlistment @ 0x1406AA890
 * Callers:
 *     DifZwSetInformationEnlistmentWrapper @ 0x140646710 (DifZwSetInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
