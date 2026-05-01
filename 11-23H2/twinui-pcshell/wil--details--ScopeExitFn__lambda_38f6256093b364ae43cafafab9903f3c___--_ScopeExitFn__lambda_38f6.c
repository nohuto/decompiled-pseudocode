/*
 * XREFs of wil::details::ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___::_ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___ @ 0x18060AAF4
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     _VirtualDesktopGestureWindow::Initialize_::_1_::dtor$0 @ 0x18060F5C1 (_VirtualDesktopGestureWindow--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___::_ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___(
        _BYTE *a1)
{
  BOOL result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return DestroyWindow(*(HWND *)(*(_QWORD *)a1 + 8LL));
  }
  return result;
}
