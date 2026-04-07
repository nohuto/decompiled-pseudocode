/*
 * XREFs of ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E2044
 * Callers:
 *     ?OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180084CCC (-OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEA.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E2020 (-StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x1800EC2EC (-ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  CGlobalTimeTrackVisual *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CGlobalTimeTrackVisual *)*((_QWORD *)this + 7);
  if ( v2 )
    CGlobalTimeTrackVisual::ReleaseTransitionHandler(v2);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  v3 = (CTimelineBase *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  *((_DWORD *)this + 21) = 0;
}
