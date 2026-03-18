/*
 * XREFs of GetgvsStateWrap @ 0x1402278D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgvsStateWrap(int a1, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 4768LL;
}
