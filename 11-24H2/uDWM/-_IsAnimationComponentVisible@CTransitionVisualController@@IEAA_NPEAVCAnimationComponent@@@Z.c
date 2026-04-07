/*
 * XREFs of ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x1800427B4
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18008A598 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x1800427FC (-IsSnapshot@CAnimationComponent@@QEAA_NXZ.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042808 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsAnimationComponentVisible(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  char v2; // bl
  __int64 v3; // rdx

  v2 = 0;
  if ( !*((_BYTE *)a2 + 65)
    && *(_DWORD *)(*((_QWORD *)a2 + 18) + 24LL) != 4
    && (CAnimationComponent::IsSnapshot(a2) || CTransitionVisualController::HasVisibleStyle(*(HWND *)(v3 + 16))) )
  {
    return 1;
  }
  return v2;
}
