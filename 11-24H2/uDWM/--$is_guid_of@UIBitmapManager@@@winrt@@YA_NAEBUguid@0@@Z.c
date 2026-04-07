/*
 * XREFs of ??$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800E4B30
 * Callers:
 *     ??$find@U?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E4934 (--$find@U-$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@.c)
 *     ??$find@U?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800E8330 (--$find@U-$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<IBitmapManager>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<IUserResizeVisualNative>;
  if ( *a1 == winrt::impl::guid_v<IUserResizeVisualNative> )
    v1 = a1[1] + 0x43C31C528C50EF4ALL;
  return v1 == 0;
}
