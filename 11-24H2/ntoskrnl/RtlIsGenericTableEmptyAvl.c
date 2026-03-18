/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140450F90
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1408D3C80 (PiDqQueryFreeActiveData.c)
 *     PiLookupInDDBCache @ 0x1409C7CE8 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
