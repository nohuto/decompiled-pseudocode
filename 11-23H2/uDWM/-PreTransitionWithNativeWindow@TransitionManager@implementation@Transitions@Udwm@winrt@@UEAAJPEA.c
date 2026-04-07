/*
 * XREFs of ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x1800FE440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x18002FAC0 (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800FBFB0 (--$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800FC2D4 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800FE300 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow(
        __int64 a1,
        __int64 a2,
        int a3)
{
  const char *v4; // r9
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
    a1,
    (winrt::Windows::Foundation::IUnknown *)&v7,
    a3);
  try
  {
    if ( v7 )
    {
      winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>((__int64 *)&v11);
      winrt::impl::as<Udwm::Transitions::ITransitionStateNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        v8,
        v11);
      v5 = v8[0];
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8[0] + 48LL))(v8[0], a2);
      if ( v5 )
        winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(v8);
      winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        &v7,
        (unsigned int *)&v10,
        &v11);
      if ( v11 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    }
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
                           v4);
  }
  return result;
}
