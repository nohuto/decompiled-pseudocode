/*
 * XREFs of ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180026D10
 * Callers:
 *     <none>
 * Callees:
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026FC0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027020 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$_Erase@I@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x180027560 (--$_Erase@I@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@.c)
 *     ??$_Erase@I@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x180027604 (--$_Erase@I@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowRemoved(
        _QWORD *a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a3)
{
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 j; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *v22; // [rsp+78h] [rbp+10h]
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *v23; // [rsp+80h] [rbp+18h]
  char v24; // [rsp+88h] [rbp+20h] BYREF

  v23 = a3;
  v22 = a2;
  v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
         a3,
         v20);
  v7 = *(_DWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                    v6,
                    &v24);
  v21 = v7;
  if ( v20[0] )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v20);
  v8 = 0xCBF29CE484222325uLL;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v21 + i) ^ (unsigned __int64)v9);
  v11 = 2 * (v9 & a1[21]);
  v12 = a1[18];
  v13 = *(_QWORD *)(v12 + 8 * v11 + 8);
  v14 = a1[16];
  if ( v13 == v14 )
  {
LABEL_6:
    v13 = 0LL;
  }
  else
  {
    while ( v7 != *(_DWORD *)(v13 + 16) )
    {
      if ( v13 == *(_QWORD *)(v12 + 8 * v11) )
        goto LABEL_6;
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  if ( !v13 )
    v13 = a1[16];
  if ( v13 != v14 )
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Erase<unsigned int>(
      a1 + 15,
      &v21);
  for ( j = 0LL; j < 4; ++j )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v21 + j) ^ (unsigned __int64)v8);
  v16 = a1[27];
  v17 = *(_QWORD *)(v16 + 16 * (v8 & a1[30]) + 8);
  v18 = a1[25];
  if ( v17 == v18 )
  {
LABEL_14:
    v17 = 0LL;
  }
  else
  {
    while ( v7 != *(_DWORD *)(v17 + 16) )
    {
      if ( v17 == *(_QWORD *)(v16 + 16 * (v8 & a1[30])) )
        goto LABEL_14;
      v17 = *(_QWORD *)(v17 + 8);
    }
  }
  if ( !v17 )
    v17 = a1[25];
  if ( v17 != v18 )
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Erase<unsigned int>(
      a1 + 24,
      &v21);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a3);
  return 0LL;
}
