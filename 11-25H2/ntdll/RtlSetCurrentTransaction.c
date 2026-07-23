/*
 * XREFs of RtlSetCurrentTransaction @ 0x1800DCB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlSetCurrentTransaction(HANDLE TransactionHandle)
{
  if ( TransactionHandle == (HANDLE)-1LL )
    return 0;
  NtCurrentTeb()->CurrentTransactionHandle = TransactionHandle;
  return 1;
}
