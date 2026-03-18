/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1400AFBC0
 * Callers:
 *     RIMSetContactBoundary @ 0x1400AD560 (RIMSetContactBoundary.c)
 *     RIMApplyTransforms @ 0x1400AF04C (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1400AF22C (rimComputeHimetricGeometry.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1401E1DE0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1401E1ED0 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1400AFCF8 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__m128i *a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm1
  int v4; // r9d
  __m128i v5; // xmm2
  __int64 result; // rax
  __int64 plResult; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h]

  v9 = a2;
  v3 = a1[11];
  v4 = a1[11].m128i_i32[2];
  v5 = a1[12];
  plResult = 0LL;
  result = rimConvertCoordinatesWithRounding(
             _mm_cvtsi128_si32(v5),
             a1[12].m128i_i32[2],
             _mm_cvtsi128_si32(v3),
             v4,
             a2,
             (LONG *)&plResult);
  if ( (_DWORD)result
    && (result = rimConvertCoordinatesWithRounding(
                   v5.m128i_i32[1],
                   v5.m128i_i32[3],
                   v3.m128i_i32[1],
                   v3.m128i_i32[3],
                   SHIDWORD(v9),
                   (LONG *)&plResult + 1),
        (_DWORD)result) )
  {
    result = plResult;
    *(_QWORD *)a3 = plResult;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
  }
  return result;
}
