/*
 * XREFs of RtlCreateHeap @ 0x1800A7520
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 */

__int64 __fastcall RtlCreateHeap(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return RtlpCreateHeap(a1, a2, a3, a4, a5, a6, 0);
}
