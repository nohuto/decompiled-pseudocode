/*
 * XREFs of ZwQueryInformationTransaction @ 0x1406A9ED0
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x140644160 (DifZwQueryInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
