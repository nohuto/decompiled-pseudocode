/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180107850
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180133CBC (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800CE9F4 (--1CTreeData@@UEAA@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x180107A08 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180107A70 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180108110 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180170EBC (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18029B998 (-RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  CVisual *v4; // rdi
  const struct CVisualTree **v5; // rbx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v7; // rbp
  CProjectedShadowCaster **i; // rsi

  v2 = (_QWORD *)((char *)this + 2608);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    v4 = (CVisual *)*(v3 - 14);
    v5 = (const struct CVisualTree **)(v3 - 45);
    if ( (**((_DWORD **)v4 + 29) & 0x80000) != 0 )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v4, a2);
      v7 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
      for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v7; ++i )
        CProjectedShadowCaster::RemoveVisualPropertyDataFromTree(*i, v5[47]);
    }
    CTreeData::Clear((CTreeData *)v5);
    v5[47] = 0LL;
    if ( CVisual::GetUnusedTreeData(v4) )
    {
      *v5 = (const struct CVisualTree *)&CVisualTreeData::`vftable';
      CTreeData::~CTreeData((CTreeData *)v5);
      operator delete(v5, 0x180uLL);
    }
    else
    {
      CVisual::SetUnusedTreeData(v4, (struct CTreeData *)v5);
    }
  }
}
