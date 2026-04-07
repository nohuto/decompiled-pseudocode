/*
 * XREFs of ?UnregisterGlobalTimeChanged@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6460
 * Callers:
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?OnGlobalTimeUpdated@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationResponsiveTransitionHandler@3456@@impl@winrt@@UEAAHXZ @ 0x1800F55B0 (-OnGlobalTimeUpdated@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x180105174 (-ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UnregisterGlobalTimeChanged(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  CGlobalTimeTrackVisual *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al

  v2 = (CGlobalTimeTrackVisual *)*((_QWORD *)this + 7);
  if ( v2 )
    CGlobalTimeTrackVisual::ReleaseTransitionHandler(v2);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  v3 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  *((_DWORD *)this + 21) = 0;
}
