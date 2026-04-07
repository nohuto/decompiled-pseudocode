/*
 * XREFs of ?QueryInterface@?$produce_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180088980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 8) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
