/*
 * XREFs of ?Cancel@?$produce@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHXZ @ 0x18004B680
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B6AC (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::ITransition>::Cancel(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}
