/*
 * XREFs of RawInputRequestedForMouse @ 0x14017ADD4
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionHandleRawInputThrottlingTimer @ 0x14017AC70 (EditionHandleRawInputThrottlingTimer.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 *     EditionRawInputRequestedForMouse @ 0x140274BC0 (EditionRawInputRequestedForMouse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputRequestedForMouse(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 16852) || *(_DWORD *)(W32GetUserSessionState(v3, v2) + 16316) )
    return 1;
  return v4;
}
