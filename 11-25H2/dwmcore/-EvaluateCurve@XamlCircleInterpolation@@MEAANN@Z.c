/*
 * XREFs of ?EvaluateCurve@XamlCircleInterpolation@@MEAANN@Z @ 0x18022B090
 * Callers:
 *     <none>
 * Callees:
 *     sqrt_0 @ 0x1802E892C (sqrt_0.c)
 */

double __fastcall XamlCircleInterpolation::EvaluateCurve(XamlCircleInterpolation *this, double a2)
{
  return 1.0 - sqrt_0(1.0 - a2 * a2);
}
