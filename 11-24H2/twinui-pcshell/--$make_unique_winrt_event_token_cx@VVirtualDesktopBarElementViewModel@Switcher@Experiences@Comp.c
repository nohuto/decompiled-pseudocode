/*
 * XREFs of ??$make_unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P812345@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@2345@@ZP812345@E$AAAXV678@@ZV92345@@details@wil@@YA?AV?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@P834567@E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@4567@@ZP834567@E$AAAXV89Windows@@@Z1@Z @ 0x1802B7D30
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180115058 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806BE6E0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::make_unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel,Windows::Foundation::EventRegistrationToken (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler __gc *)__gc ,void (WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::*)(Windows::Foundation::EventRegistrationToken)__gc ,WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5)
{
  __int128 v8; // xmm6
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))a3)(a2 + *(int *)(a3 + 8), &v10, a5);
  v8 = *a4;
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 8) = Platform::Details::GetWeakReference(a2);
  *(_OWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}
