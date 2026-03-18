/*
 * XREFs of GetgptoWrap @ 0x14021C100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgptoWrap(int a1, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 4824LL;
}
