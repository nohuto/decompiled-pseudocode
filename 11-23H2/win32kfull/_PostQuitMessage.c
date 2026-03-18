/*
 * XREFs of _PostQuitMessage @ 0x1C0139FA0
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C00721A8 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IPostQuitMessage(gptiCurrent, a1, a3, a4);
}
