/*
 * XREFs of ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180026E90
 * Callers:
 *     <none>
 * Callees:
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026FC0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027020 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$emplace@U?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x180027088 (--$emplace@U-$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@-$_.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowAdded(
        _QWORD *a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a3)
{
  int v6; // r8d
  _QWORD *v7; // r14
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+70h] [rbp+30h] BYREF
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *v21; // [rsp+78h] [rbp+38h]
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *v22; // [rsp+80h] [rbp+40h]
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v22 = a3;
  v21 = a2;
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
    a3,
    &v23);
  v6 = *(_DWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                    &v23,
                    &v20);
  v20 = v6;
  v7 = a1 + 15;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v20 + i) ^ (unsigned __int64)v8);
  v10 = 2 * (v8 & a1[21]);
  v11 = a1[18];
  v12 = *(_QWORD *)(v11 + 8 * v10 + 8);
  v13 = a1[16];
  if ( v12 == v13 )
  {
LABEL_4:
    v12 = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(v11 + 8 * v10);
    while ( v6 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == v16 )
        goto LABEL_4;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( !v12 )
    v12 = a1[16];
  v14 = v23;
  if ( v12 == v13 )
  {
    v17 = v6;
    v18 = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>(
      v7,
      v19,
      &v17);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v18);
  }
  if ( v14 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v23);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a3);
  return 0LL;
}
