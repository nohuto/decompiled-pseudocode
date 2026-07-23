/*
 * XREFs of RtlFlsAllocEx @ 0x18010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x1800097F8 (RtlpFlsAlloc.c)
 */

__int64 __fastcall RtlFlsAllocEx(__int64 a1, __int64 a2, unsigned int *a3)
{
  if ( a1 && a2 )
    return RtlpFlsAlloc(&RtlpFlsContext, a2, a1, a2, a3);
  else
    return 3221225485LL;
}
