/*
 * XREFs of XmMovOp @ 0x1404684B0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x14046959C (XmStoreResult.c)
 */

__int64 __fastcall XmMovOp(__int64 a1)
{
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
