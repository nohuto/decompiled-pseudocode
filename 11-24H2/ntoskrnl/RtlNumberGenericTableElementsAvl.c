/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14045B7F0
 * Callers:
 *     PiDqQueryAppendActionEntry @ 0x1408B4DF0 (PiDqQueryAppendActionEntry.c)
 *     PiUpdateDriverDBCache @ 0x1409C5084 (PiUpdateDriverDBCache.c)
 *     VfPtGenerateTraceInformation @ 0x140B8BF6C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
