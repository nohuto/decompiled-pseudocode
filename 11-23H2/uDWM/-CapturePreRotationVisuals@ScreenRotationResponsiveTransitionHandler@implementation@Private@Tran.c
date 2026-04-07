/*
 * XREFs of ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4974
 * Callers:
 *     ?HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F52A8 (-HandleAnimationEnd@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18002EB74 (-Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180045AEC (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18006EC98 (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::CapturePreRotationVisuals(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, char *, char *, _QWORD); // rbp
  __int64 v5; // rcx
  CBaseObject *v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured(this) )
  {
    winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v10,
      *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v2 + 48));
    v3 = v10;
    v4 = *(__int64 (__fastcall **)(__int64, char *, char *, _QWORD))(*(_QWORD *)v10 + 56LL);
    v5 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v5 )
      CBaseObject::Release((CBaseObject *)(v5 + 8));
    v6 = (CBaseObject *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = v4(v3, (char *)this + 56, (char *)this + 64, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        168LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
        (const char *)(unsigned int)v7,
        v8);
    if ( v3 )
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v10);
  }
  CVisual::MoveToFront((CVisual *)(*((_QWORD *)this + 8) + 8LL), 1);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DrawBackground(this);
}
