/*
 * XREFs of ZwRecoverTransactionManager @ 0x1406A9350
 * Callers:
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, v1);
}
