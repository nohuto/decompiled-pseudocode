/*
 * XREFs of ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F7128
 * Callers:
 *     ??_EWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F7220 (--_EWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x18001EBA0 (-subtract_reference@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Private.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800AB8A0 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7538 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::~WindowMaximizeSnapTransitionHandler(
        CAnimationResource **this)
{
  CAnimationResource *v2; // rcx
  CAnimationResource *v3; // rcx

  *this = (CAnimationResource *)&winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::`vftable';
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::Cancel((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)this);
  v2 = this[8];
  if ( v2 )
    CAnimationResource::Release(v2);
  v3 = this[7];
  if ( v3 )
    CAnimationResource::Release(v3);
  if ( this[5] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 5));
  if ( this[4] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 4));
  if ( this[3] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(this + 3));
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
