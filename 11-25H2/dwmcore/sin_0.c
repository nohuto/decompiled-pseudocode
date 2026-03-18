/*
 * XREFs of sin_0 @ 0x1802E8914
 * Callers:
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180227AE0 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x180292190 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x1802B5A90 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x1802B5CA0 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802B5D5C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1802BFC6C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
