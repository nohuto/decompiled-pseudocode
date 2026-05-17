/*
 * XREFs of RtlFlsAlloc @ 0x1800B90C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x1800B90E8 (RtlpFlsAlloc.c)
 */

__int64 __fastcall RtlFlsAlloc(int a1, __int64 a2)
{
  return RtlpFlsAlloc((unsigned int)&RtlpFlsContext, a2, a1, 0, a2);
}
