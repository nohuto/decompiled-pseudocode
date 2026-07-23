/*
 * XREFs of TmRollbackTransaction @ 0x1404F9F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return __imp_TmRollbackTransaction(Transaction, Wait);
}
