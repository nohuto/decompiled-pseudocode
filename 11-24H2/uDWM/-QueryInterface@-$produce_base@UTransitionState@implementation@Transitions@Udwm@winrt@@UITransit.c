/*
 * XREFs of ?QueryInterface@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180087C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 16) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
