/*
 * XREFs of sin_0 @ 0x1802DF674
 * Callers:
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x18021BFE0 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x180286BF0 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x1802ABEA0 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1802AC0B0 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802AC16C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802B661C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
