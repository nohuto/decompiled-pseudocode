/*
 * XREFs of ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180100DA8
 * Callers:
 *     ?get_AnimationsEnabled@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180103BA0 (-get_AnimationsEnabled@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITrans.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18004DFF4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F6F98 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  __int64 (__fastcall ****v1)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 v2; // rbx
  CTopLevelWindow3D *v3; // rax
  char ShouldShowTransition; // di
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))((char *)this + 104);
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 13, &v6) )
    return 1;
  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    *v1);
  v2 = v6;
  v3 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  ShouldShowTransition = CTopLevelWindow3D::ShouldShowTransition(v3);
  if ( v2 )
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v6);
  return ShouldShowTransition;
}
