/*
 * XREFs of CmpTransIsTransActive @ 0x1404D8500
 * Callers:
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1404FC4D0 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140A228E4 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
