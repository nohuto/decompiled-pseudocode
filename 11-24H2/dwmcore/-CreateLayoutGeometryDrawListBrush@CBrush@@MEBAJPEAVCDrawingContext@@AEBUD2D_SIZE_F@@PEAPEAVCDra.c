/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18013CA80
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18006BD80 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18013C510 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18006C010 (-Alloc@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrush::CreateLayoutGeometryDrawListBrush(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-18h]

  v6 = CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Alloc();
  v7 = 0;
  if ( v6 )
  {
    v6[1] = 1065353216LL;
    *((_DWORD *)v6 + 4) = 0;
    *(_QWORD *)((char *)v6 + 20) = 1065353216LL;
    *((_DWORD *)v6 + 7) = 0;
    *((_BYTE *)v6 + 52) = 0;
    *v6 = &CGeometryOnlyDrawListBrush::`vftable';
    *(_QWORD *)&v9 = 0LL;
    *((struct D2D_SIZE_F *)&v9 + 1) = *a3;
    *((_BYTE *)v6 + 52) = 1;
    *((_DWORD *)v6 + 12) = 50529027;
    *((_OWORD *)v6 + 2) = v9;
    *a4 = (struct CDrawListBrush *)v6;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x9Eu, 0LL);
    return (unsigned int)-2147024882;
  }
  return v7;
}
