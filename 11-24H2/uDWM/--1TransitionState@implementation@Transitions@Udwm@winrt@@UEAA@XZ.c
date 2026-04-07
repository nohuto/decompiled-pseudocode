/*
 * XREFs of ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004B1DC
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18004AE8C (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAP.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004A36C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180079A10 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800965A0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180099EA8 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNativePrivate,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  if ( !*((_BYTE *)this + 120) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !*((_BYTE *)this + 120) )
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(this);
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
  winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
  v2 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(v2);
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v3, *((_QWORD *)this + 8));
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 6);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 5);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>((char *)this + 24);
}
