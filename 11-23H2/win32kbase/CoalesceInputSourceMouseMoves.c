/*
 * XREFs of CoalesceInputSourceMouseMoves @ 0x1C0057400
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00575D0 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsEqualInputSource @ 0x1C0059570 (IsEqualInputSource.c)
 *     PostPendingMouseMove @ 0x1C009B8E0 (PostPendingMouseMove.c)
 */

void __fastcall CoalesceInputSourceMouseMoves(struct tagQ *a1, _DWORD *a2)
{
  if ( a2 )
  {
    if ( (*((_DWORD *)a1 + 99) & 0x20) == 0 )
    {
LABEL_3:
      *((_DWORD *)a1 + 105) = *a2;
      *((_DWORD *)a1 + 106) = a2[1];
      return;
    }
    if ( !(unsigned __int8)IsEqualInputSource((char *)a1 + 420, a2) )
    {
      if ( (*((_DWORD *)a1 + 106) & 0xFFFFFFFB) != 0 )
      {
        if ( (a2[1] & 0xFFFFFFFB) != 0 )
        {
          if ( (*((_DWORD *)PtiCurrentShared() + 122) & 1) == 0 )
            PostPendingMouseMove(a1);
          goto LABEL_3;
        }
      }
      else if ( (a2[1] & 0xFFFFFFFB) != 0 )
      {
        goto LABEL_3;
      }
    }
  }
}
