/*
 * XREFs of ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1802ACE4C
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180155570 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x18024F2A0 (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeede.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CShapeTree::ComputePartialIntermediate(struct CMILMatrix *a1, float *a2, FLOAT *a3, int *a4, float *a5)
{
  int v6; // xmm2_4
  int v8; // xmm0_4
  const struct CMILMatrix *v9; // rdx
  int v10; // xmm1_4
  int v11; // r9d
  int v12; // r9d
  char result; // al
  FLOAT v14; // xmm7_4
  float left; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float bottom; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  struct D2D_RECT_F v21; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int64 v22[2]; // [rsp+38h] [rbp-21h] BYREF
  int v23; // [rsp+48h] [rbp-11h] BYREF
  int v24; // [rsp+4Ch] [rbp-Dh]
  int v25; // [rsp+50h] [rbp-9h]
  int v26; // [rsp+54h] [rbp-5h]
  int v27; // [rsp+58h] [rbp-1h]
  int v28; // [rsp+5Ch] [rbp+3h]
  int v29; // [rsp+60h] [rbp+7h]
  int v30; // [rsp+64h] [rbp+Bh]

  v6 = *a4;
  v8 = a4[2];
  v9 = a1;
  v24 = a4[1];
  v26 = v24;
  v10 = a4[3];
  v11 = 0;
  v28 = v10;
  v30 = v10;
  v23 = v6;
  v25 = v8;
  v27 = v8;
  v29 = v6;
  while ( (unsigned __int64)v11 < 4 )
  {
    if ( !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)&v23 + v11,
            v9,
            (struct D2D_POINT_2F *)&v23 + v11) )
      return 0;
    v11 = v12 + 1;
  }
  v22[0] = 4LL;
  v22[1] = (unsigned __int64)&v23;
  v21 = 0LL;
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
    &v21.left,
    v22);
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v21.left, 1.0, 1.0);
  v14 = *a3;
  left = v21.left;
  if ( *a3 > v21.left )
  {
    v21.left = *a3;
    left = v14;
  }
  v16 = a3[1];
  if ( v16 > v21.top )
    v21.top = a3[1];
  if ( v21.right > a3[2] )
    v21.right = a3[2];
  v17 = a3[3];
  bottom = v21.bottom;
  if ( v21.bottom > v17 )
  {
    v21.bottom = a3[3];
    bottom = v17;
  }
  if ( IsEmpty(&v21) )
  {
    left = 0.0;
    v20 = 0.0;
    v19 = 0.0;
    bottom = 0.0;
  }
  result = 1;
  *a5 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + left) * *a2;
  a5[1] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) + v20) * a2[1];
  a5[2] = (float)(v19 + COERCE_FLOAT(LODWORD(v14) ^ _xmm)) * *a2;
  a5[3] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) + bottom) * a2[1];
  return result;
}
