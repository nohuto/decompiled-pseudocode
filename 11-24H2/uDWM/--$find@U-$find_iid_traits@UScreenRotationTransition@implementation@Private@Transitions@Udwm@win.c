/*
 * XREFs of ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800DF89C
 * Callers:
 *     ??$find_iid@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUScreenRotationTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180087E7C (--$find_iid@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180087FC8 (--$is_guid_of@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@.c)
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180088A40 (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // r8
  __int64 v4; // rdx
  _QWORD *v5; // r8

  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(*(_QWORD **)(a1 + 8)) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v2 + 16LL) & -(__int64)(*v2 != 0LL));
  if ( winrt::is_guid_of<winrt::Udwm::Transitions::Private::IScreenRotationTransition>(v1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v5 + 24LL) & -(__int64)(*v5 != 0LL));
  return v4;
}
