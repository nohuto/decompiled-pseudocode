/*
 * XREFs of wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18055CAC8
 * Callers:
 *     _VirtualDesktopGestureHandler::FinishTouchSwipe_::_1_::dtor$0 @ 0x1806F2DC3 (_VirtualDesktopGestureHandler--FinishTouchSwipe_--_1_--dtor$0.c)
 * Callees:
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18055DE10 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)(*(_QWORD *)a1 + 16LL), 0);
  }
}
