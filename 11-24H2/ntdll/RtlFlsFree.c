/*
 * XREFs of RtlFlsFree @ 0x180106340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(&RtlpFlsContext, FlsIndex);
}
