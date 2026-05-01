/*
 * XREFs of ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18016B498
 * Callers:
 *     ??$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18016B218 (--$MakeAndInitialize@VAppViewDataSourceAdapter@@V1@AEAW4DesktopSwitcherDataSourceScopeOptions@@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18002BD38 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18011C144 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18016B840 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 *     ?AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AEB8 (-AppViewSwitchItemZOrderSort_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x1802A0B88 (--$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 *     ??1?$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x1802A64F4 (--1-$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@-$abi@UIWindow.c)
 *     ?TileRemoved@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805C0710 (-TileRemoved@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___ @ 0x1806BF6F0 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabExt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppViewDataSourceAdapter::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        struct IApplicationViewCollection *a3,
        struct IApplicationViewIconLoader *a4,
        struct IImmersiveShellHookService *a5,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a6,
        __int64 *a7)
{
  AppViewDataSourceAdapterBase *v8; // rcx
  const struct _GUID *v9; // rcx
  int v10; // eax
  void *v11; // rbx
  int v12; // eax
  char v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r14
  const char *v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v30[48]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  void *v32; // [rsp+90h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 192) = a2;
  v8 = (AppViewDataSourceAdapterBase *)(a1 + 8);
  try
  {
    AppViewDataSourceAdapterBase::InitializeDataSource(v8, a3, a4, a5, a6);
    v32 = 0LL;
    v10 = AppViewSwitchItemZOrderSort_CreateInstance(v9, &v32);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x96,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v10,
        v24);
    v11 = v32;
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v32);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v12,
        v24);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      v13,
      v14);
    v15 = a7;
    winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 248), a7);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 120));
    v29 = a1 + 120;
    AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)a1);
    if ( a1 != -120 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 120));
    if ( (*(_BYTE *)(a1 + 192) & 4) != 0 )
      AppViewDataSourceAdapter::InitializeTaskGroupItems((AppViewDataSourceAdapter *)a1);
    if ( (*(_BYTE *)(a1 + 192) & 2) != 0 && *v15 )
    {
      v27 = a1;
      v17 = (__int64 *)wil::com_weak_query_failfast<AppViewDataSourceAdapter *>(&v29, &v27);
      v18 = *v17;
      *v17 = 0LL;
      v26 = v18;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___(
        &v25,
        &v26);
      v20 = winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollection<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::TileRemoved(
              v15,
              v30,
              v19,
              &v25);
      v21 = *(void **)v20;
      *(_QWORD *)v20 = 0LL;
      v28 = *(_QWORD *)(v20 + 8);
      v27 = 0LL;
      v32 = v21;
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=(&v27, (__int64 *)(a1 + 232));
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)(a1 + 232), (__int64 *)&v32);
      if ( v32 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v32);
      v22 = v28;
      v28 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 240) = v22;
      __1__event_revoker_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt___MP8type___abi_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(&v27);
      __1__event_revoker_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt___MP8type___abi_UIWindowTabExtension_Shell_UI_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(v30);
      if ( v25 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v25);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
    }
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBA,
                           (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v16);
  }
  return result;
}
