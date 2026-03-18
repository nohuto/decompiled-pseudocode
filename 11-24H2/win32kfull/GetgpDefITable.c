/*
 * XREFs of GetgpDefITable @ 0x14030B990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetgpDefITable(int a1, __int64 a2)
{
  return *(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20136LL;
}
