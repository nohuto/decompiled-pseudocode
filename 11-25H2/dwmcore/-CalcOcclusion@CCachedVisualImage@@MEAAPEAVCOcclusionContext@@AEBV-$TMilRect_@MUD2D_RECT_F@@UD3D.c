/*
 * XREFs of ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180082770
 * Callers:
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180082720 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     ?GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ @ 0x180082880 (-GetVisualTree@CBackdropVisualImage@@EEBAPEAVCVisualTree@@XZ.c)
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800828A0 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x180082900 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall CCachedVisualImage::CalcOcclusion(CBackdropVisualImage *this, __int64 a2)
{
  __int64 v3; // rax
  struct CVisualTree *(__fastcall *v5)(CBackdropVisualImage *__hidden); // rax
  struct CVisualTree *VisualTree; // rax
  gsl::details *v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(gsl::details *, _QWORD *, char *); // rax
  char *v10; // rbx
  int v11; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 29) == v3
    && (*(__int64 (__fastcall **)(CBackdropVisualImage *))(*(_QWORD *)this + 216LL))(this) == *((_QWORD *)this + 27) )
  {
    return (char *)this + 208;
  }
  v5 = *(struct CVisualTree *(__fastcall **)(CBackdropVisualImage *__hidden))(*(_QWORD *)this + 216LL);
  if ( v5 == CBackdropVisualImage::GetVisualTree )
    VisualTree = CBackdropVisualImage::GetVisualTree(this);
  else
    VisualTree = v5(this);
  v7 = VisualTree;
  v8 = *(_QWORD *)VisualTree;
  v13[0] = 1LL;
  v13[1] = a2;
  v9 = *(__int64 (__fastcall **)(gsl::details *, _QWORD *, char *))(v8 + 200);
  if ( !a2 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v7);
    __debugbreak();
  }
  v10 = (char *)this + 208;
  if ( (char *)v9 == (char *)CDesktopTree::CalcOcclusion )
  {
    v11 = CDesktopTree::CalcOcclusion(v7, v13, v10);
  }
  else if ( (char *)v9 == (char *)CVisualTree::CalcOcclusion )
  {
    v11 = CVisualTree::CalcOcclusion(v7, v13, v10);
  }
  else
  {
    v11 = v9(v7, v13, v10);
  }
  if ( v11 >= 0 )
    return v10;
  return 0LL;
}
