/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14044F790
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x1409AF4C4 (PiLookupInDDBCache.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
