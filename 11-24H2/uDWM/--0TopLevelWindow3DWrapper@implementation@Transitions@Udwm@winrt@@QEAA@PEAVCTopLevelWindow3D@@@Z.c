/*
 * XREFs of ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18004C874
 * Callers:
 *     ??$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C824 (--$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAV.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0?$producers_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UTopLevelWindow3DWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x180096D1C (--0-$producers_base@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@V-$tuple@UTo.c)
 */

_QWORD *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        struct CTopLevelWindow3D *a2,
        __int64 a3)
{
  _QWORD *v3; // r9
  CMILRefCountBase *v4; // r10

  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>(
    this,
    a2,
    a3,
    this);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  v3[3] = 1LL;
  *v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  v3[2] = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  v3[4] = v4;
  if ( v4 )
    CMILRefCountBase::AddRef(v4);
  v3[5] = 0LL;
  return v3;
}
