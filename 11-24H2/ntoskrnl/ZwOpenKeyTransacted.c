/*
 * XREFs of ZwOpenKeyTransacted @ 0x1406A9930
 * Callers:
 *     DifZwOpenKeyTransactedWrapper @ 0x1406404A0 (DifZwOpenKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
