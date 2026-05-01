/*
 * XREFs of _MultitaskingViewGestureHandler::InitiateSwipeDownAsync_::_15_::_parameters_::_parameters_ @ 0x18054BE50
 * Callers:
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_InitCoro$2 @ 0x18020D340 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MultitaskingViewGestureHandler::InitiateSwipeDownAsync_::_15_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  *a1 = a2;
  v4 = *a3;
  *a3 = 0LL;
  a1[1] = v4;
  result = a1;
  a1[2] = a4;
  return result;
}
