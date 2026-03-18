/*
 * XREFs of ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180239570
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

void __fastcall CGaussianBlurEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v4; // r11
  float v5; // xmm6_4
  __int64 v6; // r10
  int v7; // r10d
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = 0.0;
  *(_OWORD *)a3 = DirectX::g_XMZero;
  if ( !*(_DWORD *)(a1 + 184) )
    v5 = *(float *)(a1 + 176) * 3.0;
  v6 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    do
    {
      v8 = *(struct D2D_RECT_F *)(*(_QWORD *)v4 + 20 * v6 + 4);
      if ( !IsEmpty(&v8) )
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v8.left, v5, v5);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v8.left);
      v6 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v4 + 24) );
  }
}
