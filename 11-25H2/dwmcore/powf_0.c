/*
 * XREFs of powf_0 @ 0x1802E88FC
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18011D918 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x180222EB8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x180227A10 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18022AFE0 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18022B2B0 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1802BF754 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
