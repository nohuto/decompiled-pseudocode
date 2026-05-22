/*
 * XREFs of ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6A60
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006DD98 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006BBE0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800776D0 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     _o_fmodf_0 @ 0x18009D4D8 (_o_fmodf_0.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUquaternion@012@AEBU3012@0@Z @ 0x1800C6564 (--DNumerics@Foundation@Windows@@YA-AUquaternion@012@AEBU3012@0@Z.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x1800C65D0 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C70F0 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C75EC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800C7890 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 */

void __fastcall RayStabilizer::PerformDropOffStabilization(
        __m128 *this,
        struct RayStabilizationResult *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rsi
  __m128 v7; // xmm6
  unsigned __int64 v8; // xmm7_8
  __m128 *v9; // rax
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __m128 *v12; // rax
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __int64 v17; // rcx
  unsigned int v18; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v19; // [rsp+2Ch] [rbp-DCh]
  int v20; // [rsp+30h] [rbp-D8h]
  __m128 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-C0h]
  __m128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h]
  __m128 v25; // [rsp+78h] [rbp-90h] BYREF
  __m128 v26; // [rsp+88h] [rbp-80h]
  float v27[32]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(unsigned int *)a2;
  RayStabilizationResult::GetAtStep((__int64)a2, (__int64)&v23, v4 - 1, a4);
  v7 = v23;
  v26 = v23;
  v8 = v24;
  v21 = 0LL;
  v22 = 0LL;
  if ( (unsigned __int8)RayStabilizer::TransformRay(&v23, &v21) )
  {
    v23 = v21;
    v24 = v22;
    memset_0(v27, 0, 0x40uLL);
    if ( RayStabilizer::ProcessHistory(
           (RayStabilizer *)this,
           v4 - 1,
           (const struct RayStabilizer::TargetingData *)&v21,
           (struct RayStabilizer::ProcessedHistoryData *)v27) )
    {
      v9 = RayStabilizer::ComputeDropOffTarget(this, &v23, (unsigned int *)&v21, v27);
      v19 = 0;
      v20 = 0;
      v10 = *v9;
      v18 = 1065353216;
      v11 = v9[1];
      v26.m128_f32[2] = (float)((float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v21.m128_f32[2]) * 0.66600001)
                      + v21.m128_f32[2];
      v26.m128_f32[0] = (float)((float)(v10.m128_f32[0] - v21.m128_f32[0]) * 0.66600001) + v21.m128_f32[0];
      v26.m128_f32[1] = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v21.m128_f32[1]) * 0.66600001)
                      + v21.m128_f32[1];
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v25, &v18);
      v18 = 0;
      v20 = 0;
      v19 = 1065353216;
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v21, &v18);
      v12 = Windows::Foundation::Numerics::operator*(&v23, &v21, &v25);
      v18 = 0x80000000;
      v19 = 0x80000000;
      v20 = -1082130432;
      Windows::Foundation::Numerics::transform(v25.m128_f32, (float *)&v18, v12->m128_f32);
      v13 = _mm_movelh_ps((__m128)v25.m128_u64[0], (__m128)v25.m128_u32[2]);
      v14 = _mm_mul_ps(v13, v13);
      v15 = _mm_shuffle_ps(v14, v14, 102);
      v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v16 = _mm_div_ps(v13, _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)));
      v25.m128_u64[0] = v16.m128_u64[0];
      v26.m128_i32[3] = v16.m128_i32[0];
      v7 = v26;
      v8 = _mm_unpacklo_ps((__m128)v16.m128_u32[1], _mm_shuffle_ps(v16, v16, 170)).m128_u64[0];
    }
    else
    {
      v11 = (__m128)v24;
      v10 = v23;
    }
    this[3] = v10;
    this[5].m128_i8[0] = 1;
    this[4] = v11;
  }
  v17 = 3LL * *(unsigned int *)a2;
  *(__m128 *)((char *)a2 + 8 * v17 + 4) = v7;
  *(_QWORD *)((char *)a2 + 8 * v17 + 20) = v8;
  ++*(_DWORD *)a2;
}
