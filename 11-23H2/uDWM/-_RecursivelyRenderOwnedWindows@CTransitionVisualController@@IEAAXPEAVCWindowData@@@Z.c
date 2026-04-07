/*
 * XREFs of ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800EC254
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E99F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 */

void __fastcall CTransitionVisualController::_RecursivelyRenderOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  CVisual *v2; // rcx
  CTransitionVisualController *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v2 )
  {
    if ( (int)CVisual::RenderRecursive(v2) >= 0 )
    {
      LOBYTE(v4) = 0;
      CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___(
        (__int64)a2,
        (__int64)&v4,
        1);
    }
  }
}
