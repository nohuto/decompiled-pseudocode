/*
 * XREFs of ?__abi_translateCurrentException@@YAJ_N@Z @ 0x1802D9924
 * Callers:
 *     _GuidedSnapAssistViewController::[Platform::Details::IWeakReferenceSource]::__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference_::_1_::catch$0 @ 0x1806D7B2F (_GuidedSnapAssistViewController--[Platform--Details--IWeakReferenceSource]--__abi_Platform_Detai.c)
 *     _XamlBaseViewController::[IXamlSwitcherWindowInteractionEvents]::__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered_::_1_::catch$0 @ 0x1806D7B5D (_XamlBaseViewController--[IXamlSwitcherWindowInteractionEvents]--__abi_IXamlSwitcherWindowIntera.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::__abi_IXamlMultitaskingViewController____abi_InvokeSwitchItem_::_1_::catch$0 @ 0x1806D7B8B (_XamlBaseViewController--[IXamlMultitaskingViewController]--__abi_IXamlMultitaskingViewControlle.c)
 *     _XamlBaseViewController::[IXamlSwitcherWindowInteractionEvents]::__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged_::_1_::catch$0 @ 0x1806D7BB9 (_XamlBaseViewController--[IXamlSwitcherWindowInteractionEvents]--__abi_IXamlSwitche_ea_1806D7BB9.c)
 *     _XamlAltTabViewController::[Platform::Details::IWeakReferenceSource]::__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference_::_1_::catch$0 @ 0x1806D7BE7 (_XamlAltTabViewController--[Platform--Details--IWeakReferenceSource]--__abi_Platform_Details_IWe.c)
 *     _ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_IDelegate::[WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_IDelegate]::__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemInvokedEventHandler___abi_IDelegate____abi_Invoke_::_1_::catch$0 @ 0x1806DA075 (_ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--__abi_IDelegate--[WindowsInter.c)
 *     _UI::Xaml::Input::KeyEventHandler::__abi_IDelegate::[Windows::UI::Xaml::Input::KeyEventHandler::__abi_IDelegate]::__abi_Windows_UI_Xaml_Input_KeyEventHandler___abi_IDelegate____abi_Invoke_::_1_::catch$0 @ 0x1806DACAD (_UI--Xaml--Input--KeyEventHandler--__abi_IDelegate--[Windows--UI--Xaml--Input--KeyEventHandler--.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$1 @ 0x1806DB6B0 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x1806DB7C4 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$5.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::[Windows::UI::Xaml::Interop::IBindableObservableVector]::__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged_::_1_::catch$0 @ 0x1807049D5 (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1807049D5.c)
 *     _IDisposable::Array_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_::[Platform::IDisposable]::__abi_Platform_IDisposable____abi__Dispose__::_1_::catch$0 @ 0x180704A03 (_IDisposable--Array_WindowsInternal--ComposableShell--Experiences--Switcher--ISwitchItemContextM.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::[Windows::UI::Xaml::Interop::IBindableVector]::__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_IndexOf_::_1_::catch$0 @ 0x180704F5D (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_180704F5D.c)
 *     ?catch$0@?0??__abi_Windows_Foundation_?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@234@UE$AAAJPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z@4HA @ 0x180704F8B (-catch$0@-0--__abi_Windows_Foundation_-$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssis.c)
 *     _XamlBaseViewController::[Platform::Details::IWeakReferenceSource]::__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference_::_1_::catch$0 @ 0x180705CB6 (_XamlBaseViewController--[Platform--Details--IWeakReferenceSource]--__abi_Platform_Details_IWeak.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn __abi_translateCurrentException()
{
  __int64 v0; // rdx
  _QWORD *v1; // rdx
  _QWORD v2[5]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h] BYREF

  v2[4] = -2LL;
  try
  {
    throw;
  }
  catch ( Platform::Exception *v3 )
  {
    *(_DWORD *)(v0 + 72) = Platform::Details::ReCreateFromException(v3);
    return;
  }
  catch ( std::bad_alloc )
  {
    v1 = v2;
    if ( !*((_BYTE *)v1 + 64) )
    {
      __abi_FailFast();
      __debugbreak();
    }
    RoOriginateError_0(2147942414LL, 0LL);
    return;
  }
}
