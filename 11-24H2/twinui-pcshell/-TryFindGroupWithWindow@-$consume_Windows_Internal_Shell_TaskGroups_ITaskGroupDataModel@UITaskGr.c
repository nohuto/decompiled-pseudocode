/*
 * XREFs of ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x18026D278
 * Callers:
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x18002B950 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4ActivateWindowsOptions@34567@@Z @ 0x180587778 (-ActivateWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowMigrationEventArgs@94567@@Z @ 0x180588C50 (-OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@win.c)
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1806A5CB0 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B4444 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
        __int64 **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v5 = *v3;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 72))(v3, v6, &v11);
  winrt::check_hresult(&v12, v7, &v9);
  *a2 = v11;
  return a2;
}
