/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E4934
 * Callers:
 *     ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800E4988 (--$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@wi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180088A40 (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800E4B30 (--$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>>(
        __int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r8
  __int64 v4; // rdx
  __int64 *v5; // r8

  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(*(_QWORD **)(a1 + 8)) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v2 + 8LL) & -(__int64)(*v2 != 0LL));
  if ( (unsigned __int8)winrt::is_guid_of<IBitmapManager>(v1, 0LL) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(*v5);
  return v4;
}
