/*
 * XREFs of ZwOpenTransaction @ 0x1406A9B10
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1406418F0 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x1407E10E8 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
