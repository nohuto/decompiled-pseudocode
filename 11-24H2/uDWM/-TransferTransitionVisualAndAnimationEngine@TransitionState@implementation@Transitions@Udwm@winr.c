/*
 * XREFs of ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x18004AF40
 * Callers:
 *     ?TransferTransitionVisualAndAnimationEngine@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18004AED0 (-TransferTransitionVisualAndAnimationEngine@-$produce@UTransitionState@implementation@Transition.c)
 * Callees:
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001514C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18004C1CC (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004C22C (--$as@UITransitionAnimationVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x18004C6A0 (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DEEFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferTransitionVisualAndAnimationEngine(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  CTopLevelWindow3D *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v12,
    *(_QWORD *)(a1 + 104));
  v4 = v12;
  v5 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
  v6 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(v5, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x106,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
      (const char *)(unsigned int)v6,
      v10);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CTopLevelWindow::SetSuppressBorderUpdates(*(CTopLevelWindow **)(*(_QWORD *)(v7 + 288) + 440LL), 1);
  v8 = *(_QWORD *)(a1 + 104);
  *a2 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v4 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v12);
  return a2;
}
