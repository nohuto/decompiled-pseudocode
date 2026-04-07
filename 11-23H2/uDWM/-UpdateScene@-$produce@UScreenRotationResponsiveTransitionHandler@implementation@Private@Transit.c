/*
 * XREFs of ?UpdateScene@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x180016E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18006EC98 (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::UpdateScene(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1 + 32;
    v2 = a1 + 40;
  }
  else
  {
    v1 = 48LL;
    v2 = 56LL;
  }
  if ( *(_QWORD *)v2 && *(_QWORD *)(*(_QWORD *)v2 + 24LL) )
  {
    winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v8,
      *(_QWORD *)v1);
    v4 = v8;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, *(_QWORD *)v2);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x65,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
        (const char *)(unsigned int)v5,
        v6);
    if ( v4 )
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v8);
  }
  return 0LL;
}
