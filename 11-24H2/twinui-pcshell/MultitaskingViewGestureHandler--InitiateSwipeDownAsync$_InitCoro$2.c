/*
 * XREFs of MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18049E624
 * Callers:
 *     ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18049EA30 (-InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@UInputGest.c)
 * Callees:
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18049E690 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax

  *(_QWORD *)(a2 + 209) = a6;
  v6 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 217) = v6;
  *(_QWORD *)(a2 + 225) = a5;
  *(_QWORD *)a2 = MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[208] = 0;
  return MultitaskingViewGestureHandler::InitiateSwipeDownAsync__ResumeCoro_1(a2);
}
