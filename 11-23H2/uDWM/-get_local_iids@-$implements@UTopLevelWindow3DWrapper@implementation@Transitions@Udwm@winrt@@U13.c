/*
 * XREFs of ?get_local_iids@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180059850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::TopLevelWindow3DWrapper>>::value;
  return a2;
}
