/*
 * XREFs of ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x180100D14
 * Callers:
 *     ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z @ 0x1800665A0 (--_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1801040D8 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::`vector deleting destructor'(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        char a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual::~UserResizeVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::implementation::UserResizeVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
