/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x1406A8F50
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x1406459F0 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
