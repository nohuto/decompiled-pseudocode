/*
 * XREFs of TmIsTransactionActive @ 0x1404FC4D0
 * Callers:
 *     CmpTransIsTransActive @ 0x1404D8500 (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x140879088 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
