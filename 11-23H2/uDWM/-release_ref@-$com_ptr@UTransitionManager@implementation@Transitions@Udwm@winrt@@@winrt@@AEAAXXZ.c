/*
 * XREFs of ?release_ref@?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18005C4F0
 * Callers:
 *     _dynamic_atexit_destructor_for__winrt::Udwm::Transitions::implementation::TransitionManager::m_instance__ @ 0x180068910 (_dynamic_atexit_destructor_for__winrt--Udwm--Transitions--implementation--TransitionManager--m_i.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7620 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::implementation::TransitionManager>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(a1);
  return result;
}
