/*
 * XREFs of ?AddRef@?$produce_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x1800889A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::ITransition,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 8) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
