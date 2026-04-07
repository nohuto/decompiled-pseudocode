/*
 * XREFs of ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x18004AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18004B2D4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C7EC (--$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::PutTransitionVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CTopLevelWindow3D *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct CTopLevelWindow3D *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = winrt::make<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(&v4, &v5);
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((char *)this + 96, v3);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
