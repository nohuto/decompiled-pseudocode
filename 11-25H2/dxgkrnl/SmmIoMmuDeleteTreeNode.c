/*
 * XREFs of SmmIoMmuDeleteTreeNode @ 0x1400928A4
 * Callers:
 *     SmmClearPageManager @ 0x1400927FC (SmmClearPageManager.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmIoMmuDeleteTreeNode(PVOID Entry, __int64 a2)
{
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 16), Entry);
}
