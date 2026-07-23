/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x140446200
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PiDqQueryFreeActiveData @ 0x1408D1670 (PiDqQueryFreeActiveData.c)
 *     PiLookupInDDBCache @ 0x1409B8B68 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
