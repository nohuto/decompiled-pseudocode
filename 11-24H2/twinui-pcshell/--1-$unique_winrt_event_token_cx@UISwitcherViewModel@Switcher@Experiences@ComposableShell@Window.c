/*
 * XREFs of ??1?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x18003F888
 * Callers:
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D39E8 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1801DD4A8 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x18069EB7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 *     ?RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A02F0 (-RegisterForEvents@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BA1A4 (--1TaskViewFrame@@UEAA@XZ.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$1 @ 0x1806D39D5 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$1.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806D39EE (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806D3A07 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806D3A20 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$2 @ 0x1806D80D9 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$2.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$3 @ 0x1806D80F2 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$3.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$4 @ 0x1806D810B (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$4.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x1806D8124 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18003FBBC (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel>::reset();
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
