/*
 * XREFs of cosf @ 0x18009D4CC
 * Callers:
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800C7494 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800C7890 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x180156080 (-WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
