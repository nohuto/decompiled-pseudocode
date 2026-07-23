/*
 * XREFs of RtlInvertRangeList @ 0x140A70A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInvertRangeListEx @ 0x140A70AB0 (RtlInvertRangeListEx.c)
 */

__int64 __fastcall RtlInvertRangeList(int a1, int a2)
{
  return RtlInvertRangeListEx(a1, a2, 0, 0, 0LL);
}
