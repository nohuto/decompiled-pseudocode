/*
 * XREFs of _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x180596758
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke @ 0x1805998B0 (winrt--impl--delegate_winrt--Windows--UI--Xaml--Input--PointerEventHandler__lambda_4df4384ae3b5e.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?CreateSeparator@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800BE728 (-CreateSeparator@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18029C4EC (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802C7844 (--R-$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureReportedArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180591BC4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs@UIShellViewGestureR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const___(
        __int64 *a1,
        __int64 a2,
        __int64 **a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+30h] BYREF
  __int64 **v11; // [rsp+70h] [rbp+38h]
  __int64 v12; // [rsp+78h] [rbp+40h] BYREF

  v11 = a3;
  v10 = a2;
  if ( !*(_BYTE *)(*a1 + 160) )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      a3,
      v8);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v8) == 2 )
    {
      v5 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(*a1 + 120);
      if ( v5 )
      {
        v12 = 0LL;
        (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v12);
        v10 = v12;
      }
      else
      {
        v10 = 0LL;
      }
      winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateSeparator(
        a3,
        &v9,
        &v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
      v6 = *a1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewGestureReportedArgs<winrt::WindowsUdk::UI::Shell::IShellViewGestureReportedArgs>::InvocationPoint(
        &v9,
        &v10);
      v7 = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v9);
      std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(v6 + 24, v7);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
