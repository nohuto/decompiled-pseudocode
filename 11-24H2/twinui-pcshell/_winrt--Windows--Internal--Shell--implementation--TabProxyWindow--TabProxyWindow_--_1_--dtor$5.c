/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$5 @ 0x1806D05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>((HICON *)(*(_QWORD *)(a2 + 128) + 96LL));
}
