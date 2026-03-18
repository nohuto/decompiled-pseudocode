/*
 * XREFs of ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1801EEBB4
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1801EE820 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006C2B0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18014A530 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x1801EE9B4 (-HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@.c)
 */

bool __fastcall CRenderingTechnique::HasBlurredWallpaperBackdropInput(const struct CBrushRenderingGraph **this)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  char HasBlurredWallpaperBackdropInput; // al
  _QWORD *v5; // r8
  bool v6; // bl
  _QWORD *v8; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]

  CRenderingTechnique::GetFragmentIterator((__int64)this, (CFragmentIterator *)&v8);
  while ( 1 )
  {
    v2 = v8;
    v3 = v9 == v8;
    if ( v9 == v8 )
      break;
    HasBlurredWallpaperBackdropInput = CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
                                         (CRenderingTechniqueFragment *)*(v9 - 2),
                                         *this);
    v2 = v8;
    if ( HasBlurredWallpaperBackdropInput )
    {
      v3 = v9 == v8;
      break;
    }
    v5 = v9 - 2;
    v9 = v5;
    v3 = v5 == v8;
    if ( v5 == v8 )
      break;
    ++*((_DWORD *)v5 - 2);
    CFragmentIterator::FindFirst((CFragmentIterator *)&v8);
  }
  v6 = !v3;
  if ( v2 )
    std::_Deallocate<16,0>(v2, (v10 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
  return v6;
}
