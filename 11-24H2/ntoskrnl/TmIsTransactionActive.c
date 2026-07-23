/*
 * XREFs of TmIsTransactionActive @ 0x1404F9D90
 * Callers:
 *     CmpTransIsTransActive @ 0x1404D1950 (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
