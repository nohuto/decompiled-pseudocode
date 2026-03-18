/*
 * XREFs of ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180227AE0
 * Callers:
 *     <none>
 * Callees:
 *     sin_0 @ 0x1802E8914 (sin_0.c)
 */

double __fastcall XamlSineInterpolation::EvaluateCurve(XamlSineInterpolation *this, double a2)
{
  return 1.0 - sin_0((1.0 - a2) * 3.141592741012573 * 0.5);
}
