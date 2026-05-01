/*
 * XREFs of ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x1806ADF40
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18022E7B4 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AD394 (-StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AD6A0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A74F0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *))
{
  __int64 v1; // rdi
  int v2; // ebx
  double v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]

  v4 = 0.0;
  v1 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v5 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v1 + 104LL))(v1, &v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v1);
  __abi_ThrowIfFailed(v2);
  return v4;
}
