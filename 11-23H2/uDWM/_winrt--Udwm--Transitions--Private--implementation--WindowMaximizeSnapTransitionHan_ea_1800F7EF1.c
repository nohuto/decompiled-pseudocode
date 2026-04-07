/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$5 @ 0x1800F7EF1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ @ 0x1800F0DF8 (--1-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 192) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 192) &= ~4u;
    return winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::~com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>((_QWORD *)(a2 + 64));
  }
  return result;
}
