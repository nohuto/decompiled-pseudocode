/*
 * XREFs of ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800F8690
 * Callers:
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800F8CD0 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1800F8FB4 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 *     ?SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z @ 0x1800F9350 (-SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z.c)
 *     ?SetSuppressionState@SystemCursor2@@QEAAJ_N@Z @ 0x1800F99AC (-SetSuppressionState@SystemCursor2@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SystemCursor2::GetEffectiveVisibiltyState(SystemCursor2 *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 176) )
  {
    if ( *((_BYTE *)this + 177) )
      return *((_BYTE *)this + 178) == 0;
  }
  return result;
}
