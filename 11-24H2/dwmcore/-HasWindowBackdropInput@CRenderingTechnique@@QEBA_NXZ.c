/*
 * XREFs of ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18008A2EC
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180089FE4 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180042470 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18008A404 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18010E8F0 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 */

bool __fastcall CRenderingTechnique::HasWindowBackdropInput(const struct CBrushRenderingGraph **this)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  bool HasWindowBackdropInput; // al
  _QWORD *v5; // r8
  bool v6; // bl
  _QWORD *v8; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]

  CRenderingTechnique::GetFragmentIterator(this, &v8);
  while ( 1 )
  {
    v2 = v8;
    v3 = v9 == v8;
    if ( v9 == v8 )
      break;
    HasWindowBackdropInput = CRenderingTechniqueFragment::HasWindowBackdropInput(
                               (CRenderingTechniqueFragment *)*(v9 - 2),
                               *this);
    v2 = v8;
    if ( HasWindowBackdropInput )
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
