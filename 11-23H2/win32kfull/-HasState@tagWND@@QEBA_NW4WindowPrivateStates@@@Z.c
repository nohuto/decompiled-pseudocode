/*
 * XREFs of ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C00B13DC
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::HasState(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 320)) == a2;
}
