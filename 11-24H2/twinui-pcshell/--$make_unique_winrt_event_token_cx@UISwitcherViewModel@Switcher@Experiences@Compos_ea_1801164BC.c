/*
 * XREFs of ??$make_unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1801164BC
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180115058 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18011652C (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A02F0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@3456@@Z @ 0x1806A2B18 (-add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInter.c)
 */

_QWORD *wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v8; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::add(
    a2,
    (__int64 *)va,
    v8);
  *a1 = v6;
  a1[1] = 0LL;
  a1[1] = Platform::Details::GetWeakReference(a2);
  a1[2] = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::remove;
  a1[3] = 0LL;
  return a1;
}
