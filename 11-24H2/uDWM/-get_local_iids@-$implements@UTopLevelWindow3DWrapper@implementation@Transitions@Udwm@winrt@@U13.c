/*
 * XREFs of ?get_local_iids@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800E67F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>;
  return a2;
}
