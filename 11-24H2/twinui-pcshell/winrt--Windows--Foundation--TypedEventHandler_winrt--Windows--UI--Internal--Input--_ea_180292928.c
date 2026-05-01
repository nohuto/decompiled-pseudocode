/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_c7bdcc8427e48cc0baee46c116b31384___ @ 0x180292928
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800CFE74 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation_::TypedEventHandler_winrt::Windows::UI::Internal::Input::InputGestureManager_winrt::Windows::UI::Internal::Input::InputGestureOperation___lambda_c7bdcc8427e48cc0baee46c116b31384___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  char *v6; // [rsp+30h] [rbp+8h]

  v6 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_18071F2A8;
  result = a1;
  *a1 = v4;
  return result;
}
