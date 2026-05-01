/*
 * XREFs of _MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806EE710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@QEAA@XZ @ 0x18049C29C (--1-$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80) + 16LL;
  return winrt::com_ptr<MultitaskingViewGestureHandler>::~com_ptr<MultitaskingViewGestureHandler>(*(_QWORD **)(a2 + 40));
}
