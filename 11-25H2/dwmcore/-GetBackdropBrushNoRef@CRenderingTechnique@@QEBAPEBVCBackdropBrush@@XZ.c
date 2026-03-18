/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x1801EE920
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1801EE820 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006C2B0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18014A530 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x1801EEA50 (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 */

const struct CBackdropBrush *__fastcall CRenderingTechnique::GetBackdropBrushNoRef(
        const struct CBrushRenderingGraph **this)
{
  const struct CBackdropBrush *v1; // rbx
  _QWORD *v3; // r8
  const struct CBackdropBrush *BackdropBrushNoRef; // rax
  _QWORD *v5; // r9
  _QWORD *v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  CRenderingTechnique::GetFragmentIterator((__int64)this, (CFragmentIterator *)&v7);
  while ( 1 )
  {
    v3 = v7;
    if ( v8 == v7 )
      break;
    BackdropBrushNoRef = CRenderingTechniqueFragment::GetBackdropBrushNoRef(
                           (CRenderingTechniqueFragment *)*(v8 - 2),
                           *this);
    v3 = v7;
    v1 = BackdropBrushNoRef;
    if ( BackdropBrushNoRef )
      break;
    v5 = v8 - 2;
    v8 = v5;
    if ( v5 == v7 )
      break;
    ++*((_DWORD *)v5 - 2);
    CFragmentIterator::FindFirst((CFragmentIterator *)&v7);
  }
  if ( v3 )
    std::_Deallocate<16,0>(v3, (v9 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL);
  return v1;
}
