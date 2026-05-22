/*
 * XREFs of ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C70F0
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6A60 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800776D0 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     _o_fmodf_0 @ 0x18009D4D8 (_o_fmodf_0.c)
 *     _o_sqrtf_0 @ 0x18009D52C (_o_sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800C6A14 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C75EC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 */

bool __fastcall RayStabilizer::ProcessHistory(
        RayStabilizer *this,
        unsigned __int64 a2,
        const struct RayStabilizer::TargetingData *a3,
        struct RayStabilizer::ProcessedHistoryData *a4)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  float v10; // xmm11_4
  float v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  bool result; // al
  float v32; // xmm0_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int64 v43; // [rsp+28h] [rbp-99h] BYREF
  __int64 v44; // [rsp+30h] [rbp-91h]
  __int64 v45; // [rsp+38h] [rbp-89h] BYREF
  int v46; // [rsp+40h] [rbp-81h]
  __int128 v47; // [rsp+48h] [rbp-79h] BYREF
  __int64 v48; // [rsp+58h] [rbp-69h]
  __int128 v49; // [rsp+68h] [rbp-59h] BYREF
  __int64 v50; // [rsp+78h] [rbp-49h]
  _OWORD v51[8]; // [rsp+88h] [rbp-39h] BYREF

  *((_DWORD *)a4 + 6) = 0;
  *((_DWORD *)a4 + 2) = 0;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 10) = 0;
  v8 = *((_QWORD *)this + 3);
  v9 = v8 + *((_QWORD *)this + 4);
  *(_DWORD *)a4 = 0x800000;
  v10 = 0.0;
  *((_DWORD *)a4 + 4) = 0x800000;
  *((_DWORD *)a4 + 8) = 0x800000;
  *((_DWORD *)a4 + 12) = 0x800000;
  *((_DWORD *)a4 + 1) = 2139095039;
  *((_DWORD *)a4 + 5) = 2139095039;
  *((_DWORD *)a4 + 9) = 2139095039;
  *((_DWORD *)a4 + 13) = 2139095039;
  while ( v8 != v9 )
  {
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v8 & (*((_QWORD *)this + 2) - 1LL))),
      (__int64)&v47,
      a2,
      (const char *)a4);
    v50 = v48;
    memset(v51, 0, 32);
    v49 = v47;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v49, v51) )
    {
      v10 = v10 + 1.0;
      v11 = *((float *)a3 + 6) - *((float *)&v51[1] + 2);
      LODWORD(v12) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*((float *)v51 + 1) - *((float *)a3 + 1))
                                     * (float)(*((float *)v51 + 1) - *((float *)a3 + 1)))
                             + (float)((float)(*(float *)v51 - *(float *)a3) * (float)(*(float *)v51 - *(float *)a3)))
                     + (float)((float)(*((float *)v51 + 2) - *((float *)a3 + 2))
                             * (float)(*((float *)v51 + 2) - *((float *)a3 + 2)))) & _xmm;
      o_fmodf_0();
      LODWORD(v13) = LODWORD(v11) & _xmm;
      v14 = *((float *)a3 + 7) - *((float *)&v51[1] + 3);
      o_fmodf_0();
      v15 = *((_DWORD *)a3 + 5);
      v43 = *(_QWORD *)((char *)a3 + 12);
      LODWORD(v16) = LODWORD(v14) & _xmm;
      LODWORD(v44) = v15;
      v45 = *(_QWORD *)((char *)v51 + 12);
      v46 = DWORD1(v51[1]);
      v17 = RayStabilizer::DeltaAngle((float *)&v45, (float *)&v43);
      v18 = fminf(*(float *)a4, v12);
      v19 = fmaxf(*((float *)a4 + 1), v12);
      v20 = v12 + *((float *)a4 + 2);
      v21 = fminf(*((float *)a4 + 12), v16);
      *(float *)a4 = v18;
      v22 = fminf(*((float *)a4 + 8), v13);
      *((float *)a4 + 1) = v19;
      v23 = *((float *)a4 + 9);
      *((float *)a4 + 12) = v21;
      v24 = fmaxf(v23, v13);
      v25 = *((float *)a4 + 4);
      v26 = v13 + *((float *)a4 + 10);
      *((float *)a4 + 8) = v22;
      v27 = fmaxf(*((float *)a4 + 13), v16);
      *((float *)a4 + 2) = v20;
      v28 = v16 + *((float *)a4 + 14);
      *((float *)a4 + 9) = v24;
      *((float *)a4 + 10) = v26;
      *((float *)a4 + 4) = fminf(v25, v17);
      *((float *)a4 + 13) = v27;
      v29 = fmaxf(*((float *)a4 + 5), v17);
      *((float *)a4 + 14) = v28;
      v30 = v17 + *((float *)a4 + 6);
      *((float *)a4 + 5) = v29;
      *((float *)a4 + 6) = v30;
    }
    ++v8;
  }
  if ( v10 == 0.0 )
    return 0;
  v32 = *(float *)a4;
  v33 = *((float *)a4 + 10) / v10;
  v34 = *((float *)a4 + 14) / v10;
  v35 = *((float *)a4 + 6) / v10;
  *((float *)a4 + 10) = v33;
  *((float *)a4 + 14) = v34;
  *((float *)a4 + 6) = v35;
  v36 = o_sqrtf_0(v32);
  v37 = *((float *)a4 + 1);
  *(float *)a4 = v36;
  v38 = o_sqrtf_0(v37);
  v39 = *((float *)a4 + 2) / v10;
  *((float *)a4 + 1) = v38;
  v40 = o_sqrtf_0(v39);
  v41 = *((float *)a4 + 13) - *((float *)a4 + 12);
  *((float *)a4 + 2) = v40;
  result = 1;
  *((float *)a4 + 3) = (float)(v40 + v40) + (float)(v38 - v36);
  v42 = *((float *)a4 + 9) - *((float *)a4 + 8);
  *((float *)a4 + 15) = v41 + (float)(v34 + v34);
  *((float *)a4 + 11) = v42 + (float)(v33 + v33);
  *((float *)a4 + 7) = (float)(*((float *)a4 + 5) - *((float *)a4 + 4)) + (float)(v35 + v35);
  return result;
}
