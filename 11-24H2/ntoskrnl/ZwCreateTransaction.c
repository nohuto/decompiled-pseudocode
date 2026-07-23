/*
 * XREFs of ZwCreateTransaction @ 0x1406A8D90
 * Callers:
 *     DifZwCreateTransactionWrapper @ 0x14063CE50 (DifZwCreateTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
