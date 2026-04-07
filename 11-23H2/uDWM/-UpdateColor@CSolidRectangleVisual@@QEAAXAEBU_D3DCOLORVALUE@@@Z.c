/*
 * XREFs of ?UpdateColor@CSolidRectangleVisual@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800D8918
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSolidRectangleVisual::UpdateColor(CSolidRectangleVisual *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - *((float *)this + 79)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 76)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 77)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 78)) & _xmm) > 0.0000011920929 )
  {
    v2 = *(_QWORD *)this;
    *((_OWORD *)this + 19) = xmmword_18012A7B8;
    (*(void (__fastcall **)(CSolidRectangleVisual *, __int64))(v2 + 24))(this, 0x4000LL);
  }
}
