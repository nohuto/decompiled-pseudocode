/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x1806AB054
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x1806AA8D0 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r9
  _QWORD *result; // rax

  v4 = operator new(0x30uLL);
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[1] = *a2;
  v4[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[3] = a2[2];
  v4[4] = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 10) = 1;
  *v4 = off_1807CA1F8;
  result = a1;
  *a1 = v4;
  return result;
}
