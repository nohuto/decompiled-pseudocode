/*
 * XREFs of ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18009A68C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800DC864 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 */

void __fastcall CTransitionVisualController::_RecursivelyRenderOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        __int64 a3)
{
  CContainerVisual *v3; // rcx
  __int64 v5; // r8
  CTransitionVisualController *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v3 = (CContainerVisual *)*((_QWORD *)a2 + 55);
  if ( v3 )
  {
    if ( (int)CContainerVisual::RenderRecursive(v3, (__int64)a2, a3) >= 0 )
    {
      LOBYTE(v5) = 1;
      LOBYTE(v6) = 0;
      CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___(a2, &v6, v5);
    }
  }
}
