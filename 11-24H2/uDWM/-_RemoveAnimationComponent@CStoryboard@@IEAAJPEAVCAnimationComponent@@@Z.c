/*
 * XREFs of ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D5400
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180053F3C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180054100 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     wil::details::lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___::_lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___ @ 0x1800D1670 (wil--details--lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___--_lambda_call__lambda_e9cb.c)
 *     ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800D3BF8 (-StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800D5794 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180043588 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180045188 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CStoryboard::_RemoveAnimationComponent(CStoryboard *this, struct CVisual **a2)
{
  struct CVisual **v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 12, &v4);
  CTransitionVisualController::RemoveAnimationComponent(
    *((CContainerVisual ***)CDesktopManager::s_pDesktopManagerInstance + 24),
    a2);
  if ( a2 )
    CBaseObject::Release((CBaseObject *)a2);
  return 0LL;
}
