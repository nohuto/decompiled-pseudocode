/*
 * XREFs of _o_asinf_0 @ 0x18009D49C
 * Callers:
 *     QuaternionToEulerAngles @ 0x1800329B0 (QuaternionToEulerAngles.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C75EC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C1F6C (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl o_asinf_0(float X)
{
  return asinf(X);
}
