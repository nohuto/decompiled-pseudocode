/*
 * XREFs of GetgvsStateWrap @ 0x1C00A04C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgvsStateWrap(__int64 a1)
{
  return *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23592LL;
}
