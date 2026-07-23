/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x1406A9950
 * Callers:
 *     DifZwOpenKeyTransactedExWrapper @ 0x1406402F0 (DifZwOpenKeyTransactedExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
