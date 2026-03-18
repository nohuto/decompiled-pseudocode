/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A681C
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A6E28 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct MOVESIZEDATA *a1)
{
  int v1; // r8d
  __int16 v2; // ax

  v1 = *((_DWORD *)a1 + 50) >> 11;
  if ( (v1 & 7u) - 2 <= 1 )
  {
    v2 = v1 - 2;
  }
  else
  {
    if ( (v1 & 7u) - 4 > 1 )
      return;
    v2 = v1 - 4;
  }
  *((_DWORD *)a1 + 50) ^= ((unsigned __int16)*((_DWORD *)a1 + 50) ^ (unsigned __int16)(v2 << 11)) & 0x3800;
}
