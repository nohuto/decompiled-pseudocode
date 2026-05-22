/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800FCEDC
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FCCE0 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180026A3C (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Value@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs@UIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ACA0C (-Value@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEve.c)
 *     ?FrameworkKind@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FCB40 (-FrameworkKind@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+28h] BYREF

  ViewHierarchyWithWindowManager::GetView(a1, &v9, a2);
  if ( v9 )
  {
    v3 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalPropertyChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs>::Value(
                                                              &v9,
                                                              &v7);
    if ( v3 )
    {
      v6 = 0LL;
      (**v3)(
        v3,
        &winrt::impl::guid_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>,
        &v6);
      v4 = v6;
      v8 = v6;
    }
    else
    {
      v8 = 0LL;
      v4 = 0LL;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v7);
    if ( v4 )
      v2 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::FrameworkKind(&v8);
    else
      v2 = 6;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v8);
  }
  else
  {
    v2 = 6;
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v9);
  return v2;
}
