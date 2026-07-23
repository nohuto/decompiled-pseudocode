/*
 * XREFs of XmPopOp @ 0x140460AB0
 * Callers:
 *     XmPopaOp @ 0x1405738F0 (XmPopaOp.c)
 * Callees:
 *     XmPopStack @ 0x140460AD8 (XmPopStack.c)
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack();
  return XmStoreResult(a1, v2);
}
