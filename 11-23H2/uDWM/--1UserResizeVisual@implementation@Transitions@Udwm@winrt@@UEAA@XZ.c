/*
 * XREFs of ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1801040D8
 * Callers:
 *     ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x180100D14 (--_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006EC70 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104808 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::~UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  __int64 v2; // rdx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>'};
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 112, v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v8 )
    CBaseObject::Release(v8);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this + 16);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
