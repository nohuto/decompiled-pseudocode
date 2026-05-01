/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802CFC10
 * Callers:
 *     ?UnsubscribeFromServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F8F30 (-UnsubscribeFromServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180424C70 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ConnectedStandbyHelper::Shutdown(ConnectedStandbyHelper *this)
{
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (void (__fastcall ****)(_QWORD, __int64))this + 5,
    0LL);
}
