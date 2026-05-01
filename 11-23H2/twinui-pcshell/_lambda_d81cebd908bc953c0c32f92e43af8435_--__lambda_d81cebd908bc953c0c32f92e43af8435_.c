/*
 * XREFs of _lambda_d81cebd908bc953c0c32f92e43af8435_::__lambda_d81cebd908bc953c0c32f92e43af8435_ @ 0x1806AB510
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec____::_1_::dtor$0 @ 0x1806AA937 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificat.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5____::_1_::dtor$0 @ 0x1806AA9B3 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--T_ea_1806AA9B3.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435____::_1_::dtor$0 @ 0x1806AAA2F (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--T_ea_1806AAA2F.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_d81cebd908bc953c0c32f92e43af8435_::__lambda_d81cebd908bc953c0c32f92e43af8435_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
