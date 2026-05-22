/*
 * XREFs of ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x18015E38C
 * Callers:
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x18015E42C (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027020 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBUWindowId@23456@@Z @ 0x180027AB4 (-GetFromWindowId@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@AEBU.c)
 *     ?IsForeground@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18015E470 (-IsForeground@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *__fastcall ViewHierarchyWithWindowManager::GetActiveView(
        __int64 a1,
        const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId *a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD **)(a1 + 128);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[3];
    v9 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input<winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::IsForeground(&v9) )
    {
      v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
             &v9,
             &v8);
      winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::GetFromWindowId(a2, (__int64)v6);
      winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v9);
      return a2;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v9);
  }
  *(_QWORD *)a2 = 0LL;
  return a2;
}
