/*
 * XREFs of ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F815C
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800A64F0 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800AB418 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800AB510 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800AB780 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F3C24 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F6F98 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F83C8 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::StartCrossfadeAnimation(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  struct CAnimationResource **v2; // rdi
  int v3; // eax
  float v4; // xmm7_4
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct CAnimationResource *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct CAnimationResource **)((char *)this + 64);
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset((char *)this + 64);
  v3 = CAnimationResource::Create(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      264LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v3,
      v12);
  v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 175);
  v5 = CAnimationResource::AddCubic(*v2, 0.0, 1.0, 0.0, 0.0, 0.0);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      274LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v5,
      v13);
  v6 = CAnimationResource::AddCubic(
         *v2,
         *((float *)CDesktopManager::s_pDesktopManagerInstance + 174),
         1.0,
         -1.0 / v4,
         0.0,
         0.0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      283LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v6,
      v14);
  v7 = CAnimationResource::End(*v2, (float)(v4 + *((float *)CDesktopManager::s_pDesktopManagerInstance + 174)), 0.0);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      288LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v7,
      v14);
  v8 = *v2;
  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v16,
    *((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5));
  v9 = v16;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
  v11 = CAnimationResource::AddBinding((__int64)v8, v10, 8u);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      294LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.windowmaximizesnaptransitionhandler.cpp",
      (const char *)(unsigned int)v11,
      v14);
  if ( v9 )
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v16);
}
