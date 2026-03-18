/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008F0FC (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800326A8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180032710 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180032DB0 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180032F54 (--1CTreeData@@UEAA@XZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18028F238 (-RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rbx
  CVisual *v3; // rdi
  const struct CVisualTree **v4; // rbx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v6; // rbp
  CProjectedShadowCaster **i; // rsi

  v1 = (_QWORD *)((char *)this + 2608);
  while ( 1 )
  {
    v2 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v3 = (CVisual *)*(v2 - 15);
    v4 = (const struct CVisualTree **)(v2 - 46);
    if ( (**((_DWORD **)v3 + 29) & 0x80000) != 0 )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v3);
      v6 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
      for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v6; ++i )
        CProjectedShadowCaster::RemoveVisualPropertyDataFromTree(*i, v4[48]);
    }
    CTreeData::Clear((CTreeData *)v4);
    v4[48] = 0LL;
    if ( CVisual::GetUnusedTreeData(v3) )
    {
      *v4 = (const struct CVisualTree *)&CVisualTreeData::`vftable';
      CTreeData::~CTreeData((CTreeData *)v4);
      operator delete(v4, 0x188uLL);
    }
    else
    {
      CVisual::SetUnusedTreeData(v3, (struct CTreeData *)v4);
    }
  }
}
