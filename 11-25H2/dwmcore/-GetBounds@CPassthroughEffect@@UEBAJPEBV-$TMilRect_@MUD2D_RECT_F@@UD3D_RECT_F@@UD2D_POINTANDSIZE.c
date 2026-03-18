/*
 * XREFs of ?GetBounds@CPassthroughEffect@@UEBAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x1802E5030
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CPassthroughEffect::GetBounds(__int64 a1, float *a2, int a3, float *a4)
{
  float *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r10

  v4 = a4;
  *(_OWORD *)a4 = DirectX::g_XMZero;
  if ( a3 )
  {
    do
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v4, a2);
      a2 = (float *)(v5 + 16);
    }
    while ( v6 != 1 );
  }
  return 0LL;
}
