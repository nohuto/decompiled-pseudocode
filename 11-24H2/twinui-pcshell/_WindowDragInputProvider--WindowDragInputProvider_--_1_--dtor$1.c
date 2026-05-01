/*
 * XREFs of _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$1 @ 0x1806F93B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>((HWND *)(*(_QWORD *)(a2 + 192) + 24LL));
}
