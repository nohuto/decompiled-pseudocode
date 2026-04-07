/*
 * XREFs of ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105508
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B96A8 (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDE10 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D7F88 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F66E8 (-UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetCenter(CVisual *this, double a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  double v5; // rax

  v3 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 19) - v3) & _xmm) > 0.0000011920929
    || (v4 = a3, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 20) - v4) & _xmm) > 0.0000011920929) )
  {
    v5 = *(double *)this;
    *((double *)this + 19) = a2;
    *((double *)this + 20) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v5 + 24LL))(this, 16LL);
  }
}
