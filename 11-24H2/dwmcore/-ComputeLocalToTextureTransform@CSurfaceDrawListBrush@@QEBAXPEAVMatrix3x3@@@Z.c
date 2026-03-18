/*
 * XREFs of ?ComputeLocalToTextureTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801AE670
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceDrawListBrush::ComputeLocalToTextureTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm13_4
  float v6; // xmm14_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm11_4
  float v13; // xmm5_4
  float v14; // xmm15_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm10_4
  float v18; // xmm14_4
  float v19; // xmm11_4
  float v20; // xmm8_4
  float v21; // xmm12_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm13_4
  float v29; // xmm4_4
  float v30; // xmm15_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm9_4
  float v36; // xmm8_4
  float v37; // xmm1_4
  float v38; // [rsp+0h] [rbp-C8h]
  float v39; // [rsp+4h] [rbp-C4h]
  float v40; // [rsp+8h] [rbp-C0h]
  float v41; // [rsp+D0h] [rbp+8h]
  float v42; // [rsp+D0h] [rbp+8h]
  float v43; // [rsp+D0h] [rbp+8h]
  float v44; // [rsp+D8h] [rbp+10h]
  float v45; // [rsp+E0h] [rbp+18h]
  float v46; // [rsp+E0h] [rbp+18h]
  float v47; // [rsp+E8h] [rbp+20h]

  v2 = *((float *)this + 2);
  *(float *)a2 = v2;
  v3 = *((float *)this + 3);
  *((float *)a2 + 1) = v3;
  *((_DWORD *)a2 + 2) = 0;
  v4 = *((float *)this + 4);
  v5 = 0.0;
  *((float *)a2 + 3) = v4;
  v6 = *((float *)this + 5);
  *((_QWORD *)a2 + 2) = LODWORD(v6);
  v7 = *((float *)this + 6);
  *((float *)a2 + 6) = v7;
  v8 = v7 * v3;
  v9 = *((float *)this + 7) * v4;
  v45 = *((float *)this + 7);
  v41 = v6 * v7;
  v10 = (float)((float)((float)((float)((float)(v9 * 0.0) + (float)(v6 * v2)) + (float)((float)(v7 * v3) * 0.0))
                      - (float)((float)(v2 * v7) * 0.0))
              - (float)((float)(v6 * v7) * 0.0))
      - (float)(v3 * v4);
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v30 = FLOAT__Inf;
    v34 = 0.0;
    v32 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v36 = FLOAT__Inf;
    v43 = 0.0;
    v35 = 0.0;
    v33 = 0.0;
    v37 = 0.0;
  }
  else
  {
    v11 = v7 * 0.0;
    v12 = *((float *)this + 7) * 0.0;
    v13 = (float)(v9 - v41) * (float)(1.0 / v10);
    v14 = (float)((float)(v6 * v2) - (float)(v3 * v4)) * (float)(1.0 / v10);
    v15 = (float)(v11 - v4) * (float)(1.0 / v10);
    *((float *)a2 + 6) = v13;
    v16 = v6 * 0.0;
    *((float *)a2 + 3) = v15;
    *((float *)a2 + 8) = v14;
    v17 = (float)((float)(v4 * 0.0) - (float)(v2 * 0.0)) * (float)(1.0 / v10);
    v18 = (float)(v6 - v12) * (float)(1.0 / v10);
    *((float *)a2 + 5) = v17;
    v19 = (float)(v12 - v3) * (float)(1.0 / v10);
    *(float *)a2 = v18;
    v20 = (float)(v2 - v11) * (float)(1.0 / v10);
    *((float *)a2 + 1) = v19;
    *((float *)a2 + 4) = v20;
    v44 = v13;
    v21 = (float)((float)(v3 * 0.0) - v16) * (float)(1.0 / v10);
    *((float *)a2 + 2) = v21;
    v22 = (float)(v8 - (float)(v45 * v2)) * (float)(1.0 / v10);
    *((float *)a2 + 7) = v22;
    v23 = *((float *)this + 23);
    v24 = *((float *)this + 29);
    v25 = *((float *)this + 28);
    v26 = *((float *)this + 24);
    v27 = *((float *)this + 27);
    v47 = *((float *)this + 21);
    v46 = *((float *)this + 22);
    v38 = *((float *)this + 26);
    v42 = v22;
    v28 = v38 * v22;
    v29 = *((float *)this + 25);
    v39 = (float)(v28 + (float)(v23 * v44)) + (float)(v24 * v14);
    v5 = (float)((float)(v29 * v42) + (float)(v46 * v44)) + (float)(v25 * v14);
    v43 = (float)((float)(v26 * v42) + (float)(v47 * v44)) + (float)(v27 * v14);
    v40 = (float)((float)(v38 * v20) + (float)(v23 * v15)) + (float)(v24 * v17);
    v30 = (float)((float)(v29 * v20) + (float)(v46 * v15)) + (float)(v25 * v17);
    v31 = (float)(v38 * v19) + (float)(v23 * v18);
    v32 = v39;
    v33 = v31 + (float)(v24 * v21);
    v34 = v40;
    v35 = (float)((float)(v26 * v20) + (float)(v47 * v15)) + (float)(v27 * v17);
    v36 = (float)((float)(v47 * v18) + (float)(v26 * v19)) + (float)(v27 * v21);
    v37 = (float)((float)(v46 * v18) + (float)(v29 * v19)) + (float)(v25 * v21);
  }
  *(float *)a2 = v36;
  *((float *)a2 + 1) = v37;
  *((float *)a2 + 2) = v33;
  *((float *)a2 + 3) = v35;
  *((float *)a2 + 4) = v30;
  *((float *)a2 + 5) = v34;
  *((float *)a2 + 6) = v43;
  *((float *)a2 + 7) = v5;
  *((float *)a2 + 8) = v32;
}
