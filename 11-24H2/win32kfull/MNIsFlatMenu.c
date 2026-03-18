/*
 * XREFs of MNIsFlatMenu @ 0x14006B254
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MNIsFlatMenu(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 67060) & 0x80020000) == -2147352576;
}
