/*
 * XREFs of ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801722B8
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRectConservative(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float bottom; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  int v11; // xmm0_4
  float *v12; // rcx
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // [rsp+0h] [rbp-48h]
  _DWORD v27[2]; // [rsp+4h] [rbp-44h] BYREF
  int v28; // [rsp+Ch] [rbp-3Ch]
  float v29; // [rsp+10h] [rbp-38h]
  int v30; // [rsp+14h] [rbp-34h]
  __int64 v31; // [rsp+18h] [rbp-30h] BYREF

  v4 = *((float *)this + 1);
  v5 = *(float *)this;
  bottom = a2->bottom;
  v7 = (float)(a2->right * v4) + (float)(a2->left * *(float *)this);
  *(float *)v27 = v4;
  v8 = a2->top * v5;
  v9 = v7 + a2[1].left;
  v28 = *((_DWORD *)this + 3);
  v10 = (float)(bottom * v4) + v8;
  v29 = v5;
  v11 = *((_DWORD *)this + 2);
  v12 = (float *)v27;
  v26 = v11;
  v27[1] = v11;
  v13 = v9;
  v30 = v28;
  v14 = v10 + a2[1].top;
  v15 = v14;
  do
  {
    v16 = a2->top * *(v12 - 1);
    v17 = (float)(a2->left * *(v12 - 1)) + (float)(a2->right * *v12);
    v18 = a2->bottom * *v12;
    v12 += 2;
    v19 = v16 + v18;
    v20 = v17 + a2[1].left;
    v21 = fmaxf(v20, v13);
    v22 = fminf(v20, v9);
    v13 = v21;
    v9 = v22;
    v23 = v19 + a2[1].top;
    v24 = fmaxf(v23, v15);
    v25 = fminf(v23, v14);
    v15 = v24;
    v14 = v25;
  }
  while ( v12 - 1 != (float *)&v31 );
  a3->m11 = v22;
  a3->m12 = v25;
  a3->m21 = v21;
  a3->m22 = v24;
}
