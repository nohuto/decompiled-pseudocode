/*
 * XREFs of ??1TransitionManager@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FC96C
 * Callers:
 *     ??_G?$heap_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800FCC4C (--_G-$heap_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006EC70 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FBD50 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransitionHandler@Transitions.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::~TransitionManager(
        winrt::Udwm::Transitions::implementation::TransitionManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  std::_Deallocate<16,0>(
    *((void **)this + 18),
    (*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
    v2,
    *((_QWORD *)this + 16));
  std::_Deallocate<16,0>(*((void **)this + 16), 0x20uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 10),
    (*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
    v3,
    *((_QWORD *)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x20uLL);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)this + 40);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
