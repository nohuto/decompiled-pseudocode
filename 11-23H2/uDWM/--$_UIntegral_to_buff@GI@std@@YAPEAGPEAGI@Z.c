/*
 * XREFs of ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1800EF778
 * Callers:
 *     ?EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4FF8 (-EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<unsigned short,unsigned int>(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
