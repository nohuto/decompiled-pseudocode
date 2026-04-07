/*
 * XREFs of ??_G?$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E5020
 * Callers:
 *     ??_E?$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800E5010 (--_E-$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E4EA0 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::~WindowJointResizeTransition(a1);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}
