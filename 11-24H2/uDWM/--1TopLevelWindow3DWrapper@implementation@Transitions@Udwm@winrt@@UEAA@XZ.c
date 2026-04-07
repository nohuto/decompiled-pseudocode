/*
 * XREFs of ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004AE00
 * Callers:
 *     ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18004AAF8 (--_G-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winr.c)
 *     ??_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x18004AB30 (--_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x18004C6A0 (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x180096890 (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  CBaseObject **v2; // rdi
  __int64 v3; // rcx
  CTopLevelWindow *v4; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  v2 = (CBaseObject **)((char *)this + 32);
  CTopLevelWindow3D::UnregisterAnimationCompletedHandler(*((CTopLevelWindow3D **)this + 4));
  v3 = *((_QWORD *)*v2 + 36);
  if ( v3 )
  {
    v4 = *(CTopLevelWindow **)(v3 + 440);
    if ( v4 )
      CTopLevelWindow::SetSuppressBorderUpdates(v4, 0);
  }
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40));
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v2);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>((char *)this + 16);
}
