/*
 * XREFs of RtlFlsFree @ 0x18010DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(&RtlpFlsContext, FlsIndex);
}
