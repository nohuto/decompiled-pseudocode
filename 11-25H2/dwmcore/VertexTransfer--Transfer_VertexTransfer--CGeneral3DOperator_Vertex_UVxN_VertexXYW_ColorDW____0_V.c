/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180161C88
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180167790 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int128 v7; // xmm1
  __int64 result; // rax
  float v9; // xmm10_4
  __m128 v10; // xmm14
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  __m128 v15; // xmm15
  char v16; // r8
  __int64 v17; // r15
  float v18; // xmm3_4
  float v19; // xmm2_4
  __int64 v20; // rsi
  float *v21; // rdi
  float v22; // xmm8_4
  __m128 v23; // xmm6
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  __m128 v28; // xmm12
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm8_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm8_4
  __m128 v35; // xmm3
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  __m128 v40; // xmm5
  float v41; // xmm2_4
  float v42; // xmm1_4
  __int64 v43; // rdx
  float *v44; // rax
  char *v45; // rdi
  float v46; // xmm3_4
  __int64 v47; // rcx
  float v48; // xmm1_4
  char v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+24h] [rbp-DCh]
  __int128 v51; // [rsp+30h] [rbp-D0h]
  float v52[8]; // [rsp+40h] [rbp-C0h]
  __int128 v53; // [rsp+60h] [rbp-A0h]
  _BYTE v54[72]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-38h]

  v4 = CMILMatrix::ComputeAdjointIgnoreZ(v54);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  *(_OWORD *)v52 = *(_OWORD *)(v4 + 16);
  v51 = *(_OWORD *)v4;
  v7 = *(_OWORD *)(v4 + 48);
  result = *(unsigned int *)(v4 + 64);
  v53 = v7;
  if ( v5 )
  {
    v9 = FLOAT_61440_0;
    v49 = BYTE1(result);
    do
    {
      v10 = (__m128)*(unsigned int *)a2;
      v11 = *(_DWORD *)(a1 + 16) * v6;
      v12 = *a2;
      v13 = a2[4];
      v14 = a2[1];
      v15 = (__m128)*((unsigned int *)a2 + 5);
      v16 = *((_BYTE *)a2 + 65);
      v23 = v15;
      v55 = 0LL;
      v17 = *(_QWORD *)(a1 + 8) + v11;
      v18 = *(float *)v17;
      v19 = *(float *)(v17 + 4);
      v20 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v6);
      v21 = (float *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v6));
      v50 = *(_DWORD *)(a1 + 40);
      v22 = (float)((float)(v13 * v19) + (float)(v12 * *(float *)v17)) + a2[12];
      v23.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v19) + (float)(v14 * *(float *)v17)) + a2[13];
      if ( (char)(4 * v16) >> 6 == 1
        || (char)(4 * v16) >> 6 >= 0
        && (LODWORD(v25) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT((_DWORD)a2[7] & _xmm) * v9)
                                           + (float)(COERCE_FLOAT((_DWORD)a2[3] & _xmm) * v9))
                                   + COERCE_FLOAT((_DWORD)a2[15] & _xmm))
                           - 1.0) & _xmm,
            v16 = v16 & 0xCF | (32 * (v25 < 0.000081380211) + 16),
            *((_BYTE *)a2 + 65) = v16,
            v25 >= 0.000081380211) )
      {
        v24 = (float)((float)(v19 * a2[7]) + (float)(v18 * a2[3])) + a2[15];
      }
      else
      {
        v24 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      v26 = *v21;
      v28 = v10;
      v27 = v21[1];
      v28.m128_f32[0] = (float)((float)(v10.m128_f32[0] * *v21) + (float)(v13 * v27)) + a2[12];
      v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v27) + (float)(v14 * *v21)) + a2[13];
      if ( (char)(4 * v16) >> 6 == 1
        || (char)(4 * v16) >> 6 >= 0
        && (LODWORD(v30) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT((_DWORD)a2[3] & _xmm) * v9)
                                           + (float)(COERCE_FLOAT((_DWORD)a2[7] & _xmm) * v9))
                                   + COERCE_FLOAT((_DWORD)a2[15] & _xmm))
                           - 1.0) & _xmm,
            *((_BYTE *)a2 + 65) = v16 & 0xCF | (32 * (v30 < 0.000081380211) + 16),
            v30 >= 0.000081380211) )
      {
        v29 = (float)((float)(v26 * a2[3]) + (float)(v27 * a2[7])) + a2[15];
      }
      else
      {
        v29 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      v31 = (float)(v22 / v24) - (float)(v28.m128_f32[0] / v29);
      v23.m128_f32[0] = (float)(v23.m128_f32[0] / v24) - (float)(v15.m128_f32[0] / v29);
      v32 = sqrtf_0((float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)(v31 * v31));
      v33 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( v32 > 0.0 )
        v33 = v21[2] / v32;
      v34 = (float)(v31 * v33) + (float)(v28.m128_f32[0] / v29);
      v9 = FLOAT_61440_0;
      v23.m128_f32[0] = (float)(v23.m128_f32[0] * v33) + (float)(v15.m128_f32[0] / v29);
      v35 = v23;
      v35.m128_f32[0] = (float)((float)(v23.m128_f32[0] * v52[0]) + (float)(v34 * *(float *)&v51)) + *(float *)&v53;
      v36 = (float)((float)(v23.m128_f32[0] * v52[1]) + (float)(v34 * *((float *)&v51 + 1))) + *((float *)&v53 + 1);
      if ( (char)(4 * v49) >> 6 == 1
        || (char)(4 * v49) >> 6 >= 0
        && (LODWORD(v38) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(HIDWORD(v51) & _xmm) * 61440.0)
                                           + (float)(COERCE_FLOAT(LODWORD(v52[3]) & _xmm) * 61440.0))
                                   + COERCE_FLOAT(HIDWORD(v53) & _xmm))
                           - 1.0) & _xmm,
            v49 = v49 & 0xCF | (32 * (v38 < 0.000081380211) + 16),
            v38 >= 0.000081380211) )
      {
        v37 = (float)((float)(v23.m128_f32[0] * v52[3]) + (float)(v34 * *((float *)&v51 + 3))) + *((float *)&v53 + 3);
      }
      else
      {
        v37 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      v39 = v36 / v37;
      v35.m128_f32[0] = v35.m128_f32[0] / v37;
      v40 = v35;
      v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v35.m128_f32[0]) + (float)(v39 * a2[4])) + a2[12];
      v40.m128_f32[0] = (float)((float)(v35.m128_f32[0] * a2[1]) + (float)(v39 * a2[5])) + a2[13];
      if ( (char)(4 * *((_BYTE *)a2 + 65)) >> 6 == 1
        || (char)(4 * *((_BYTE *)a2 + 65)) >> 6 >= 0
        && (LODWORD(v42) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT((_DWORD)a2[3] & _xmm) * 61440.0)
                                           + (float)(COERCE_FLOAT((_DWORD)a2[7] & _xmm) * 61440.0))
                                   + COERCE_FLOAT((_DWORD)a2[15] & _xmm))
                           - 1.0) & _xmm,
            *((_BYTE *)a2 + 65) = *((_BYTE *)a2 + 65) & 0xCF | (32 * (v42 < 0.000081380211) + 16),
            v42 >= 0.000081380211) )
      {
        v41 = (float)((float)(v39 * a2[7]) + (float)(v35.m128_f32[0] * a2[3])) + a2[15];
      }
      else
      {
        v41 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      if ( v41 <= 0.0 )
      {
        *(_QWORD *)v20 = _mm_unpacklo_ps(v28, v15).m128_u64[0];
        *(float *)(v20 + 8) = v29;
      }
      else
      {
        *(_QWORD *)v20 = _mm_unpacklo_ps(v10, v40).m128_u64[0];
        *(float *)(v20 + 8) = v41;
      }
      if ( v33 > 1.0 && v21[3] == 0.0 )
        v33 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v43 = v50;
      if ( v50 )
      {
        v44 = (float *)(v17 + 20);
        v45 = (char *)v21 - v17;
        v46 = 1.0 - v33;
        v47 = v20 - v17;
        do
        {
          v48 = (float)(v46 * *(float *)((char *)v44 + (_QWORD)v45)) + (float)(v33 * *v44);
          *(float *)((char *)v44 + v47 - 4) = (float)(v46 * *(float *)((char *)v44 + (_QWORD)v45 - 4))
                                            + (float)(v33 * *(v44 - 1));
          *(float *)((char *)v44 + v47) = v48;
          v44 += 2;
          --v43;
        }
        while ( v43 );
      }
      result = *(unsigned int *)(v17 + 12);
      ++v6;
      *(_DWORD *)(v20 + 12) = result;
    }
    while ( v6 < v5 );
  }
  return result;
}
