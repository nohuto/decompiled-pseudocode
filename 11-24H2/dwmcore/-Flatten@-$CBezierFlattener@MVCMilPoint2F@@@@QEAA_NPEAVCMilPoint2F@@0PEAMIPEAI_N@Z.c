/*
 * XREFs of ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180180140
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18017F278 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18017FC44 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1801809A8 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::Flatten(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  unsigned int v7; // r10d
  __int64 v8; // r8
  __int64 v9; // r11
  int v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  int v17; // eax
  char result; // al
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4

  v7 = a5;
  v8 = 0LL;
  v9 = a2;
  if ( *(int *)(a1 + 80) > 1 )
  {
    v10 = _xmm;
    while ( (unsigned int)v8 < v7 )
    {
      *(float *)(a1 + 48) = *(float *)(a1 + 56) + *(float *)(a1 + 48);
      *(float *)(a1 + 52) = *(float *)(a1 + 52) + *(float *)(a1 + 60);
      v11 = *(float *)(a1 + 64);
      v12 = *(float *)(a1 + 68);
      v13 = v12 + *(float *)(a1 + 60);
      *(float *)(a1 + 56) = v11 + *(float *)(a1 + 56);
      *(float *)(a1 + 60) = v13;
      v14 = v12 + *(float *)(a1 + 68);
      v15 = v11 + *(float *)(a1 + 64);
      *(float *)(a1 + 68) = v14;
      *(float *)(a1 + 64) = v15;
      *(float *)(a1 + 64) = v15 - *(float *)(a1 + 72);
      *(float *)(a1 + 68) = v14 - *(float *)(a1 + 76);
      *(float *)(a1 + 72) = v11;
      *(float *)(a1 + 76) = v12;
      v16 = *(float *)(a1 + 84) + *(float *)(a1 + 88);
      --*(_DWORD *)(a1 + 80);
      *(float *)(a1 + 84) = v16;
      *(_QWORD *)(v9 + 8 * v8) = *(_QWORD *)(a1 + 48);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v8) = *(_DWORD *)(a1 + 84);
      v8 = (unsigned int)(v8 + 1);
      if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 64) & v10), COERCE_FLOAT(*(_DWORD *)(a1 + 68) & v10)) <= *(float *)(a1 + 32)
        || *(float *)(a1 + 88) <= 0.001 )
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)(a1 + 80);
          if ( (v17 & 1) != 0 )
            break;
          v19 = *(float *)(a1 + 64);
          v20 = *(float *)(a1 + 68);
          v21 = *(float *)(a1 + 72);
          v22 = *(float *)(a1 + 40);
          v23 = (float)(v20 + v20) - *(float *)(a1 + 76);
          v24 = (float)(v19 + v19) - v21;
          if ( v22 < COERCE_FLOAT(LODWORD(v21) & v10)
            || v22 < COERCE_FLOAT(*(_DWORD *)(a1 + 76) & v10)
            || v22 < COERCE_FLOAT(LODWORD(v24) & v10)
            || v22 < COERCE_FLOAT(LODWORD(v23) & v10) )
          {
            break;
          }
          a2 = (unsigned int)(v17 >> 31);
          v25 = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + v20;
          *(float *)(a1 + 56) = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + v19;
          *(float *)(a1 + 60) = v25;
          v26 = *(float *)(a1 + 76) * 4.0;
          *(float *)(a1 + 72) = v21 * 4.0;
          *(float *)(a1 + 76) = v26;
          *(float *)(a1 + 64) = v24 * 4.0;
          *(float *)(a1 + 68) = v23 * 4.0;
          v27 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
          *(_DWORD *)(a1 + 80) = v17 / 2;
          *(float *)(a1 + 88) = v27;
        }
      }
      else
      {
        CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1, a2, v8);
      }
      if ( *(int *)(a1 + 80) <= 1 )
        goto LABEL_9;
    }
    *a6 = v8;
    return 1;
  }
LABEL_9:
  if ( (unsigned int)v8 >= v7 )
  {
    *a6 = v8;
    return 1;
  }
  if ( a7 )
  {
    *(_QWORD *)(v9 + 8 * v8) = *(_QWORD *)(a1 + 24);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v8) = 1065353216;
    LODWORD(v8) = v8 + 1;
  }
  result = 0;
  *a6 = v8;
  return result;
}
