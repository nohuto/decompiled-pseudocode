/*
 * XREFs of ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18049EA30
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049EB00 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18049E624 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4)
{
  char *v8; // rax
  int v10; // [rsp+148h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+150h] [rbp+18h]

  v11 = a3;
  v8 = (char *)operator new(0xF0uLL);
  v10 = 0;
  MultitaskingViewGestureHandler::InitiateSwipeDownAsync__InitCoro_2(&v10, v8, a2, a3, a4, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
