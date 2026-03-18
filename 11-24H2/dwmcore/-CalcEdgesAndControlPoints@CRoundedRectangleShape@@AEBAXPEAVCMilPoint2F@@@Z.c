/*
 * XREFs of ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800413C0
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AC390 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRoundedRectangleShape::CalcEdgesAndControlPoints(CRoundedRectangleShape *this, struct CMilPoint2F *a2)
{
  __int64 v2; // rax
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  __int64 v7; // rax
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // r10
  float *v15; // r9
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  __int64 v19; // r9
  __int64 v20; // r8
  char v21; // r10
  float *v22; // r9
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // r8
  char v27; // cl
  float *v28; // rax
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4

  v2 = *((_QWORD *)this + 2);
  v3 = *(float *)(v2 + 20);
  v4 = *(float *)(v2 + 16);
  if ( *(_BYTE *)(v2 + 68) )
  {
    v5 = v4 + *(float *)(v2 + 24);
    v6 = v3 + *(float *)(v2 + 28);
  }
  else
  {
    v5 = *(float *)(v2 + 24);
    v6 = *(float *)(v2 + 28);
  }
  *(float *)a2 = v4;
  *((float *)a2 + 1) = v3;
  *((float *)a2 + 6) = v5;
  *((float *)a2 + 7) = v3;
  *((float *)a2 + 16) = v4;
  *((float *)a2 + 17) = v6;
  *((float *)a2 + 22) = v5;
  *((float *)a2 + 23) = v6;
  v7 = *((_QWORD *)this + 2);
  if ( *(float *)(v7 + 32) > 0.0 && *(float *)(v7 + 36) > 0.0 )
  {
    *((float *)a2 + 8) = v4;
    v8 = v3 + *(float *)(v7 + 36);
    *((float *)a2 + 9) = v8;
    v9 = v4 + *(float *)(v7 + 32);
    *((float *)a2 + 3) = v3;
    *((float *)a2 + 24) = v4;
    *((float *)a2 + 2) = v9;
    *((float *)a2 + 25) = v8 - (float)(*(float *)(v7 + 36) * 0.55228478);
    v10 = *(float *)(v7 + 32) * 0.55228478;
    *((float *)a2 + 27) = v3;
    *((float *)a2 + 26) = v9 - v10;
  }
  v11 = *((_QWORD *)this + 2);
  v12 = 32LL;
  v13 = 32LL;
  v14 = *(_BYTE *)(v11 + 68);
  if ( !v14 )
    v13 = 40LL;
  if ( *(float *)(v13 + v11) > 0.0 && *(float *)(v13 + v11 + 4) > 0.0 )
  {
    if ( v14 )
      v15 = (float *)(v11 + 32);
    else
      v15 = (float *)(v11 + 40);
    v16 = v5 - *v15;
    *((float *)a2 + 5) = v3;
    *((float *)a2 + 10) = v5;
    *((float *)a2 + 4) = v16;
    v17 = v3 + v15[1];
    *((float *)a2 + 11) = v17;
    v18 = *v15 * 0.55228478;
    *((float *)a2 + 29) = v3;
    *((float *)a2 + 30) = v5;
    *((float *)a2 + 28) = v18 + v16;
    *((float *)a2 + 31) = v17 - (float)(v15[1] * 0.55228478);
  }
  v19 = *((_QWORD *)this + 2);
  v20 = 32LL;
  v21 = *(_BYTE *)(v19 + 68);
  if ( !v21 )
    v20 = 56LL;
  if ( *(float *)(v20 + v19) > 0.0 && *(float *)(v20 + v19 + 4) > 0.0 )
  {
    if ( v21 )
      v22 = (float *)(v19 + 32);
    else
      v22 = (float *)(v19 + 56);
    v23 = v4 + *v22;
    *((float *)a2 + 19) = v6;
    *((float *)a2 + 12) = v4;
    *((float *)a2 + 18) = v23;
    v24 = v6 - v22[1];
    *((float *)a2 + 13) = v24;
    v25 = *v22 * 0.55228478;
    *((float *)a2 + 37) = v6;
    *((float *)a2 + 32) = v4;
    *((float *)a2 + 36) = v23 - v25;
    *((float *)a2 + 33) = (float)(v22[1] * 0.55228478) + v24;
  }
  v26 = *((_QWORD *)this + 2);
  v27 = *(_BYTE *)(v26 + 68);
  if ( !v27 )
    v12 = 48LL;
  if ( *(float *)(v12 + v26) > 0.0 && *(float *)(v12 + v26 + 4) > 0.0 )
  {
    if ( v27 )
      v28 = (float *)(v26 + 32);
    else
      v28 = (float *)(v26 + 48);
    *((float *)a2 + 14) = v5;
    v29 = v6 - v28[1];
    *((float *)a2 + 15) = v29;
    v30 = v5 - *v28;
    *((float *)a2 + 21) = v6;
    *((float *)a2 + 34) = v5;
    *((float *)a2 + 20) = v30;
    *((float *)a2 + 35) = (float)(v28[1] * 0.55228478) + v29;
    v31 = *v28;
    *((float *)a2 + 39) = v6;
    *((float *)a2 + 38) = (float)(v31 * 0.55228478) + v30;
  }
}
