/*
 * XREFs of CmpTransIsTransActive @ 0x1404D1950
 * Callers:
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1404F9D90 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140A16CF4 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
