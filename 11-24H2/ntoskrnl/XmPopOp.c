/*
 * XREFs of XmPopOp @ 0x140468100
 * Callers:
 *     XmPopaOp @ 0x140576460 (XmPopaOp.c)
 * Callees:
 *     XmPopStack @ 0x140468128 (XmPopStack.c)
 *     XmStoreResult @ 0x14046959C (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack();
  return XmStoreResult(a1, v2);
}
