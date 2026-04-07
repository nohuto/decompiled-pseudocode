/*
 * XREFs of ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18004B008
 * Callers:
 *     ?get_AnimationsEnabled@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x18004ADC0 (-get_AnimationsEnabled@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITrans.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18004BF60 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18004C1CC (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004C22C (--$as@UITransitionAnimationVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbx
  CTopLevelWindow3D *v3; // rax
  char ShouldShowTransition; // di
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (_QWORD *)((char *)this + 104);
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator!=((char *)this + 104, &v6) )
    return 1;
  winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    *v1);
  v2 = v6;
  v3 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  ShouldShowTransition = CTopLevelWindow3D::ShouldShowTransition(v3);
  if ( v2 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v6);
  return ShouldShowTransition;
}
