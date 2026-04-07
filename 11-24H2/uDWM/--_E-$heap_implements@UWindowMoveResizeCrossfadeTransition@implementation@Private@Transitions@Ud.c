/*
 * XREFs of ??_E?$heap_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E3E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E3DC8 (--1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

CAnimationResource **__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::`vector deleting destructor'(
        CAnimationResource **a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::~WindowMoveResizeCrossfadeTransition(a1);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}
