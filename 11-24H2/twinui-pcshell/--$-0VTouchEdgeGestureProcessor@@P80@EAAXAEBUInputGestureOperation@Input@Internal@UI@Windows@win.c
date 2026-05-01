/*
 * XREFs of ??$?0VTouchEdgeGestureProcessor@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVTouchEdgeGestureProcessor@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180592FE0
 * Callers:
 *     _lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_ @ 0x18059303C (_lambda_c7bdcc8427e48cc0baee46c116b31384_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]
  char *v7; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&v6 = a2;
  *((_QWORD *)&v6 + 1) = a3;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v4 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>,_lambda_aa9b9625fc964c5e7929b898838676a2_>::`vftable';
  result = a1;
  *a1 = v4;
  return result;
}
