/*
 * XREFs of ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18009A5B8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008BAFC (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800DCCE8 (_lambda_d312cc5a8d717c33b98f354ae26b71f9_--operator().c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 */

__int64 __fastcall CTransitionVisualController::_StageClone(
        CTransitionVisualController *this,
        struct tagPOINT *a2,
        struct CContainerVisual *a3,
        __int64 a4,
        bool a5,
        bool *a6)
{
  return CTransitionVisualController::_StageCloneRelative(this, a2, a3, 0, 0LL, a5, 1, a6);
}
