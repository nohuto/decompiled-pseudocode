/*
 * XREFs of ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A68A0
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A5850 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A6E28 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragOutToDragInThreshold(struct MOVESIZEDATA *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 50) >> 11;
  if ( (v1 & 7u) - 2 <= 1 )
    *((_DWORD *)a1 + 50) ^= ((unsigned __int16)*((_DWORD *)a1 + 50) ^ (unsigned __int16)(((_WORD)v1 - 2) << 11)) & 0x3800;
}
