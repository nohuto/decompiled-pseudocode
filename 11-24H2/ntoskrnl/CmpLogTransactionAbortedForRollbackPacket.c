/*
 * XREFs of CmpLogTransactionAbortedForRollbackPacket @ 0x140AB8DF4
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x14097ACC8 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAbortedForRollbackPacket(__int64 a1, int a2, unsigned int *a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, *a3);
}
