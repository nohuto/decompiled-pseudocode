/*
 * XREFs of ??$find@U?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E8330
 * Callers:
 *     ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800E83E4 (--$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUUser.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800E4B30 (--$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800E84CC (--$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::implementation::UserResizeVisual>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v5; // rdx
  __int64 *v6; // r8

  if ( (unsigned __int8)winrt::is_guid_of<winrt::Udwm::Transitions::IUserResizeVisual>(*(_QWORD *)(a1 + 8), a2, a1) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v3 + 8LL) & -(__int64)(*v3 != 0LL));
  if ( winrt::is_guid_of<IBitmapManager>(v2) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(*v6);
  return v5;
}
