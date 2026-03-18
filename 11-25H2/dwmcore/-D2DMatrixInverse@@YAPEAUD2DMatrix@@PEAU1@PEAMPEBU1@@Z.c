/*
 * XREFs of ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18017ADCC
 * Callers:
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C168 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801CCB10 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x1802B9710 (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixInverse(struct D2DMatrix *a1, float *a2, const struct D2DMatrix *a3)
{
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm3_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm14_4
  float v11; // xmm15_4
  float v12; // xmm6_4
  float v13; // xmm12_4
  float v14; // xmm11_4
  float v15; // xmm13_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm8_4
  float v24; // xmm13_4
  float v25; // xmm7_4
  float v26; // xmm5_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm11_4
  float v30; // xmm12_4
  float v31; // xmm14_4
  float v32; // xmm1_4
  float v33; // xmm15_4
  float v34; // xmm8_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  struct D2DMatrix *result; // rax
  float v38; // [rsp+20h] [rbp-C8h]
  float v39; // [rsp+24h] [rbp-C4h]
  float v40; // [rsp+28h] [rbp-C0h]
  float v41; // [rsp+2Ch] [rbp-BCh]
  float v42; // [rsp+30h] [rbp-B8h]
  float v43; // [rsp+34h] [rbp-B4h]
  float v44; // [rsp+F8h] [rbp+10h]
  float v45; // [rsp+F8h] [rbp+10h]
  float v46; // [rsp+100h] [rbp+18h]
  float v47; // [rsp+100h] [rbp+18h]
  float v48; // [rsp+108h] [rbp+20h]

  v4 = *((float *)a3 + 2);
  v5 = *((float *)a3 + 3);
  v6 = (float)(*((float *)a3 + 5) * *(float *)a3) - (float)(*((float *)a3 + 4) * *((float *)a3 + 1));
  v7 = *((float *)a3 + 6);
  v8 = *((float *)a3 + 7);
  v9 = *((float *)a3 + 10);
  v10 = *((float *)a3 + 9);
  v11 = *((float *)a3 + 13);
  v12 = (float)(v10 * *(float *)a3) - (float)(*((float *)a3 + 8) * *((float *)a3 + 1));
  v13 = *((float *)a3 + 14);
  v14 = *((float *)a3 + 11);
  v15 = *((float *)a3 + 15);
  v44 = (float)(v11 * *(float *)a3) - (float)(*((float *)a3 + 12) * *((float *)a3 + 1));
  v16 = (float)(v10 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 8) * *((float *)a3 + 5));
  v17 = (float)(v11 * *((float *)a3 + 4)) - (float)(*((float *)a3 + 12) * *((float *)a3 + 5));
  v46 = (float)(v11 * *((float *)a3 + 8)) - (float)(*((float *)a3 + 12) * v10);
  v42 = (float)((float)(v16 * v4) - (float)(v12 * v7)) + (float)(v6 * v9);
  v41 = (float)((float)(v44 * v7) - (float)(v6 * v13)) - (float)(v17 * v4);
  v40 = (float)((float)(v46 * v4) - (float)(v44 * v9)) + (float)(v12 * v13);
  v39 = (float)((float)(v17 * v9) - (float)(v16 * v13)) - (float)(v46 * v7);
  v38 = (float)((float)(v12 * v8) - (float)(v6 * v14)) - (float)(v16 * v5);
  v48 = (float)((float)(v17 * v5) - (float)(v44 * v8)) + (float)(v6 * v15);
  v18 = (float)((float)(v44 * v14) - (float)(v12 * v15)) - (float)(v46 * v5);
  v47 = (float)((float)(v46 * v8) - (float)(v17 * v14)) + (float)(v16 * v15);
  v19 = (float)(v8 * v4) - (float)(v7 * v5);
  v45 = v18;
  v20 = (float)(v14 * v4) - (float)(v9 * v5);
  v21 = (float)(v15 * v4) - (float)(v13 * v5);
  v22 = (float)(v14 * v7) - (float)(v9 * v8);
  v23 = (float)(v15 * v7) - (float)(v13 * v8);
  v24 = (float)(v15 * v9) - (float)(v13 * v14);
  v25 = *((float *)a3 + 4);
  v26 = *((float *)a3 + 8);
  v27 = (float)((float)(v20 * *((float *)a3 + 5)) - (float)(v19 * v10)) - (float)(v22 * *((float *)a3 + 1));
  v28 = (float)((float)(v23 * *((float *)a3 + 1)) - (float)(v21 * *((float *)a3 + 5))) + (float)(v19 * v11);
  v29 = (float)((float)(v21 * v10) - (float)(v20 * v11)) - (float)(v24 * *((float *)a3 + 1));
  v30 = (float)((float)(v24 * *((float *)a3 + 5)) - (float)(v23 * v10)) + (float)(v22 * v11);
  v31 = (float)((float)(v22 * *(float *)a3) - (float)(v20 * v25)) + (float)(v19 * v26);
  v32 = *((float *)a3 + 12);
  v33 = (float)((float)(v21 * v25) - (float)(v19 * v32)) - (float)(v23 * *(float *)a3);
  v34 = (float)((float)(v23 * v26) - (float)(v22 * v32)) - (float)(v24 * v25);
  v43 = (float)((float)(v24 * *(float *)a3) - (float)(v21 * v26)) + (float)(v20 * v32);
  v35 = (float)((float)((float)(v27 * v32) + (float)(v28 * v26)) + (float)(v29 * v25)) + (float)(v30 * *(float *)a3);
  if ( a2 )
    *a2 = v35;
  if ( v35 == 0.0 )
    return 0LL;
  v36 = 1.0 / v35;
  if ( !_finite((float)(1.0 / v35)) )
    return 0LL;
  result = a1;
  *(float *)a1 = v36 * v30;
  *((float *)a1 + 1) = v36 * v29;
  *((float *)a1 + 2) = v36 * v28;
  *((float *)a1 + 3) = v36 * v27;
  *((float *)a1 + 4) = v36 * v34;
  *((float *)a1 + 5) = v36 * v43;
  *((float *)a1 + 6) = v36 * v33;
  *((float *)a1 + 7) = v36 * v31;
  *((float *)a1 + 8) = v47 * v36;
  *((float *)a1 + 9) = v45 * v36;
  *((float *)a1 + 10) = v48 * v36;
  *((float *)a1 + 11) = v38 * v36;
  *((float *)a1 + 12) = v39 * v36;
  *((float *)a1 + 13) = v40 * v36;
  *((float *)a1 + 14) = v41 * v36;
  *((float *)a1 + 15) = v42 * v36;
  return result;
}
