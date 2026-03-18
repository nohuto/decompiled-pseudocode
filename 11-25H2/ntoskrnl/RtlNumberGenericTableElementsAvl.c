/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14045C4D0
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 *     PiUpdateDriverDBCache @ 0x140A706C4 (PiUpdateDriverDBCache.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
