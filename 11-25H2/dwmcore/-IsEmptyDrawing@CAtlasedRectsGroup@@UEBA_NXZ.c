/*
 * XREFs of ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1801DF120
 * Callers:
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DEFA0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DF1D0 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 */

char __fastcall CAtlasedRectsGroup::IsEmptyDrawing(CAtlasedRectsGroup *this)
{
  char v1; // di
  float *v2; // rbx
  __int64 *v5; // rbp
  __int64 *i; // r14
  __int64 v7; // rcx
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (float *)((char *)this + 104);
  if ( *((_BYTE *)this + 120) )
  {
    *((_QWORD *)this + 14) = 0LL;
    *(_QWORD *)v2 = 0LL;
    v5 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v5; ++i )
    {
      v7 = *i;
      *(_OWORD *)v8 = 0LL;
      CAtlasedRectsMesh::GetBounds(v7, v8);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v2, v8);
    }
    *((_BYTE *)this + 120) = 0;
  }
  if ( v2[2] <= *v2 || v2[3] <= v2[1] || !*((_QWORD *)this + 9) )
    return 1;
  return v1;
}
