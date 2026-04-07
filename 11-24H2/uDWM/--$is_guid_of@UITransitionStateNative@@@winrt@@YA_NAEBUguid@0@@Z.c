/*
 * XREFs of ??$is_guid_of@UITransitionStateNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18009A8DC
 * Callers:
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E6B84 (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<ITransitionStateNative>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<ITransitionStateNative>;
  if ( *a1 == winrt::impl::guid_v<ITransitionStateNative> )
    v1 = a1[1] + 0x3F004508A35FD080LL;
  return v1 == 0;
}
