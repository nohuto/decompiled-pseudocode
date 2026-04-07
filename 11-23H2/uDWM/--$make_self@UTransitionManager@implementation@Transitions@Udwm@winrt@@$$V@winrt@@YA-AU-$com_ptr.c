/*
 * XREFs of ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18001CB54
 * Callers:
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18001CE34 (--0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::implementation::TransitionManager **__fastcall winrt::make_self<winrt::Udwm::Transitions::implementation::TransitionManager,>(
        winrt::Udwm::Transitions::implementation::TransitionManager **a1)
{
  winrt::Udwm::Transitions::implementation::TransitionManager *v2; // rax
  winrt::Udwm::Transitions::implementation::TransitionManager *v3; // rbx

  v2 = (winrt::Udwm::Transitions::implementation::TransitionManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                        WPF::g_pProcessHeap,
                                                                        184LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xB8uLL);
    winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager(v3);
    *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionManager>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionManager,std::tuple<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>>'};
    *((_QWORD *)v3 + 5) = &winrt::Udwm::Transitions::implementation::TransitionManager::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>'};
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
