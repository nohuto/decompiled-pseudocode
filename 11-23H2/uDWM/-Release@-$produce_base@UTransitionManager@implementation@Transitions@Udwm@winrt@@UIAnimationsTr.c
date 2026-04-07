/*
 * XREFs of ?Release@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@X@impl@winrt@@UEAAIXZ @ 0x1800FE9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,void>::Release(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 32) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
