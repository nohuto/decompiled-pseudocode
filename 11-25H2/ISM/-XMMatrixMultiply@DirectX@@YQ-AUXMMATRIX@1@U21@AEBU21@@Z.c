/*
 * XREFs of ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1801B97B0
 * Callers:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801B84AC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixMultiply(double a1, __m128 *a2)
{
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 170), a2[2]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0), *a2)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), a2[3]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 85), a2[1])));
}
