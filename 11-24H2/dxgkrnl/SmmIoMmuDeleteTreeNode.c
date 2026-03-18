/*
 * XREFs of SmmIoMmuDeleteTreeNode @ 0x140094D54
 * Callers:
 *     SmmClearPageManager @ 0x140094CAC (SmmClearPageManager.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmIoMmuDeleteTreeNode(PVOID Entry, __int64 a2)
{
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 16), Entry);
}
