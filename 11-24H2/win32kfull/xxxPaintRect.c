/*
 * XREFs of xxxPaintRect @ 0x140036CDC
 * Callers:
 *     xxxFillWindow @ 0x140036A94 (xxxFillWindow.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GreSetBrushOrg @ 0x1400384E8 (GreSetBrushOrg.c)
 *     xxxGetControlColor @ 0x1400385D0 (xxxGetControlColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 a2, HDC a3, HBRUSH ControlColor, const RECT *a5)
{
  __int64 v8; // rdi

  v8 = a1;
  if ( !a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 24LL);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v8, a2, a3, (unsigned int)((_DWORD)ControlColor + 306));
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
