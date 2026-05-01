/*
 * XREFs of _lambda_190ccd1a8be9aac816201cee4203407b_::operator() @ 0x180256F04
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___::Invoke @ 0x1806CDAB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_InitCoro$2::operator() @ 0x180256CC8 (_lambda_190ccd1a8be9aac816201cee4203407b_$_InitCoro$2--operator().c)
 */

_BYTE *__fastcall lambda_190ccd1a8be9aac816201cee4203407b_::operator()(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  void *v8; // rax
  int v10; // [rsp+B8h] [rbp+10h] BYREF

  v8 = operator new(0x52uLL);
  v10 = 0;
  lambda_190ccd1a8be9aac816201cee4203407b___InitCoro_2::operator()(&v10, (__int64)v8, a2, a3, a4, a1);
  return a2;
}
