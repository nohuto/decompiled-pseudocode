/*
 * XREFs of ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x1800F4358
 * Callers:
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1800F3DB8 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1800F4020 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm2_4

  v1 = *((float *)this + 35);
  v2 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 28) / v1;
  *((float *)this + 33) = (float)((float)((float)(*((float *)this + 34) - *((float *)this + 30)) * v2)
                                + *((float *)this + 30))
                        - *((float *)this + 34);
}
