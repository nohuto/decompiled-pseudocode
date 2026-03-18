/*
 * XREFs of ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800325B4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800326A8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180032710 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180032F54 (--1CTreeData@@UEAA@XZ.c)
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18028F238 (-RemoveVisualPropertyDataFromTree@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::ReleaseVisualTreeData(CVisual *this, const struct CVisualTree **a2)
{
  _QWORD *v2; // rsi
  unsigned int Slot; // eax
  const struct CVisualTree ***v6; // r10
  __int64 v7; // r11
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v9; // r14
  CProjectedShadowCaster **i; // rdi

  v2 = (_QWORD *)((char *)this + 232);
  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v9 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v9; ++i )
      CProjectedShadowCaster::RemoveVisualPropertyDataFromTree(*i, a2[48]);
  }
  CTreeData::Clear((CTreeData *)a2);
  a2[48] = 0LL;
  if ( CVisual::GetUnusedTreeData(this) )
  {
    *a2 = (const struct CVisualTree *)&CVisualTreeData::`vftable';
    CTreeData::~CTreeData((CTreeData *)a2);
    operator delete(a2, 0x188uLL);
  }
  else if ( (*(_DWORD *)*v2 & 0x10000000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 4LL);
    if ( Slot < *(_DWORD *)(v7 + 4) )
      v6 = (const struct CVisualTree ***)(v7
                                        + *(unsigned int *)(v7 + 4)
                                        + 15LL
                                        + 8LL * Slot
                                        - (((unsigned __int8)*(_DWORD *)(v7 + 4) + 15) & 7));
    *v6 = a2;
  }
  else
  {
    *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 4LL) = a2;
  }
}
