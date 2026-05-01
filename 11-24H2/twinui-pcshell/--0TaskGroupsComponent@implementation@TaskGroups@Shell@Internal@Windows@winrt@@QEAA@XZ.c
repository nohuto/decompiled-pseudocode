/*
 * XREFs of ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180149580
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1801494C0 (--0-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shel.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$as@UIUnknown@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180149450 (--$as@UIUnknown@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18014A32C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18014A694 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ??0?$producers_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@V?$tuple@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelSingleton@23456@UITaskGroupsComponent@DesktopTaskGroups@3456@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029949C (--0-$producers_base@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?GetTaskGroupProvider@TaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802A236C (-GetTaskGroupProvider@TaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?CreateManager@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@3@AEBUITaskGroupHost@56783@@Z @ 0x180587AC4 (-CreateManager@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvide.c)
 */

// Hidden C++ exception states: #wind=25
winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this)
{
  __int64 (__fastcall ****v2)(_QWORD, __int64 *, __int64 *); // rdi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v6; // [rsp+28h] [rbp-59h] BYREF
  __int64 v7; // [rsp+30h] [rbp-51h] BYREF
  __int128 *v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+40h] [rbp-41h]
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *v10; // [rsp+48h] [rbp-39h]
  __int128 v11; // [rsp+58h] [rbp-29h] BYREF
  __int64 v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  __int128 v14; // [rsp+78h] [rbp-9h]
  _QWORD v15[2]; // [rsp+88h] [rbp+7h] BYREF
  GUID v16; // [rsp+98h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]

  v10 = this;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,std::tuple<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>::producers_base<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,std::tuple<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>();
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *)((char *)this + 40));
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 6) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 9) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable';
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  v2 = (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))((char *)this + 456);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider::GetTaskGroupProvider();
  v3 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
         &v6,
         &v7);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 57, v3);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  v8 = (__int128 *)((char *)this + 16);
  v4 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateManager(
                    &v6,
                    &v7,
                    v2,
                    &v8);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 58, v4);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  v11 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>;
  v12 = 0LL;
  v13 = 0LL;
  v14 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton>;
  winrt::impl::as<IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(v15, *v2);
  v15[1] = 0LL;
  v16 = GUID_716be2a0_d1cd_4fdb_9528_785c2866c6a5;
  v17 = 0LL;
  v18 = 0LL;
  v8 = &v11;
  v9 = 3;
  winrt::immersive_shell_component::register_service_information((char *)this + 40, &v8);
  `eh vector destructor iterator'(
    &v11,
    0x20uLL,
    3uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
  return this;
}
