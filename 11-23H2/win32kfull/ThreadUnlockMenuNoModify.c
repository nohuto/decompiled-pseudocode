/*
 * XREFs of ThreadUnlockMenuNoModify @ 0x1C01FF114
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     xxxCalcMenuBar @ 0x1C00E4660 (xxxCalcMenuBar.c)
 *     xxxMNStartMenu @ 0x1C01FF3DC (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C0235598 (xxxMenuBarDraw.c)
 *     xxxPaintMenuBar @ 0x1C0235DDC (xxxPaintMenuBar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadUnlockMenuNoModify(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  *(_DWORD *)(v3 + 40) &= ~0x200u;
  return ThreadUnlock1(v3, a2, a3);
}
