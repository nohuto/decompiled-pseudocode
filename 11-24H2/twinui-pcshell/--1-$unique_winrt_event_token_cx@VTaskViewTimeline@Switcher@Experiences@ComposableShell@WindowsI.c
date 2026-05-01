/*
 * XREFs of ??1?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAA@XZ @ 0x1802BFCF4
 * Callers:
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x1806BA1A4 (--1TaskViewFrame@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1802BFD1C (-reset@-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::~unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>(
        __int64 a1)
{
  wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::reset(a1);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 8));
}
