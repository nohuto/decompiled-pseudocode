/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x140862E0C
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 */

__int64 __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, unsigned int a2)
{
  return CmpLogTransactionAbortedWithChildName(a1, 0LL, a2);
}
