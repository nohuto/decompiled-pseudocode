/*
 * XREFs of ??$is_guid_of@UITransitionAnimationVisualNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180087FF0
 * Callers:
 *     ??$find@U?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x180098CD8 (--$find@U-$find_iid_traits@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winr.c)
 *     ??$find@U?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6370 (--$find@U-$find_iid_traits@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<ITransitionAnimationVisualNative>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<ITransitionAnimationVisualNative>;
  if ( *a1 == winrt::impl::guid_v<ITransitionAnimationVisualNative> )
    v1 = a1[1] - 0x73F63BA0C2CDDDB6LL;
  return v1 == 0;
}
