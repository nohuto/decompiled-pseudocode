/*
 * XREFs of ?Intersect@CCornerRects@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027248C
 * Callers:
 *     ?GetCornerRects@COccluderClipStack@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCornerRects@@@Z @ 0x180272340 (-GetCornerRects@COccluderClipStack@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180272704 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall CCornerRects::Intersect(__int64 a1, __int64 a2)
{
  char v2; // r9
  bool v3; // zf
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  FLOAT *v7; // rdx
  struct D2D_RECT_F *v8; // rcx
  char v9; // bl
  struct D2D_RECT_F *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  FLOAT *v14; // rdx
  _QWORD *v15; // rcx
  float *v16; // r8
  struct D2D_RECT_F *v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  FLOAT *v21; // rdx
  _QWORD *v22; // rcx
  float *v23; // r8
  struct D2D_RECT_F *v24; // rcx
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  _QWORD *v28; // rcx
  __int64 v29; // r8
  char v30; // r9
  char v31; // r10
  char v32; // r11
  char v33; // al

  v2 = *(_BYTE *)(a1 + 64);
  v3 = v2 == 0;
  if ( !v2 )
  {
    if ( *(float *)a2 > *(float *)a1 )
      *(_DWORD *)a1 = *(_DWORD *)a2;
    v4 = *(float *)(a2 + 4);
    if ( v4 > *(float *)(a1 + 4) )
      *(float *)(a1 + 4) = v4;
    v5 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 8) > v5 )
      *(float *)(a1 + 8) = v5;
    v6 = *(float *)(a2 + 12);
    if ( *(float *)(a1 + 12) > v6 )
      *(float *)(a1 + 12) = v6;
    if ( IsEmpty((const struct D2D_RECT_F *)a1) )
    {
      *(_QWORD *)&v8->right = 0LL;
      v9 = 0;
      *(_QWORD *)&v8->left = 0LL;
    }
    else
    {
      v9 = 1;
    }
    v10 = v8 + 1;
    if ( *v7 > v10->left )
      v10->left = *v7;
    v11 = v7[1];
    if ( v11 > v10->top )
      v10->top = v11;
    v12 = v7[2];
    if ( v10->right > v12 )
      v10->right = v12;
    v13 = v7[3];
    if ( v10->bottom > v13 )
      v10->bottom = v13;
    if ( IsEmpty(v10) )
    {
      v15[1] = 0LL;
      *v15 = 0LL;
    }
    v17 = (struct D2D_RECT_F *)(v16 + 8);
    if ( *v14 > v16[8] )
      v17->left = *v14;
    v18 = v14[1];
    if ( v18 > v16[9] )
      v16[9] = v18;
    v19 = v14[2];
    if ( v16[10] > v19 )
      v16[10] = v19;
    v20 = v14[3];
    if ( v16[11] > v20 )
      v16[11] = v20;
    if ( IsEmpty(v17) )
    {
      v22[1] = 0LL;
      *v22 = 0LL;
    }
    v24 = (struct D2D_RECT_F *)(v23 + 12);
    if ( *v21 > v23[12] )
      v24->left = *v21;
    v25 = v21[1];
    if ( v25 > v23[13] )
      v23[13] = v25;
    v26 = v21[2];
    if ( v23[14] > v26 )
      v23[14] = v26;
    v27 = v21[3];
    if ( v23[15] > v27 )
      v23[15] = v27;
    if ( IsEmpty(v24) )
    {
      v28[1] = 0LL;
      v33 = v30;
      *v28 = 0LL;
    }
    else
    {
      v33 = 0;
    }
    if ( v9 || v32 || v31 || !v33 )
      v30 = 0;
    *(_BYTE *)(v29 + 64) = v30;
    return v30 == 0;
  }
  return v3;
}
