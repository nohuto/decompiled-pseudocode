/*
 * XREFs of ZwSetInformationTransaction @ 0x1406AA970
 * Callers:
 *     DifZwSetInformationTransactionWrapper @ 0x140647210 (DifZwSetInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
