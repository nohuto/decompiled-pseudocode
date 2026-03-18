/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x180133CBC
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180133020 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x1802233D0 (--_GCSubVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x180295F00 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800E3CEC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180107850 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180133D3C (--1-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_e.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x180133D74 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 */

void __fastcall CVisualTree::~CVisualTree(CVisualTree *this, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rcx

  *(_QWORD *)this = &CVisualTree::`vftable';
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = *(_DWORD **)(v3 + 232);
    if ( (*v4 & 0x8000000) != 0 )
      CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v4, 5LL);
  }
  CVisualTree::ReleaseTreeDatas(this, a2);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 315);
  detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>((char *)this + 2448);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 712));
  std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>((void ***)this + 13);
  CResource::~CResource(this);
}
