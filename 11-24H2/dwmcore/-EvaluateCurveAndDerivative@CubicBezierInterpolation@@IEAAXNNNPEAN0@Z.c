/*
 * XREFs of ?EvaluateCurveAndDerivative@CubicBezierInterpolation@@IEAAXNNNPEAN0@Z @ 0x18004F8A0
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EE50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CubicBezierInterpolation::EvaluateCurveAndDerivative(
        CubicBezierInterpolation *this,
        double a2,
        double a3,
        double a4,
        double *a5,
        double *a6)
{
  double v7; // xmm4_8
  double v8; // xmm2_8

  v7 = (1.0 - a2) * 3.0;
  v8 = v7 * (1.0 - a2) * a3;
  *a5 = v7 * (a2 * a2) * a4 + v8 * a2 + a2 * a2 * a2;
  if ( a6 )
    *a6 = (1.0 - a2) * 6.0 * a2 * (a4 - a3) + v8 + (1.0 - a4) * (a2 * a2 * 3.0);
}
