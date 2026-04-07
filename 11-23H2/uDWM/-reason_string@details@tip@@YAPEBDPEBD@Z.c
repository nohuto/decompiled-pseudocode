/*
 * XREFs of ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x1800F3228
 * Callers:
 *     ?evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ @ 0x1800F6844 (-evaluate@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

const char *__fastcall tip::details::reason_string(tip::details *this, const char *a2)
{
  const char *result; // rax
  const char *v3; // rdx
  char v4; // r8

  for ( result = (const char *)this; ; result = v3 )
  {
    v4 = *(_BYTE *)this;
    if ( !*(_BYTE *)this )
      break;
    this = (tip::details *)((char *)this + 1);
    v3 = (const char *)this;
    if ( v4 != 58 )
      v3 = result;
  }
  return result;
}
