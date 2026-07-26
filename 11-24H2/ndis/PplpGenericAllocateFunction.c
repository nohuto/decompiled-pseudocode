/*
 * XREFs of PplpGenericAllocateFunction @ 0x14004D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PplpGenericAllocateFunction(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)Lookaside[1].L.ListHead.Alignment);
}
