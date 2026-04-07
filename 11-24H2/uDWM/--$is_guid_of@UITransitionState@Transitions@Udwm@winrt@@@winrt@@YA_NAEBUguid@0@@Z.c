/*
 * XREFs of ??$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180086FC0
 * Callers:
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6B84 (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::ITransitionState>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState>>::value;
  if ( *a1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState>>::value )
    v1 = a1[1] - 0x6DEACEDF3B123EA2LL;
  return v1 == 0;
}
