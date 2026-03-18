/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x1406A89B0
 * Callers:
 *     DifZwOpenKeyTransactedExWrapper @ 0x140641D30 (DifZwOpenKeyTransactedExWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
