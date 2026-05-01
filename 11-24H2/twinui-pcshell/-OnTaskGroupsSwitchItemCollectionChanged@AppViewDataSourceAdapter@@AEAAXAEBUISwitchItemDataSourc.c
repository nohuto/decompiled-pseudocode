/*
 * XREFs of ?OnTaskGroupsSwitchItemCollectionChanged@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUISwitchItemCollectionChangedEventArgs@34567@@Z @ 0x1806C02F4
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs___lambda_e154441d1d346fb4a2aa0b556d03af10___::Invoke @ 0x1806C01C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1806C01C0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180050094 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802126C4 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     ??$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806BF874 (--$as@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UIUnknow.c)
 *     ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C0124 (-HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Comp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall AppViewDataSourceAdapter::OnTaskGroupsSwitchItemCollectionChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *a2,
        __int64 **a3)
{
  _QWORD *v5; // rax
  int v6; // eax
  PVOID Ptr; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, void *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  v14 = (__int64 *)a2;
  wil::AcquireSRWLockExclusive(&v11, this + 15);
  winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
    a3,
    &v14);
  v5 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
         &v14,
         &v13);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(v5, (__int64)&v10);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  v6 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)a3);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v15,
        (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v14);
      winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v13,
        v15);
      Ptr = this[4].Ptr;
      v8 = v13;
      v9 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 64LL))(Ptr, v13);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1E4,
          (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          (const char *)(unsigned int)v9,
          v10);
      if ( v8 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
  }
  else
  {
    AppViewDataSourceAdapter::HandleTaskGroupSwitchItemAdded(
      (AppViewDataSourceAdapter *)this,
      (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v14);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
}
