/*
 * XREFs of ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A6868
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402A5614 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A6E28 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInToDragOutThreshold(struct MOVESIZEDATA *a1)
{
  if ( (*((_DWORD *)a1 + 50) & 0x3800) == 0 || (*((_DWORD *)a1 + 50) & 0x3800) == 0x800 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (*((_DWORD *)a1 + 50) + 4096)) & 0x3800;
}
