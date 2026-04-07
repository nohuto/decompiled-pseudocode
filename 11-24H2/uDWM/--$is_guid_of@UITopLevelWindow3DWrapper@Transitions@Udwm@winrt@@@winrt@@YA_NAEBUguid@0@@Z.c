/*
 * XREFs of ??$is_guid_of@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800850D0
 * Callers:
 *     ??$find@U?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6370 (--$find@U-$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper> )
    v1 = a1[1] + 0x53820372FAC41874LL;
  return v1 == 0;
}
