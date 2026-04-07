/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18009A75C
 * Callers:
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800870C0 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     ?get@?$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18009643C (-get@-$weak_ref@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800E514C (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?get@?$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E622C (-get@-$weak_ref@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@win.c)
 *     ?get@?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800EBDE0 (-get@-$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
  return (void **)this;
}
