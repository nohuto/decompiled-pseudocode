/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1801D3A90
 * Callers:
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D39E8 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$6 @ 0x1806D813D (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$6.c)
 *     _GuidedSnapAssistViewController::GuidedSnapAssistViewController_::_1_::dtor$5 @ 0x1806DE2B4 (_GuidedSnapAssistViewController--GuidedSnapAssistViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18003FB08 (-reset@-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@W.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>(
        _QWORD *a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::reset(a1);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
}
