/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke @ 0x1800963B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B358 (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 *     ??$?9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18008714C (--$-9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180096424 (-unconditional_release_ref@-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private.c)
 *     ?get@?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18009643C (-get@-$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Invoke(
        __int64 a1)
{
  char v1; // al
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *v2; // rbx
  __int64 result; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *v4; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::get(
    a1 + 16,
    &v4);
  v1 = winrt::operator!=<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>();
  try
  {
    v2 = v4;
    if ( v1 )
      winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::OnPositionAnimationComplete(v4);
    if ( v2 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>::unconditional_release_ref(&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
