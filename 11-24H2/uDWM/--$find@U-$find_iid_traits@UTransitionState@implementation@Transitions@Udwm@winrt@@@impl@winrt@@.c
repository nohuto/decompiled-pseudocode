/*
 * XREFs of ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6B84
 * Callers:
 *     ??$find_iid@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTransitionState@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800899EC (--$find_iid@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUTrans.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180086FC0 (--$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UITransitionStateNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18009A8DC (--$is_guid_of@UITransitionStateNative@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UITransitionStateNativePrivate@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800E6BF8 (--$is_guid_of@UITransitionStateNativePrivate@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::TransitionState>>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // r8
  __int64 *v4; // r8
  __int64 v6; // rdx
  _QWORD *v7; // r8

  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransitionState>(*(_QWORD **)(a1 + 8)) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v2 + 16LL) & -(__int64)(*v2 != 0LL));
  if ( winrt::is_guid_of<ITransitionStateNative>(v1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(*v4);
  if ( (unsigned __int8)winrt::is_guid_of<ITransitionStateNativePrivate>() )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v7 + 8LL) & -(__int64)(*v7 != 0LL));
  return v6;
}
