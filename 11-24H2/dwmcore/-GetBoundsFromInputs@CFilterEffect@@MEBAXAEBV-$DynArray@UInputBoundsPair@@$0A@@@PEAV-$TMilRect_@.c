/*
 * XREFs of ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180221AB0
 * Callers:
 *     ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A95B0 (-GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-.c)
 *     ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A9C20 (-GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEA.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CFilterEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  char result; // al
  int v7; // r10d

  v3 = 0LL;
  v5 = a2;
  for ( *(_OWORD *)a3 = DirectX::g_XMZero; (unsigned int)v3 < *(_DWORD *)(v5 + 24); v3 = (unsigned int)(v7 + 1) )
    result = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
               a3,
               (float *)(*(_QWORD *)v5 + 4 * (v3 + 4 * v3 + 1)));
  return result;
}
