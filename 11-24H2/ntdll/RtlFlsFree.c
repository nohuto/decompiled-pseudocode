/*
 * XREFs of RtlFlsFree @ 0x18010B970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsFree(int a1)
{
  return RtlpFlsFree(&RtlpFlsContext, a1);
}
