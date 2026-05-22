/*
 * XREFs of ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800268BC
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013700 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x1800249B8 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180026A3C (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027A54 (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHelper::GetWindowForViewId(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  char v4; // di
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+28h] [rbp-10h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a1;
  ViewHierarchyWithWindowManager::GetView(a2, &v8);
  if ( v8 )
  {
    v3 = (__int64 *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                      &v8,
                      &v9);
    v4 = 5;
    v5 = *v3;
  }
  else
  {
    v3 = (__int64 *)v7;
    v4 = 6;
    v5 = 0LL;
  }
  *v3 = 0LL;
  *a1 = v5;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v7);
  }
  if ( (v4 & 1) != 0 && v9 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
  if ( v8 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  return a1;
}
