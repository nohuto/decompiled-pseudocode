/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A9C20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180221AB0 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

void __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(_DWORD *a1, _DWORD *a2, float *a3)
{
  float v3; // xmm3_4
  struct D2D_RECT_F *v4; // r10
  float **v5; // r11
  float *v6; // rcx
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  _QWORD *v11; // r10
  float *v12; // rdx

  if ( a2[6] != 2 )
    goto LABEL_31;
  LODWORD(v3) = a1[44] & _xmm;
  if ( v3 <= 0.0000099999997
    || COERCE_FLOAT(a1[45] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[46] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[47] & _xmm) >= 0.0000099999997 )
  {
    if ( v3 < 0.0000099999997 )
    {
      if ( COERCE_FLOAT(a1[45] & _xmm) > 0.0000099999997
        && COERCE_FLOAT(a1[46] & _xmm) < 0.0000099999997
        && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
      {
        v12 = (float *)(*(_QWORD *)a2 + 4LL);
LABEL_21:
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v12);
        return;
      }
      if ( v3 < 0.0000099999997 )
      {
        if ( COERCE_FLOAT(a1[45] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[46] & _xmm) > 0.0000099999997
          && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
        {
          v12 = (float *)(*(_QWORD *)a2 + 24LL);
          goto LABEL_21;
        }
        if ( v3 < 0.0000099999997
          && COERCE_FLOAT(a1[45] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[46] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
        {
          return;
        }
      }
    }
LABEL_31:
    CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
    return;
  }
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)(*(_QWORD *)a2 + 4LL));
  v6 = *v5;
  v7 = (*v5)[6];
  if ( v7 > v4->left )
    v4->left = v7;
  v8 = v6[7];
  if ( v8 > v4->top )
    v4->top = v8;
  v9 = v6[8];
  if ( v4->right > v9 )
    v4->right = v9;
  v10 = v6[9];
  if ( v4->bottom > v10 )
    v4->bottom = v10;
  if ( IsEmpty(v4) )
  {
    v11[1] = 0LL;
    *v11 = 0LL;
  }
}
