/*
 * XREFs of ??1?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@QEAA@XZ @ 0x18049C29C
 * Callers:
 *     _MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806EE710 (_MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ @ 0x1804A0824 (-unconditional_release_ref@-$com_ptr@VMultitaskingViewGestureHandler@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<MultitaskingViewGestureHandler>::~com_ptr<MultitaskingViewGestureHandler>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<MultitaskingViewGestureHandler>::unconditional_release_ref();
  return result;
}
