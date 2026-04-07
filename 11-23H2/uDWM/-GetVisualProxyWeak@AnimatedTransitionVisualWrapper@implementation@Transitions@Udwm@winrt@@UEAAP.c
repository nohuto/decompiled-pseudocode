/*
 * XREFs of ?GetVisualProxyWeak@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAVCVisualProxy@@XZ @ 0x1800ED6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::GetVisualProxyWeak(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  __int64 v1; // rdx
  struct CVisualProxy *result; // rax

  v1 = *((_QWORD *)this + 5);
  result = 0LL;
  if ( v1 )
    return *(struct CVisualProxy **)(v1 + 24);
  return result;
}
