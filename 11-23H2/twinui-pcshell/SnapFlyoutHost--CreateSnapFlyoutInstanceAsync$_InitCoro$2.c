/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x180225D0C
 * Callers:
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x180226D5C (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_29_::_parameters_::_parameters_ @ 0x180225690 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync_--_29_--_parameters_--_parameters_.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180225798 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVS.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18022902C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Fo_ea_18022902C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int *a6,
        int *a7,
        __int64 a8,
        __int64 *a9,
        int *a10,
        __int64 a11)
{
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_29_::_parameters_::_parameters_(
    a2 + 865,
    a11,
    a4,
    *a5,
    *a6,
    *a7,
    a8,
    a9,
    *a10);
  *(_QWORD *)a2 = SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a2 - 96);
  *(_QWORD *)(a2 - 96) = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    a2 - 96,
    a3);
  *(_BYTE *)(a2 + 864) = 0;
  return SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(a2);
}
