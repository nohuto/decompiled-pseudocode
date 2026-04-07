/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800D6804
 * Callers:
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$0 @ 0x1800F7094 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F7094.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_Udwm::Transitions::IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$1 @ 0x1800F70A0 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800F70A0.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800F7ED9 (_winrt--Udwm--Transitions--Private--implementation--WindowMaximizeSnapTransitionHan_ea_1800F7ED9.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::ITransitionState_::from_com_ref_winrt::Udwm::Transitions::ITransitionState_const_&__::_1_::dtor$0 @ 0x1800F8A79 (_winrt--weak_ref_winrt--Udwm--Transitions--ITransitionState_--from_com_ref_winrt--Udwm--Transiti.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$6 @ 0x1800F964B (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHandler--PostTran.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$0 @ 0x1800F9657 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9657.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition_::_1_::dtor$2 @ 0x1800F966F (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F966F.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$1 @ 0x1800FAAE3 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_1_--dto.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$1 @ 0x180104740 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$1.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler_::from_com_ref_winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler_const_&__::_1_::dtor$0 @ 0x180104E1D (_winrt--weak_ref_winrt--Udwm--Transitions--Private--ScreenRotationResponsiveTransitionHandler_--.c)
 *     _CGlobalTimeTrackVisual::SetTransitionHandlerResponsive_::_1_::dtor$3 @ 0x18010526D (_CGlobalTimeTrackVisual--SetTransitionHandlerResponsive_--_1_--dtor$3.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
