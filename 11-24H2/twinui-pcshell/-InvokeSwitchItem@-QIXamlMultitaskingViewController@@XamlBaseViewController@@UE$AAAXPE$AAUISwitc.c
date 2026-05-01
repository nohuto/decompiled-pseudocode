/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D03C
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806BE8C0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D1B8 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007D3B0 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18011C634 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x18029C960 (Windows--Internal--ComTaskPool--QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  __int64 v5; // rbx
  IUnknown *v6; // rdi
  __int64 v7; // rcx
  __int64 **v8; // r14
  __int64 v9; // rax
  bool v10; // si
  __int64 **v11; // rdi
  __int64 *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-20h] BYREF
  IUnknown *v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  LODWORD(v16) = 0;
  AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v17, a2);
  v5 = v17;
  if ( v17 )
  {
    v6 = *(IUnknown **)(a1 + 56);
    if ( v6 )
      ((void (__fastcall *)(_QWORD))v6->lpVtbl->AddRef)(*(_QWORD *)(a1 + 56));
    CoAllowSetForegroundWindow(v6, 0LL);
    v14 = v6;
    if ( v6 )
      ((void (__fastcall *)(IUnknown *))v6->lpVtbl->AddRef)(v6);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(v15, v5);
    Windows::Internal::ComTaskPool::QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___(v7, &v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    if ( v6 )
      ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  }
  else
  {
    v8 = (__int64 **)(a1 + 96);
    v10 = 0;
    if ( *(_QWORD *)(a1 + 96) )
    {
      v9 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v13, a2);
      v4 = 1;
      LODWORD(v16) = 1;
      if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
                              a1 + 96,
                              v9) )
        v10 = 1;
    }
    if ( (v4 & 1) != 0 )
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
    if ( v10 )
    {
      v11 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                          v8,
                          &v14);
      v12 = (__int64 *)from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v13, a2);
      winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
        v11,
        &v16,
        v12);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
