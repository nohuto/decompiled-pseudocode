/*
 * XREFs of ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1801D1164
 * Callers:
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D1130 (-GetBounds@CAtlasedRectsGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D1420 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 */

void __fastcall CAtlasedRectsGroup::EnsureBounds(CAtlasedRectsGroup *this)
{
  __int64 *v2; // rbp
  __int64 *i; // rsi
  __int64 v4; // rcx
  float v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 120) )
  {
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 28) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 26) = 0;
    v2 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v2; ++i )
    {
      v4 = *i;
      *(_OWORD *)v5 = 0LL;
      CAtlasedRectsMesh::GetBounds(v4, v5);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 26, v5);
    }
    *((_BYTE *)this + 120) = 0;
  }
}
