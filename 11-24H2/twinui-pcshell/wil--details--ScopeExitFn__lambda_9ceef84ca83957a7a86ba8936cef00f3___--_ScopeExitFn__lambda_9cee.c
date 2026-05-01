/*
 * XREFs of wil::details::ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___::_ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___ @ 0x18049C238
 * Callers:
 *     _MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows_::_1_::dtor$1 @ 0x1806EE51B (_MultitaskingViewGestureHandler--CreateAndOpenAppThumbnailWindows_--_1_--dtor$1.c)
 *     _MultitaskingViewGestureHandler::CreateAppThumbnailWindows_::_1_::dtor$1 @ 0x1806EE52D (_MultitaskingViewGestureHandler--CreateAppThumbnailWindows_--_1_--dtor$1.c)
 * Callees:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___::_ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MultitaskingViewGestureHandler::AnimationComplete(*(_QWORD *)a1, 0LL);
  }
  return result;
}
