/*
 * XREFs of powf_0 @ 0x1802DF65C
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180165F78 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x180216EB8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ @ 0x18021BF10 (-CurrentInertiaPanningVelocity@CPositionMotion@@AEBAMXZ.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18021FD70 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x180220040 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1802B6104 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf_0(float X, float Y)
{
  return powf(X, Y);
}
