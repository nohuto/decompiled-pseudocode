/*
 * XREFs of ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x180103314
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180103290 (-TransferTransitionVisualAndAnimationEngine@-$produce@UTransitionState@implementation@Transition.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180032488 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F6F98 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // rbx
  CTopLevelWindow3D *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 104));
  v4 = v11;
  v5 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  v6 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(v5, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      276LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4) + 336) + 440LL);
  if ( *(_BYTE *)(v7 + 864) != 1 )
    *(_BYTE *)(v7 + 864) = 1;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 104);
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  if ( v4 )
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v11);
  return a2;
}
