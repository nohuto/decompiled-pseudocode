/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000B21C
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800E9D04 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  CTopLevelWindow3D *v3; // rcx
  __int64 v4; // r8
  int v5; // ecx
  CTransitionVisualController *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[56] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 56);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v5 = *((_DWORD *)WindowDataByHwnd + 170);
      if ( (v5 & 0x30000000) == 0x30000000 || (v5 & 0x100000) != 0 )
      {
        LOBYTE(v4) = 1;
        LOBYTE(v6) = 0;
        CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___(
          WindowDataByHwnd,
          &v6,
          v4);
      }
    }
  }
}
