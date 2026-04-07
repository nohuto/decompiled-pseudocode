/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180095614
 * Callers:
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$0 @ 0x1800F6DD6 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeVisual_winrt--.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition_winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition_::get_weak_winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition__::_1_::dtor$1 @ 0x1800F6DE8 (_winrt--impl--root_implements_winrt--Udwm--Transitions--Private--implementation--WindowMoveResiz.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$2 @ 0x1800F6E68 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransi_ea_1800F6E68.c)
 *     _std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call_::_1_::dtor$0 @ 0x1800F77F5 (_std--_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_--_Do_call_--_1_--dtor$.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::Private::ScreenRotationTransition_::from_com_ref_winrt::Udwm::Transitions::Private::ScreenRotationTransition_const_&__::_1_::dtor$0 @ 0x1800F8A97 (_winrt--weak_ref_winrt--Udwm--Transitions--Private--ScreenRotationTransition_--from_com_ref_winr.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$1 @ 0x1800F8AA9 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F8AA9.c)
 *     _winrt::make_weak_winrt::Udwm::Transitions::Private::ScreenRotationTransition__::_1_::dtor$1 @ 0x1800F8AD6 (_winrt--make_weak_winrt--Udwm--Transitions--Private--ScreenRotationTransition__--_1_--dtor$1.c)
 *     __lambda_824c6eb626f18db003f69816ba8f789d_::operator()_::_1_::dtor$0 @ 0x1800F8AE8 (__lambda_824c6eb626f18db003f69816ba8f789d_--operator()_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$1 @ 0x1800F8B27 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_1_::dtor$2 @ 0x1800F8B4B (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800F8B4B.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$1 @ 0x1800F8BA5 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_1_--dto.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
  return result;
}
