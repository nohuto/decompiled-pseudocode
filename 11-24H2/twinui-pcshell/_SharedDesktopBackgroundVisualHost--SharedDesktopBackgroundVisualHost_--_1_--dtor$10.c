/*
 * XREFs of _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$10 @ 0x1806FF347
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>((HWND *)(*(_QWORD *)(a2 + 64) + 272LL));
}
