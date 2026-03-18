/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180168460
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180168300 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802922A8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

char __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __int64 a1,
        float *a2,
        float *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  float v6; // xmm2_4
  unsigned int v7; // r14d
  float v8; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  char v15; // cl
  __m128 v16; // xmm11
  __m128 v17; // xmm12
  float v18; // xmm14_4
  float v19; // xmm15_4
  __m128 v20; // xmm7
  __m128 v21; // xmm10
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm9_4
  float v25; // xmm9_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  char v28; // cl
  __m128 v29; // xmm3
  __m128 v30; // xmm2
  float v31; // xmm7_4
  char v32; // cl
  float *v33; // rax
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  float v36; // xmm2_4
  float v37; // xmm4_4
  signed __int64 v38; // rsi
  float v39; // xmm6_4
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rcx
  float v43; // xmm1_4
  float *v44; // r8
  unsigned int v45; // edx
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v50; // [rsp+20h] [rbp-E8h]

  v6 = *a2;
  v7 = 0;
  v8 = a2[1];
  v13 = *(float *)a5;
  v14 = *(float *)(a5 + 20);
  v15 = *(_BYTE *)(a5 + 65);
  v21 = (__m128)LODWORD(v14);
  v16 = (__m128)*(unsigned int *)(a5 + 16);
  v20 = v16;
  v17 = (__m128)*(unsigned int *)(a5 + 4);
  v18 = *(float *)(a5 + 48);
  v19 = *(float *)(a5 + 52);
  v20.m128_f32[0] = (float)((float)(v16.m128_f32[0] * v8) + (float)(*(float *)a5 * *a2)) + v18;
  v21.m128_f32[0] = (float)((float)(v14 * v8) + (float)(v17.m128_f32[0] * *a2)) + v19;
  if ( (char)(4 * v15) >> 6 != 1 )
  {
    if ( (char)(4 * v15) >> 6 < 0 )
    {
LABEL_3:
      v22 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      goto LABEL_4;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      v15 |= 0x30u;
      *(_BYTE *)(a5 + 65) = v15;
      goto LABEL_3;
    }
    v15 = v15 & 0xCF | 0x10;
    *(_BYTE *)(a5 + 65) = v15;
  }
  v22 = (float)((float)(v8 * *(float *)(a5 + 28)) + (float)(v6 * *(float *)(a5 + 12))) + *(float *)(a5 + 60);
LABEL_4:
  v23 = *a3;
  v24 = a3[1];
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * v24) + (float)(v13 * *a3)) + v18;
  v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] * *a3) + (float)(v14 * v24)) + v19;
  if ( (char)(4 * v15) >> 6 != 1 )
  {
    if ( (char)(4 * v15) >> 6 < 0 )
    {
LABEL_6:
      v25 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      goto LABEL_7;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a5 + 65) = v15 | 0x30;
      goto LABEL_6;
    }
    *(_BYTE *)(a5 + 65) = v15 & 0xCF | 0x10;
  }
  v25 = (float)((float)(v24 * *(float *)(a5 + 28)) + (float)(v23 * *(float *)(a5 + 12))) + *(float *)(a5 + 60);
LABEL_7:
  v20.m128_f32[0] = (float)(v20.m128_f32[0] / v22) - (float)(v16.m128_f32[0] / v25);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] / v22) - (float)(v17.m128_f32[0] / v25);
  v26 = sqrtf_0((float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(v20.m128_f32[0] * v20.m128_f32[0]));
  v27 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v50 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v26 > 0.0 )
  {
    v27 = a3[2] / v26;
    v50 = v27;
  }
  v28 = *(_BYTE *)(a1 + 65);
  v20.m128_f32[0] = (float)(v20.m128_f32[0] * v27) + (float)(v16.m128_f32[0] / v25);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] * v27) + (float)(v17.m128_f32[0] / v25);
  v30 = v20;
  v29 = v21;
  v29.m128_f32[0] = (float)((float)(v21.m128_f32[0] * *(float *)(a1 + 16)) + (float)(v20.m128_f32[0] * *(float *)a1))
                  + *(float *)(a1 + 48);
  v30.m128_f32[0] = (float)((float)(v20.m128_f32[0] * *(float *)(a1 + 4))
                          + (float)(v21.m128_f32[0] * *(float *)(a1 + 20)))
                  + *(float *)(a1 + 52);
  if ( (char)(4 * v28) >> 6 != 1 )
  {
    if ( (char)(4 * v28) >> 6 < 0 )
    {
LABEL_11:
      v31 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      goto LABEL_12;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 65) = v28 | 0x30;
      goto LABEL_11;
    }
    *(_BYTE *)(a1 + 65) = v28 & 0xCF | 0x10;
  }
  v31 = (float)((float)(v20.m128_f32[0] * *(float *)(a1 + 12)) + (float)(v21.m128_f32[0] * *(float *)(a1 + 28)))
      + *(float *)(a1 + 60);
LABEL_12:
  v32 = *(_BYTE *)(a5 + 65);
  v29.m128_f32[0] = v29.m128_f32[0] / v31;
  LOBYTE(v33) = (char)(4 * v32) >> 6;
  v30.m128_f32[0] = v30.m128_f32[0] / v31;
  v34 = v30;
  v35 = v29;
  v34.m128_f32[0] = (float)((float)(v30.m128_f32[0] * *(float *)(a5 + 16)) + (float)(v29.m128_f32[0] * *(float *)a5))
                  + *(float *)(a5 + 48);
  v35.m128_f32[0] = (float)((float)(v29.m128_f32[0] * *(float *)(a5 + 4))
                          + (float)(v30.m128_f32[0] * *(float *)(a5 + 20)))
                  + *(float *)(a5 + 52);
  if ( (_BYTE)v33 != 1 )
  {
    if ( (char)v33 < 0 )
    {
LABEL_14:
      v36 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      goto LABEL_15;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(a5 + 65) = v32 | 0x30;
      goto LABEL_14;
    }
    *(_BYTE *)(a5 + 65) = v32 & 0xCF | 0x10;
  }
  v36 = (float)((float)(v30.m128_f32[0] * *(float *)(a5 + 28)) + (float)(v29.m128_f32[0] * *(float *)(a5 + 12)))
      + *(float *)(a5 + 60);
LABEL_15:
  if ( v36 <= 0.0 )
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
    *(float *)(a6 + 8) = v25;
  }
  else
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps(v34, v35).m128_u64[0];
    *(float *)(a6 + 8) = v36;
  }
  v37 = v50;
  if ( v50 > 1.0 && a3[3] == 0.0 )
    v37 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( a4 < 3 )
  {
    if ( !a4 )
      return (char)v33;
    v38 = (char *)a3 - (char *)a2;
    v39 = 1.0 - v37;
    v40 = a6 - (_QWORD)a2;
    v41 = 0LL;
    goto LABEL_21;
  }
  v39 = 1.0 - v37;
  v38 = (char *)a3 - (char *)a2;
  v44 = a2 + 5;
  v40 = a6 - (_QWORD)a2;
  v45 = (a4 - 3) / 3 + 1;
  v33 = (float *)v45;
  v7 = 3 * v45;
  v41 = 3LL * v45;
  do
  {
    v46 = (float)(v39 * *(float *)((char *)v44 + v38)) + (float)(v37 * *v44);
    *(float *)((char *)v44 + v40 - 4) = (float)(v39 * *(float *)((char *)v44 + v38 - 4)) + (float)(v37 * *(v44 - 1));
    *(float *)((char *)v44 + v40) = v46;
    v47 = (float)(v39 * *(float *)((char *)v44 + v38 + 8)) + (float)(v37 * v44[2]);
    *(float *)((char *)v44 + v40 + 4) = (float)(v39 * *(float *)((char *)v44 + v38 + 4)) + (float)(v37 * v44[1]);
    *(float *)((char *)v44 + v40 + 8) = v47;
    v48 = (float)(v39 * *(float *)((char *)v44 + v38 + 16)) + (float)(v37 * v44[4]);
    *(float *)((char *)v44 + v40 + 12) = (float)(v39 * *(float *)((char *)v44 + v38 + 12)) + (float)(v37 * v44[3]);
    *(float *)((char *)v44 + v40 + 16) = v48;
    v44 += 6;
    v33 = (float *)((char *)v33 - 1);
  }
  while ( v33 );
  if ( v7 < a4 )
  {
LABEL_21:
    v33 = &a2[2 * v41 + 5];
    v42 = a4 - v7;
    do
    {
      v43 = (float)(v39 * *(float *)((char *)v33 + v38)) + (float)(v37 * *v33);
      *(float *)((char *)v33 + v40 - 4) = (float)(v39 * *(float *)((char *)v33 + v38 - 4)) + (float)(v37 * *(v33 - 1));
      *(float *)((char *)v33 + v40) = v43;
      v33 += 2;
      --v42;
    }
    while ( v42 );
  }
  return (char)v33;
}
