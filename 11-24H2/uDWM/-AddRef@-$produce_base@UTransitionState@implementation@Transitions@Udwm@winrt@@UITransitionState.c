/*
 * XREFs of ?AddRef@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAIXZ @ 0x18008B480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
