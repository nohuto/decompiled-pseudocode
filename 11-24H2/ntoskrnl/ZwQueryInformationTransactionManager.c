/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x1406A9EF0
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x140643FB0 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
