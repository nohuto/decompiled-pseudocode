/*
 * XREFs of ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1804ABA50
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049EB00 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_InitCoro$2 @ 0x1804AB380 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *CAppThumbnailWindow::StartSwitchGestureOperationAsync(__int64 a1, _BYTE *a2, __int64 *a3, __int64 a4, ...)
{
  char *v8; // rax
  int v10; // [rsp+258h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+260h] [rbp+18h]
  va_list va; // [rsp+270h] [rbp+28h] BYREF

  va_start(va, a4);
  v11 = a3;
  v8 = (char *)operator new(0x1F0uLL);
  v10 = 0;
  CAppThumbnailWindow::StartSwitchGestureOperationAsync__InitCoro_2(&v10, v8, a2, a3, a4, (int *)va, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
