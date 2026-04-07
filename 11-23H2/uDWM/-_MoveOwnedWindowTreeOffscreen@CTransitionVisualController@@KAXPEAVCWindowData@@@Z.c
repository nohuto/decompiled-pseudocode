/*
 * XREFs of ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x18000B2B4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18001671C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x18000B2F0 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(struct CTopLevelWindow **a1)
{
  __int64 v2; // r8
  char v3; // [rsp+30h] [rbp+8h] BYREF

  CTransitionVisualController::_MoveWindowOffscreen(a1[55], 1);
  LOBYTE(v2) = 1;
  v3 = 0;
  CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___(a1, &v3, v2);
}
