/*
 * XREFs of _lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_ @ 0x18059303C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_c7bdcc8427e48cc0baee46c116b31384___::Invoke @ 0x180593EB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180593EB0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?OperationEnded@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18049F104 (-OperationEnded@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperati.c)
 *     ?OperationStarted@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18049F15C (-OperationStarted@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOpera.c)
 *     ??$?0VTouchEdgeGestureProcessor@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVTouchEdgeGestureProcessor@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180592FE0 (--$-0VTouchEdgeGestureProcessor@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const___(
        __int64 *a1,
        __int64 a2,
        __int64 **a3)
{
  _QWORD *result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v7,
    *a1,
    (__int64)TouchEdgeGestureProcessor::InputGestureOperationStarted);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationStarted(
    a3,
    &v6,
    &v7);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
    &v7,
    *a1,
    (__int64)TouchEdgeGestureProcessor::InputGestureOperationEnded);
  result = winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::OperationEnded(
             a3,
             &v6,
             &v7);
  if ( v7 )
    return (_QWORD *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return result;
}
