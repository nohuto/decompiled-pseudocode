/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800EC298
 * Callers:
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DE8EC (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800E9C50 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800D614C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 55) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)a2 + 5));
    v4 = CVisual::RenderRecursive(*((CVisual **)a2 + 55));
    v2 = v4;
    if ( v4 >= 0 )
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 55), 1);
    else
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v4,
        0xBFFu);
  }
  return v2;
}
