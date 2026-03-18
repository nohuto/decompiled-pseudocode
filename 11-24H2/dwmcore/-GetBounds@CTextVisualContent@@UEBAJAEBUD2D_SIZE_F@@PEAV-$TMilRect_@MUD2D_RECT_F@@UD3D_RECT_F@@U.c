/*
 * XREFs of ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AD270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180295888 (-GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802989D0 (-GetBounds@CCompositionTextLine@@QEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 */

__int64 __fastcall CTextVisualContent::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rcx
  int Bounds; // edi
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rcx
  int v21[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v6 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)a3 = 0;
  v7 = *(__int64 **)(v6 + 680);
  v8 = *(__int64 **)(v6 + 688);
  while ( v7 != v8 )
  {
    v9 = *v7;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionGlyphRun::GetBounds(v9, a2, v21);
    if ( Bounds < 0 )
    {
      v11 = 102LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
        (const char *)(unsigned int)Bounds);
      return (unsigned int)Bounds;
    }
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v7;
  }
  v13 = *(_QWORD *)(a1 + 72);
  v14 = *(__int64 **)(v13 + 728);
  v15 = *(__int64 **)(v13 + 736);
  while ( v14 != v15 )
  {
    v16 = *v14;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionTextLine::GetBounds(v16, a2, v21);
    if ( Bounds < 0 )
    {
      v11 = 110LL;
      goto LABEL_6;
    }
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v14;
  }
  v17 = *(_QWORD *)(a1 + 72);
  v18 = *(__int64 **)(v17 + 704);
  v19 = *(__int64 **)(v17 + 712);
  while ( v18 != v19 )
  {
    v20 = *v18;
    *(_OWORD *)v21 = 0LL;
    Bounds = CCompositionTextLine::GetBounds(v20, a2, v21);
    if ( Bounds < 0 )
    {
      v11 = 118LL;
      goto LABEL_6;
    }
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v21);
    ++v18;
  }
  return 0LL;
}
