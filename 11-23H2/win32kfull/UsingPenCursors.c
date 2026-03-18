/*
 * XREFs of UsingPenCursors @ 0x1C01AD49C
 * Callers:
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C000AA58 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014EA9E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     <none>
 */

__int64 UsingPenCursors()
{
  __int64 result; // rax

  result = 0LL;
  if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    return 1LL;
  return result;
}
