/*
 * XREFs of PplpGenericFreeFunction @ 0x140069360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PplpGenericFreeFunction(PVOID Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)Lookaside[1].L.ListHead.Alignment, Buffer);
}
