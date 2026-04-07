/*
 * XREFs of ??_G?$heap_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800FCC4C
 * Callers:
 *     ??_ETransitionManager@implementation@Transitions@Udwm@winrt@@WCI@EAAPEAXI@Z @ 0x1800664A0 (--_ETransitionManager@implementation@Transitions@Udwm@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TransitionManager@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FC96C (--1TransitionManager@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::TransitionManager *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionManager>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::TransitionManager *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::TransitionManager::~TransitionManager(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::implementation::TransitionManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
