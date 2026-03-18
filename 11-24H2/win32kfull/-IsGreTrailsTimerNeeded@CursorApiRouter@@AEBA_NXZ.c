/*
 * XREFs of ?IsGreTrailsTimerNeeded@CursorApiRouter@@AEBA_NXZ @ 0x1402DA5E0
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DAEC8 (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 */

char __fastcall CursorApiRouter::IsGreTrailsTimerNeeded(CursorApiRouter *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl

  v4 = 0;
  if ( !IsRemoteConnection((__int64)this, a2) )
    return *(_DWORD *)(W32GetUserSessionState(v3, v2) + 16296) != 0;
  return v4;
}
