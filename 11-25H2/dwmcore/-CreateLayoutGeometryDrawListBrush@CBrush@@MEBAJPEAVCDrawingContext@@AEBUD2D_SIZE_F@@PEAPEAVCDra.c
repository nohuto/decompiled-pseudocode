/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180010880
 * Callers:
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801251D0 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x180126F94 (-Alloc@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBrush::CreateLayoutGeometryDrawListBrush(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-18h]

  v6 = CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Alloc(this, a2);
  v7 = 0;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 1065353216LL;
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 20) = 1065353216LL;
    *(_DWORD *)(v6 + 28) = 0;
    *(_BYTE *)(v6 + 52) = 0;
    *(_QWORD *)v6 = &CGeometryOnlyDrawListBrush::`vftable';
    *(_QWORD *)&v9 = 0LL;
    *((struct D2D_SIZE_F *)&v9 + 1) = *a3;
    *(_BYTE *)(v6 + 52) = 1;
    *(_DWORD *)(v6 + 48) = 50529027;
    *(_OWORD *)(v6 + 32) = v9;
    *a4 = (struct CDrawListBrush *)v6;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Eu, 0LL);
    return (unsigned int)-2147024882;
  }
  return v7;
}
