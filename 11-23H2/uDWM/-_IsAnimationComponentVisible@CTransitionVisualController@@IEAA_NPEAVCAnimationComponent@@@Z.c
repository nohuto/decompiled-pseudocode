/*
 * XREFs of ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180003E74
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800EC180 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180003FFC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsAnimationComponentVisible(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_BYTE *)a2 + 65)
    && *(_DWORD *)(*((_QWORD *)a2 + 18) + 24LL) != 4
    && (*((_BYTE *)a2 + 67) || CTransitionVisualController::HasVisibleStyle(*((HWND *)a2 + 2))) )
  {
    return 1;
  }
  return v2;
}
