/*
 * XREFs of ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8
 * Callers:
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x180019F3C (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x18001A020 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x18001A844 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800D761C (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180190AEC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801E8440 (-StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18020CDE0 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 *     ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180238D00 (-Uninitialize@UwpWindowManagerBridge@@UEAAXXZ.c)
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802BFFEC (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180436AD0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 *     ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18044A830 (-ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnv.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AB60 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001ABD0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001AD78 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802C3AEC (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F8910 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  bool IsIDKOnXboxEnabled; // al
  Windows::Internal::ApplicationModel::WindowManagement *v3; // rcx
  char v4; // bl
  bool v5; // di
  Windows::Internal::ApplicationModel::WindowManagement *v7; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v7) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v3 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v7;
  v4 = 0;
  v5 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v7 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v3 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v7;
  }
  if ( (_DWORD)v3 == 5 && v5 || (_DWORD)v3 == 11 && v5 || (_DWORD)v3 == 12 && v5 )
    goto LABEL_8;
  if ( (_DWORD)v3 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v3) )
      goto LABEL_8;
    LODWORD(v3) = (_DWORD)v7;
  }
  if ( (_DWORD)v3 == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl);
LABEL_8:
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementInProc>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_WindowManagementInProc>::GetImpl'::`2'::impl);
    return 1;
  }
  return v4;
}
