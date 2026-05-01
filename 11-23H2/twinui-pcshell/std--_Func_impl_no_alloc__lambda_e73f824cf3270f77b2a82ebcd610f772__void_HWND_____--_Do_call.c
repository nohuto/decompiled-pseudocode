/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____::_Do_call @ 0x1805508F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *a2;
  return MultitaskingViewGestureHandler::ActivateGestureAction(v2, 8u, &v4);
}
