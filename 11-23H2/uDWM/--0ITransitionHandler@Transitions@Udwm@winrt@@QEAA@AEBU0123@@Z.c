/*
 * XREFs of ??0ITransitionHandler@Transitions@Udwm@winrt@@QEAA@AEBU0123@@Z @ 0x1800FC710
 * Callers:
 *     ?OnWindowMoveSizeChanged@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FE170 (-OnWindowMoveSizeChanged@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIA.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Udwm::Transitions::ITransitionHandler *__fastcall winrt::Udwm::Transitions::ITransitionHandler::ITransitionHandler(
        winrt::Udwm::Transitions::ITransitionHandler *this,
        const struct winrt::Udwm::Transitions::ITransitionHandler *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref(this);
  return this;
}
