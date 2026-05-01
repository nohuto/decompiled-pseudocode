/*
 * XREFs of ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180273760
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800C6CD8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$com_ptr_t@VWindowDragInputProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1802CD390 (--1-$com_ptr_t@VWindowDragInputProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall WindowDragInputProvider::MsgWindowWndProc(HWND a1, UINT a2, WPARAM a3, LONG_PTR *a4)
{
  WindowDragInputProvider *WindowLongPtrW; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  LONG_PTR v11; // rdi
  const char *v12; // r9
  WindowDragInputProvider *v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 != 129 )
  {
    if ( a2 != 130 )
    {
      if ( a2 - 833 >= 2 )
        return DefWindowProcW(a1, a2, a3, (LPARAM)a4);
      WindowLongPtrW = (WindowDragInputProvider *)GetWindowLongPtrW(a1, -21);
      v13 = WindowLongPtrW;
      if ( WindowLongPtrW )
        winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)WindowLongPtrW);
      v10 = WindowDragInputProvider::OnWindowArrangementMessage(WindowLongPtrW, a2, v9, (__int64)a4);
      wil::com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>::~com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>(&v13);
      return v10;
    }
    SetWindowLongPtrW(a1, -21, 0LL);
    return 0LL;
  }
  v11 = *a4;
  if ( !*a4 )
    return 0LL;
  SetWindowLongPtrW(a1, -21, *a4);
  if ( *(_QWORD *)(v11 + 24) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD6,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v12);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)(v11 + 24),
    a1);
  return 1LL;
}
