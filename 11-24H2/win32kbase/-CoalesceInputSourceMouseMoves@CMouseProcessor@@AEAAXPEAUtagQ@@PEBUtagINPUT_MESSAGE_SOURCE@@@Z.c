/*
 * XREFs of ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021C07C
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostPendingMouseMove @ 0x1400EC440 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1400FF470 (IsEqualInputSource.c)
 */

void __fastcall CMouseProcessor::CoalesceInputSourceMouseMoves(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagINPUT_MESSAGE_SOURCE *a3)
{
  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 109) & 0x20) != 0 )
    {
      if ( IsEqualInputSource((_DWORD *)a2 + 115, a3) )
        return;
      if ( (*((_DWORD *)a2 + 116) & 0xFFFFFFFB) != 0 )
      {
        if ( (*((_DWORD *)a3 + 1) & 0xFFFFFFFB) == 0 )
          return;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(4294967291LL) + 132, 0, 0) & 1) == 0 )
          PostPendingMouseMove(a2);
      }
      else if ( (*((_DWORD *)a3 + 1) & 0xFFFFFFFB) == 0 )
      {
        return;
      }
    }
    *((_DWORD *)a2 + 115) = *(_DWORD *)a3;
    *((_DWORD *)a2 + 116) = *((_DWORD *)a3 + 1);
  }
}
