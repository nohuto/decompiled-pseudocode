/*
 * XREFs of ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180100B34
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800FCC9C (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006EC70 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800FFFD4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010004C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180100FF8 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180110EC0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  CBaseObject **v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::TransitionState::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,Udwm::Transitions::ITransitionStateNative,void>'};
  *((_QWORD *)this + 1) = &winrt::Udwm::Transitions::implementation::TransitionState::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,Udwm::Transitions::ITransitionStateNativePrivate,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  if ( !*((_BYTE *)this + 120) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !*((_BYTE *)this + 120) )
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(this);
  if ( *((_QWORD *)this + 14) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
  if ( *((_QWORD *)this + 13) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
  v2 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
      v2,
      *((winrt::Windows::Foundation::IUnknown **)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = (CBaseObject **)*((_QWORD *)this + 7);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
      v3,
      *((CBaseObject ***)this + 8));
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v5 )
    CBaseObject::Release(v5);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this + 24);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
